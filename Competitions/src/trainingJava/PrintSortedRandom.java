package trainingJava;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Set;
import java.util.TreeSet;

public class PrintSortedRandom {
	
	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String line;
		while((line = br.readLine()) != null) {
			int cases = Integer.parseInt(line);
			ArrayList<Integer> numbers = new ArrayList<Integer>();
			Set<Integer> set = new TreeSet<Integer>();
			for(int i = 0; i < cases; i++) {
				line = br.readLine();
				int n = Integer.parseInt(line);
				set.add(n);
			}
			for(int i : set)
				numbers.add(i);
			Collections.sort(numbers);
			System.out.println(numbers);			
		}
	}
}
