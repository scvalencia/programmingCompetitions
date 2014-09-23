import java.io.*;
import java.math.*;
import java.util.*;
class Main {
	
	public static void main(String[] args) throws IOException {
		BufferedReader br;
		br = new BufferedReader(new InputStreamReader(System.in));
		Map<String, Integer> map = new HashMap<String, Integer>();
		Set<String> keys = new TreeSet<String>();
		String line;
		int cases = Integer.parseInt(br.readLine());
		for(int i = 1; i <= cases; i++) {
			line = br.readLine();
			String country = line.split(" ")[0];
			keys.add(country);
			if(map.containsKey(country)) {
				int value = map.get(country);
				map.put(country, value + 1);
			}
			else
				map.put(country, 1);
		}
		int i = 0;
		String [] keysArrays = new String[keys.size()];
		for(String itm : keys) {
			keysArrays[i] = itm;
			i++;
		}
		Arrays.sort(keysArrays);			
		for(String itm : keysArrays) 
			System.out.println(itm + " " + map.get(itm));
		br.close();
	}
}