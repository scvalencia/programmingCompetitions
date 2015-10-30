import java.util.Random;
 
public class dragones{
	private static int roll(int nDice, int nSides){
		int sum = 0;
		Random rand = new Random();
		for(int i = 0; i < nDice; i++){
			sum += rand.nextInt(nSides) + 1;
		}
		return sum;
	}
 
	private static int diceGame(int p1Dice, int p1Sides, int p2Dice, int p2Sides, int rolls){
		int p1Wins = 0;
		for(int i = 0; i < rolls; i++){
			int p1Roll = roll(p1Dice, p1Sides);
			int p2Roll = roll(p2Dice, p2Sides);
			if(p1Roll > p2Roll) p1Wins++;
		}
		return p1Wins;
	}
 
	public static void main(String[] args){
		int p1Dice = 1; int p1Sides = 2;
		int p2Dice = 1; int p2Sides = 3;
		int rolls = 100;
		int p1Wins = diceGame(p1Dice, p1Sides, p2Dice, p2Sides, rolls);
		System.out.println(rolls + " rolls, p1 = " + p1Dice + "d" + p1Sides + ", p2 = " + p2Dice + "d" + p2Sides);
		System.out.println("p1 wins " + (100.0 * p1Wins / rolls) + "% of the time");
	}
}