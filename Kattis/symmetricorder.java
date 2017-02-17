import java.util.*;

public class symmetricorder {

    public static void main(String[] args) {
    	Scanner sc = new Scanner(System.in);

    	int n, set = 1;

        while((n = Integer.parseInt(sc.nextLine())) != 0) {
        	String[] names = new String[n];
        	String[] sorted = new String[n];

        	for(int i = 0; i < n; i++) 
        		names[i] = sc.nextLine();

        	int i = 0, j = n - 1;
        	int uc = 0, lc = 1;

        	while(i < j) {
        		sorted[i++] = names[uc];
        		sorted[j--] = names[lc];

        		uc += 2;
        		lc += 2;
        	}

        	if(i == j)
        		sorted[i] = names[n - 1];

        	System.out.println("SET " + set++);
        	for(String name : sorted)
        		System.out.println(name);
        }
    }
}