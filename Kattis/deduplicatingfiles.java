import java.util.*;

public class deduplicatingfiles {

    public static int hash(String filecontent) {
        int hash = 0;

        for(int i = 0; i < filecontent.length(); i++) {
            char ch = filecontent.charAt(i);
            hash ^= (int) ch;
        }

        return hash;
    }

	public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int testcases = Integer.parseInt(sc.nextLine()), counter = 0;
        String line = "";

        while(testcases != 0) {

            Set<String> uniquefiles = new HashSet<String>();
            List<String> files = new ArrayList<String>();

            for(int i = 0; i < testcases; i++) {
                String filecontent = sc.nextLine();
                uniquefiles.add(filecontent);
                files.add(filecontent);
            }

            int collision = 0;

            for(int i = 0; i < testcases; i++) {
                String file1 = files.get(i);
                int hash1 = hash(file1);
                for(int j = i + 1; j < testcases; j++) {
                    String file2 = files.get(j);
                    int hash2 = hash(file2);

                    if(hash1 == hash2 && !file1.equals(file2))
                        collision++;
                }
            }

            System.out.println(uniquefiles.size() + " " + collision);

            testcases = Integer.parseInt(sc.nextLine());

        }
    }
}