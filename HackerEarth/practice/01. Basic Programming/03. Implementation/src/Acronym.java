import java.util.*;

public class Acronym {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int dislikedLength = Integer.parseInt(sc.nextLine());
		int sentenceLength = 0;
		Set<String> disliked = new HashSet<String>();

		while(dislikedLength-- > 0)
			disliked.add(sc.nextLine());

		sentenceLength = Integer.parseInt(sc.nextLine());
		String[] sentece = sc.nextLine().split(" ");
		List<Character> letters = new ArrayList<Character>();

		for(String word : sentece) {
			boolean mem = disliked.contains(word);
			if(!mem)
				letters.add(word.toUpperCase().charAt(0));
		}

		String ans = letters.get(0) + "";

		for(int i = 1; i < letters.size(); i++) {
			char ch = letters.get(i);
			ans += "." + ch;
		}

		System.out.println(ans);	
	}
}