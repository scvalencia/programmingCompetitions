import java.util.*;

public class rijeci { 

    public static void main(String[] args) {
        List<Integer> as = new ArrayList<Integer>() {{
            add(1); add(0);
        }};

        List<Integer> bs = new ArrayList<Integer>() {{
            add(0); add(1);
        }};

        for(int i = 1; i != 46; i++) {
            as.add(as.get(i) + as.get(i - 1));
            bs.add(bs.get(i) + bs.get(i - 1));
        }

    	Scanner sc = new Scanner(System.in);
        int k = sc.nextInt();

        System.out.println(as.get(k) + " " + bs.get(k));
    }
}