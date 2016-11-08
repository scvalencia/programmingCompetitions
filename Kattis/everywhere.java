import java.util.*;

public class everywhere {

	static Hashtable<String, Long> fees;

    public static void main(String[] args) {
    	Scanner sc = new Scanner(System.in);
        int testCases = sc.nextInt();

        while(testCases-- > 0) {
            int locations = sc.nextInt();
            Set<String> uniques = new HashSet<String>();
            
            for(int i = 0; i < locations; i++) {
                String location = sc.next();
                uniques.add(location);
            }

            System.out.println(uniques.size());
        }
    }
}