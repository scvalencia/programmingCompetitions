import java.util.*;

public class cups {

    public static boolean isNumeric(String str) {
        for (char c : str.toCharArray())
            if (!Character.isDigit(c)) 
                return false;
        
        return true;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        HashMap<Integer, String> sortedCups = new HashMap<Integer, String>();
        sc.useDelimiter("\\n");
        int count = sc.nextInt();

        while(count-- > 0) {
            String line = sc.next();
            String[] parse = line.split(" ");

            String command1 = parse[0], command2 = parse[1];

            String color;
            int radius;

            if(isNumeric(command1)) {
                color = command2;
                radius = Integer.parseInt(command1);
                radius /= 2;
            } else {
                color = command1;
                radius =  Integer.parseInt(command2);
            }

            sortedCups.put(radius, color);
        }

        List<Integer> list = new ArrayList(sortedCups.keySet());
        Collections.sort(list);

        for(Integer key : list)
            System.out.println(sortedCups.get(key));
    }
}