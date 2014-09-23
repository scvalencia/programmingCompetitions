package trainingJava;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class SpecialWord {
	
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String line;
		while((line = br.readLine()) != null) {
			String specialWord = line;
			String sentence = br.readLine();			
			System.out.println(process(specialWord, sentence));
		}
	}

	private static String process(String specialWord, String sentence) {
		int len = specialWord.length();
		String ans = "";
		String parse[] = sentence.split(" ");
		for(String word : parse) {
			if(word.length() == len)
				ans += specialWord + " ";
			else 
				ans += word + " ";
		}
		return ans;
	}
}
