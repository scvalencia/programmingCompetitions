import java.util.*;

public class zoo {

	public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int testcases = Integer.parseInt(sc.nextLine()), counter = 0;
        String line = "";

        while(testcases != 0) {

            Map<String, Integer> freqs = new TreeMap<String, Integer>();
            for(int i = 0; i < testcases; i++) {
                String[] parse = sc.nextLine().toLowerCase().split(" ");
                String animal = parse[parse.length - 1];

                if(freqs.containsKey(animal))
                    freqs.put(animal, freqs.get(animal) + 1);
                else
                    freqs.put(animal, 1);
            }

            System.out.println("List " + ++counter + ":");
            for(String animal : freqs.keySet())
                System.out.println(animal + " | " + freqs.get(animal));

            testcases = Integer.parseInt(sc.nextLine());

        }
    }
}