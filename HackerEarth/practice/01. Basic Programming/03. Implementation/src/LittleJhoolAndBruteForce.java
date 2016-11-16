/*
 * REFERENCE: http://www.geeksforgeeks.org/count-pairs-with-given-sum/
*/

import java.util.*;

public class LittleJhoolAndBruteForce {

	public static final int BOUND = 704977;

	public static List<Integer> cubes;

	public static HashMap<Integer, Integer> table;

	public static void memoization() {
		table = new HashMap<Integer, Integer>();
		cubes = new ArrayList<Integer>();
		int i = 0, cube = 0;

		while(cube < BOUND) {
			cube = i * i * i;
			cubes.add(cube);
			i++;
		}

		for(int cb : cubes)
			if(table.containsKey(cb)) {
				int count = table.get(cb);
				table.put(cb, count + 1);
			} else
				table.put(cb, 1);
	}

	public static int getPairsCount(int sum) {

		int pairs = 0;

		for(int cube : cubes)
			if(table.containsKey(sum - cube)) {
				pairs += table.get(sum - cube);

				if(sum - cube == cube)
					pairs--;
			}

		return pairs / 2;
	}

	public static void main(String[] args) {
		memoization();
		Scanner sc = new Scanner(System.in);
		int testCases = Integer.parseInt(sc.nextLine());

		while(testCases-- > 0) {
			int n = Integer.parseInt(sc.nextLine());
			int ans = -1;

			for(int i = n - 1; i > 0; i--) {
				if(getPairsCount(i) > 1) {
					ans = i;
					break;
				}
			}

			System.out.println(ans);
		}
			
	}
}