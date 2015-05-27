import java.io.*;
import java.math.*;
import java.util.*;

class Main {
	
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String line;
		int cases = Integer.parseInt(br.readLine());
		while(cases-- > 0) {
			line = br.readLine();
			System.out.println(solve(line));
		}
		
		br.close();
	}

	public static String solve(String line) {
		Hashtable<Character, Integer> frequencies = new Hashtable<Character, Integer>();
		ArrayList<Character> aux = new ArrayList<Character>();
		String ans = "";

		int max = -1;

		for(int i = 0; i < line.length(); i++) {
			char key = line.charAt(i);
			if(Character.isLetter(key)) {
				key = Character.toLowerCase(key);
				if(frequencies.containsKey(key))
					frequencies.put(key, frequencies.get(key) + 1);
				else
					frequencies.put(key, 1);
			}
		}

		for(Integer itm : frequencies.values())
			max = Math.max(max, itm);

		for(Character ch : frequencies.keySet())
			if(frequencies.get(ch) == max)
				aux.add(ch);

		Collections.sort(aux);

		for(Character ch : aux)
			ans += ch + "";

		return ans;
	} 
}