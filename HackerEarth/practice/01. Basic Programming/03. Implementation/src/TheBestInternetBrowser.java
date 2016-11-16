import java.util.*;

public class TheBestInternetBrowser  {

	public static boolean isVowel(char c) {
  		return "aeiou".indexOf(c) != -1;
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int testCases = Integer.parseInt(sc.nextLine());

		while(testCases-- > 0) {
			String line = sc.nextLine();
			String[] parsedURL = line.split("\\.");
			String address = parsedURL[1];

			int actual = 4;

			for(int i = 0; i < address.length(); i++) {
				char ch = address.charAt(i);
				if(!isVowel(ch))
					actual++;
			}
			
			System.out.println(actual + "/" + line.length());
		}	
	}
}