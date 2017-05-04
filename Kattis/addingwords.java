import java.util.*;

public class addingwords {

	public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        HashMap<String, Integer> env = new HashMap<String, Integer>();
        HashMap<Integer, String> vals = new HashMap<Integer, String>();

        
        while(sc.hasNextLine()) {
        	String data = sc.nextLine();
        	String[] parse = data.split(" ");
        	String command = parse[0];

        	switch(command) {
        		case "def":
        			String variable = parse[1];
        			Integer value = Integer.parseInt(parse[2]);
        			env.put(variable, value);
        			vals.put(value, variable);
        			break;

        		case "calc":
        			value = env.get(parse[1]);
        			char op = '+';
        			boolean unknown = false;

        			for(int i = 2; i < parse.length; i++) {
        				String token = parse[i];
        				if(i % 2 == 0)
        					op = token.charAt(0);
        				else {
        					int envvalue = -1;

        					if(env.containsKey(token))
        						envvalue = env.get(token);
        					else {
        						unknown = true;
        						break;
        					}

        					if(op == '+') 
        						value += envvalue;
        					else if(op == '-')
        						value -= envvalue;
        				}
        				
        			}

        			for(int i = 1; i < parse.length; i++)
        				System.out.print(parse[i] + " ");

        			if(unknown)
        				System.out.println("unknown");
        			else
        				System.out.println((vals.containsKey(value)) ? (vals.get(value)) : "unknown");

        			break;

        		case "clear":

        			env.clear();
        			vals.clear();
        			break;
        	}
        }
    }
}