import java.util.*;

public class t9spelling {

	static Hashtable<Character, String> balance;

	public static void populate() {
		int[] correspondece = {2, 22, 222, 3, 33, 333, 4, 44, 444, 5, 55, 555,
								6, 66, 666, 7, 77, 777, 7777, 8, 88, 888, 9, 99,
								999, 9999};

		for(int i = 0; i < correspondece.length; i++) {
			char letter = (char) (97 + i);
			balance.put(letter, Integer.toString(correspondece[i]));
		}

		balance.put(' ', Integer.toString(0));		
	}

    public static void main(String[] args) {
    	Scanner sc = new Scanner(System.in);
    	int testcases = Integer.parseInt(sc.nextLine()), i = 0;
    	String line, ans;

    	balance = new Hashtable<Character, String>();
    	populate();
        
        while (i < testcases) {
        	line = sc.nextLine();
        	ans = balance.get(line.charAt(0));
        	for(int j = 1; j < line.length(); j++) {
        		char pre = line.charAt(j - 1);
        		char cur = line.charAt(j);
        		String prehs = balance.get(pre);
        		String curhs = balance.get(cur);

        		if(prehs.charAt(0) == curhs.charAt(0))
        			ans += " ";

        		ans += curhs;
        	}

            System.out.printf("Case #%d: %s\n", i + 1, ans);
            i += 1;
        }
    }

}