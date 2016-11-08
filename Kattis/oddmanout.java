import java.util.*;

public class oddmanout {

	public static int solve(int[] people) {
		HashMap<Integer, Integer> freqs = new HashMap<Integer, Integer>();
		int unique = 0;

		for(int p : people)
			if(freqs.containsKey(p))
				freqs.put(p, 2);
			else
				freqs.put(p, 1);

		for(int p : freqs.keySet())
			if(freqs.get(p) == 1) {
				unique = p;
				break;
			}

		return unique;
	}

    public static void main(String[] args) {
    	Scanner sc = new Scanner(System.in);
    	int testCases = Integer.parseInt(sc.nextLine());
    	int caseCount = 1;

        while(testCases-- > 0) {
        	int peopleCount = Integer.parseInt(sc.nextLine());
        	String[] parse = sc.nextLine().split(" ");
        	int[] people = new int[peopleCount];

        	for(int i = 0; i < peopleCount; i++)
        		people[i] = Integer.parseInt(parse[i]);

        	System.out.printf("Case #%d: %d\n", caseCount++, solve(people));
        }
    }
}