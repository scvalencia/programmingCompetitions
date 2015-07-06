import java.io.*;
import java.math.*;
import java.util.*;

class Main
{

    static final boolean DEBUGGING = false;
    static HashMap<String, Integer> relation;    
    static BufferedReader in;

    public static void main(String[] args) throws IOException {
        relation = new HashMap<String, Integer>();
        if(DEBUGGING)
        	in = new BufferedReader(new FileReader("in.txt"));
       	else
            in = new BufferedReader(new InputStreamReader(System.in));
        String numberLine;
        int cases = 1;
        while((numberLine = in.readLine()) != null && !numberLine.equals("")) {
            int number = Integer.parseInt(numberLine);
            String namesLine = in.readLine().trim();
            String names[] = namesLine.split(" ");
            for(String name : names)
                relation.put(name, 0);
            int counter = 0;
            while(counter < number) {
                counter++;
                String wholeLine = in.readLine().trim();
                String parse[] = wholeLine.split(" ");
                String name = parse[0];
                int amount = Integer.parseInt(parse[1]);
                int howMany = Integer.parseInt(parse[2]);
                if(howMany == 0 || amount == 0)
                    continue;
                int amountInCount = relation.get(name); 
                int divisionValue = amount / howMany;
                amountInCount -= (divisionValue * howMany);
                relation.put(name, amountInCount);
                for(int i = 3; i < parse.length; i++) {
                    int currentValue = relation.get(parse[i]);
                    int newValue = currentValue + divisionValue;
                    relation.put(parse[i], newValue);
                }                
            }
            if(cases > 1)
                System.out.println();
            for(String name : names)
                System.out.println(name + " " + relation.get(name));
            cases++;
        }
    }
}