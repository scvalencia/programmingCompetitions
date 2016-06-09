import java.util.*;

public class haypoints {

	static Hashtable<String, Long> fees;

    public static void main(String[] args) {
    	Scanner sc = new Scanner(System.in);
        String[] parse = sc.nextLine().split(" ");
    	int dict = Integer.parseInt(parse[0]);
        int desc = Integer.parseInt(parse[1]);

        fees = new Hashtable<String, Long>();

        for(int i = 0; i < dict; i++) {
            parse = sc.nextLine().split(" ");
            String word = parse[0];
            Long fee = Long.parseLong(parse[1]);
            fees.put(word, fee);
        }

        int i = 0;
        Long ans = 0L;
        while(i < desc) {
            String line = sc.nextLine();
            if(line.equals(".")) {
                System.out.println(ans);
                ans = 0L;
                i++;
            }
            else
                for(String s : line.split(" "))
                    if(fees.containsKey(s))
                        ans += fees.get(s);
        }
    }
}