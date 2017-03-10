import java.util.*;

public class quickbrownfox {

	public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int testcases = Integer.parseInt(sc.nextLine()), counter = 0;
        String line = "";

        while(counter++ < testcases) {
            int[] frequencies = new int[26];
            line = sc.nextLine();

            for(int i = 0; i < line.length(); i++) {
                char ch = Character.toLowerCase(line.charAt(i));
                if(Character.isLetter(ch))
                    frequencies[(int) ch - 97]++;
            }

            boolean pangram = true;
            List<Character> chs = new ArrayList<Character>();

            for(int i = 0; i < frequencies.length; i++) {
                if(frequencies[i] == 0) {
                    pangram = false;
                    chs.add((char) (i + 97));
                }
            }

            if(pangram)
                System.out.print("pangram");
            else {
                System.out.print("missing ");
                for(char ch : chs)
                    System.out.print(ch);
            }

            System.out.println();

        }
    }
}