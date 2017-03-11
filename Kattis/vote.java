import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;

public class vote {
    
    static String MAJORITY = "majority winner %d";
    
    static String MINORITY = "minority winner %d";
    
    static String NONE = "no winner";
    
    public static void main(String... args) {
        Scanner sc = new Scanner(System.in);
        int testcases = sc.nextInt();
        
        while(testcases-- > 0) {
            int candidates = sc.nextInt(), total = 0, max = 0, mxs = 0;
            List<Integer> votes = new ArrayList<Integer>();
            
            for(int i = 0; i < candidates; i++) {
                int current = sc.nextInt();
                total += current;
                max = Math.max(max, current);
                votes.add(current);
            }

            for(Integer i : votes)
                if(i == max) mxs++;
            
            if(mxs != 1) System.out.println(NONE);

            else {
                int idx = votes.indexOf(max) + 1;
                System.out.printf(((max > (total / 2)) ? MAJORITY : MINORITY) + '\n', idx);
            } 
        }
    }
}