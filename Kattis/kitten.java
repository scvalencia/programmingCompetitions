import java.util.*;

public class kitten {

	public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        sc.useDelimiter("\\n");
        int kittenPosition = sc.nextInt();
        sc.nextLine();

        int leave = kittenPosition;
        HashMap<Integer, List<Integer>> reacheable = new HashMap<Integer, List<Integer>>();

        while(true) {
            String[] parse = sc.nextLine().split(" ");
            leave = Integer.parseInt(parse[0]);

            if(leave == -1) break;

            reacheable.put(leave, new ArrayList<Integer>());

            for(int i = 1; i < parse.length; i++)
                reacheable.get(leave).add(Integer.parseInt(parse[i]));
        }

        boolean root = false;
        int current = -1;
        while(!root) {
            for(Integer l : reacheable.keySet()) {

                current = l;
                root = true;

                if(reacheable.get(l).contains(kittenPosition)) {
                    System.out.print(kittenPosition + " ");
                    kittenPosition = l;
                    root = false;
                }
            }

            System.out.println(kittenPosition);
            reacheable.remove(current);
        }
    }
}