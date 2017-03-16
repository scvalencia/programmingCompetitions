import java.io.*;
import java.math.*;
import java.util.*;

class Player {

	int turn;
	int heapSize;
	List<String> heap;

	Player(int turn) {
		this.turn = turn;
		this.heapSize = 0;
		this.heap = new ArrayList<String>();
	}

	void placeFaceDown(String card) {
		this.heap.add(card);
		this.heapSize++;
	}

	void placeFaceDown(List<String> heap) {
		int newHeapSize = 0;
		List<String> newHeap = new ArrayList<String>();

		for(String card : heap) {
			newHeapSize++;
			newHeap.add(card);
		}

		for(String card : this.heap) {
			newHeapSize++;
			newHeap.add(card);
		}

		this.heap = newHeap;
		this.heapSize = newHeapSize;
	}

	String play() {
		String card = this.heap.get(heapSize - 1);
		this.heap.remove(heapSize - 1);
		heapSize--;
		return card;
	}

	boolean lost() {
		return this.heapSize == 0;
	}
}

class Simulation {

	Player p1, p2, current, exposer;
	List<String> heap;
	String currentCard;
	int turn;

	Simulation(Player p1, Player p2) {
		this.p1 = p1;
		this.p2 = p2;

		this.turn = 0;
		this.current = p1;
		this.exposer = null;

		this.heap = new ArrayList<String>();
	}

	boolean isFaceCard() {
		char rank = this.currentCard.charAt(1);
		return ((rank == 'A') || (rank == 'K') || (rank == 'Q') || (rank == 'J'));
	}

	void simulate() {
		while(!p1.lost() || !p2.lost()) {
			currentCard = current.play();
			current = (current == p1) ? p2 : p3;

			if(this.isFaceCard()) {
				exposer = current;
				current = (current == p1) ? p2 : p3;
			}
			System.out.println(this.isFaceCard());
		}
	}

	void enterSequence() {
		// change current, change exposer
	}

}

class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		while(true) {
			String line = br.readLine();

			if(line.length() == 1) break;

			line += ' ' + br.readLine() + ' ' + br.readLine() + ' ' + br.readLine();
			String[] cards = line.split(" ");

			int i = 0;
			Player p1 = new Player(1), p2 = new Player(2);

			while(i < 52) {
				if(i % 2 == 0)
					p1.placeFaceDown(cards[i]);
				else
					p2.placeFaceDown(cards[i]);
				i++;
			}

			Simulation sim = new Simulation(p1, p2);
			sim.simulate();

		}
		
	}

}