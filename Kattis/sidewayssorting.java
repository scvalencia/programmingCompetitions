import java.util.*;

public class sidewayssorting {

    public static void main(String[] args) {
    	Scanner sc = new Scanner(System.in);
    	String line = sc.nextLine();
    	String[] parse = parse = line.split(" ");
    	int r = Integer.parseInt(parse[0]);
    	int c = Integer.parseInt(parse[1]);

        while(true) {

        	String[] words = new String[c];

        	for(int i = 0; i < c; i++)
        		words[i] = "";

        	for(int i = 0; i < r; i++) {
        		String word = sc.nextLine();
        		for(Character ch : word)
        		System.out.println(word);
        	}

        	
        	line = sc.nextLine();
        	parse = line.split(" ");
    		r = Integer.parseInt(parse[0]);
    		c = Integer.parseInt(parse[1]);

    		if(r == 0 && c == 0)
    			break;
    		else
    			System.out.println();
        }
    }
}