import java.io.*;
import java.math.*;
import java.util.*;

class Main
{
	static final boolean DEBUGGING = false;
	static ArrayList<String> words;
    static HashMap<String, String> wordsMap;
    static HashMap<String, ArrayList<String>> finalMap;    
    static BufferedReader in;

    public static void main(String[] args) throws IOException {
        if(DEBUGGING)
        	in = new BufferedReader(new FileReader("in.txt"));
       	else
            in = new BufferedReader(new InputStreamReader(System.in));
        words = new ArrayList<String>();
        wordsMap = new HashMap<String, String>();
        finalMap = new HashMap<String, ArrayList<String>>();
        int TC = Integer.parseInt(in.readLine().trim());
        in.readLine();
        while(TC > 0) {
        	String line;
	        while((line = in.readLine()) != null && !line.equals("")) {
	        	line = line.trim();
	        	String[] parse = line.split(" ");
	        	String aux = "";
	        	for(String itm : parse)
	        		aux += itm;
	        	words.add(line);
	        	char[] chars = aux.toCharArray();
	        	Arrays.sort(chars);
	        	aux = new String(chars);
	        	wordsMap.put(line, aux);
	        }
	        for(String word : words) {
	        	String value = wordsMap.get(word);
	        	for(String itm : wordsMap.values())
	        		if(finalMap.containsKey(word)) {
	        			finalMap.get(word).add(itm);
	        		}
	        		else {
	        			ArrayList<String> newValue = new ArrayList<String>();
	        			finalMap.put(word, newValue);
	        			finalMap.get(word).add(itm);
	        		}
	        }
        	TC--;
        }
        String line;
        while((TC > 0) && (line = in.readLine()) != null && !line.equals("")) {
        	line = line.trim();
        	String[] parse = line.split(" ");
        	String aux = "";
        	for(String itm : parse)
        		aux += itm;
        	words.add(line);
        	System.out.println(aux);
        	TC--;
        }
    }
}