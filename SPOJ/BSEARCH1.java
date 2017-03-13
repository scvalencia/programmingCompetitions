import java.io.*;
import java.math.*;
import java.util.*;

public class BSEARCH1 {

	static BufferedReader br;
		
	public static void main(String[] args) throws IOException {
		br = new BufferedReader(new InputStreamReader(System.in));
		solve();
		br.close();
	}

	private static void solve() throws IOException {
		int size, queries, i = 0;
		String line = br.readLine();
		String[] parse = line.split(" ");

		size = Integer.parseInt(parse[0]);
		queries = Integer.parseInt(parse[1]);
		
		int[] array = new int[size];

		line = br.readLine();
		for(String n : line.split(" "))
			array[i++] = Integer.parseInt(n);

		int query = 0;
		for(i = 0; i < queries; i++) {
			query = Integer.parseInt(br.readLine());
			int idx = Arrays.binarySearch(array, query);
			System.out.println((idx < 0) ? -1 : idx);
		}
				
	}
}