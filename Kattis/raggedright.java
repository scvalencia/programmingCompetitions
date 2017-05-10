import java.util.*;

public class raggedright {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        List<Integer> lengths = new ArrayList<Integer>();
        int max = 0, ans = 0;

        while(sc.hasNextLine()) {
            String line = sc.nextLine();
            int length = line.length();

            if(length > max) max = length;
            lengths.add(length);
        }

        for(int i = 0; i < lengths.size() - 1; i++)
        	ans += (max - lengths.get(i)) * (max - lengths.get(i));

        System.out.println(ans);
    }
}