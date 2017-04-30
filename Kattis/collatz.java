import java.util.*;

public class collatz {

    public static List<Integer> sequence(int n) {
        int next = n;
        List<Integer> sequence = new ArrayList<Integer>();

        while(next != 1) {
            if(next % 2 == 0)
                next /= 2;
            else
                next = 3 * next + 1;
            sequence.add(next);
        }

        return sequence;       
    }

    public static void main(String[] args) {
    	
        Scanner sc = new Scanner(System.in);
        List<Integer> sa, sb;
        int a = 1, b = 1;

        while(true) {
            a = sc.nextInt();
            b = sc.nextInt();

            if(a == 0 && b == 0)
                break;

            sa = sequence(a);
            sb = sequence(b);

            int idxa = 0, idxb = 0;

            for(; idxa < Math.max(sa.size(), sb.size()); idxa++)
                if(idxa < sa.size())
                    System.out.println(sa.get(idxa));
           
        }
    }
}