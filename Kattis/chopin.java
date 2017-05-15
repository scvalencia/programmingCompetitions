import java.util.*;

public class chopin {

    public static HashMap<String, String> equivalence = new HashMap<String, String>() {{
        put("A#", "Bb");
        put("Bb", "A#");

        put("C#", "Db");
        put("Db", "C#");

        put("D#", "Eb");
        put("Eb", "D#");

        put("F#", "Gb");
        put("Gb", "F#");

        put("G#", "Ab");
        put("Ab", "G#");
    }};

    public static void main(String[] args) {
    	
        Scanner sc = new Scanner(System.in);
        int cases = 1;

        while(sc.hasNext()) {
            String input = sc.nextLine();
            String[] parse = input.split(" ");
            String note = parse[0], tonality = parse[1];

            if(equivalence.containsKey(note))
                System.out.printf("Case %d: %s %s\n", cases++, equivalence.get(note), tonality);
            else
                System.out.printf("Case %d: UNIQUE\n", cases++);
        }
    }
}