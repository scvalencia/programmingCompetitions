import java.util.*;
import java.io.*;

public class checkerboard {

	public static int r;
	public static int c;
	public static int[][] grid;
	public static int[][] parity;

	public static void main(String[] args) throws Exception {

		// Read in the grid.
		BufferedReader stdin = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer tok = new StringTokenizer(stdin.readLine());
		r = Integer.parseInt(tok.nextToken());
		c = Integer.parseInt(tok.nextToken());
		grid = new int[r][c];
		for (int i=0; i<r; i++) {
			tok = new StringTokenizer(stdin.readLine());
			for (int j=0; j<c; j++)
				grid[i][j] = Integer.parseInt(tok.nextToken());
		}

		// Don't do my typical parity check...
		if (r == 1 || c == 1)
			System.out.println(solveOneRow());

		else {

			// Solve greedily.
			long sol = solve();

			// Try even parity for first slot, if possible.
			if (grid[0][0] == 0) {
				grid[0][0] = 2;
				long tmp = solve();
				grid[0][0] = 0;
				sol = update(sol, tmp);
			}

			// Try same parity for grid[0][1] as grid[0][0], if possible.
			if (grid[0][1] == 0) {
				boolean flag = false;
				if (grid[0][0] == 0) {
					grid[0][0] = 1;
					flag = true;
				}
				grid[0][1] = grid[0][0]+2;
				long tmp = solve();
				grid[0][1] = 0;
				if (flag) grid[0][0] = 0;
				sol = update(sol, tmp);
			}

			// Try both with even parity, if neither are filled in.
			if (grid[0][0] == 0 && grid[0][1] == 0) {
				grid[0][0] = 2; grid[0][1] = 4;
				long tmp = solve();
				sol = update(sol, tmp);
			}

			// Here is our answer.
			System.out.println(sol);
		}
	}

	// Returns the better of the two answers, cur, next. (-1 means no solution...)
	public static long update(long cur, long next) {
		if (next == -1) return cur;
		if (cur == -1) return next;
		return Math.min(cur, next);
	}

	// Solves the one row/one column case.
	public static long solveOneRow() {

		// Copy into 1D array.
		int[] vals = new int[r*c];
		for (int i=0; i<r*c; i++)
			vals[i] = grid[i/c][i%c];

		long total = 0;
		int curMin = 1;

		// Run greedy.
		for (int i=0; i<r*c; i++) {
			if (i > 0) curMin = vals[i-1]+1;
			if (vals[i] != 0 && vals[i] < curMin) return -1;
			if (vals[i] == 0) vals[i] = curMin;
			total += vals[i];
		}
		return total;
	}

	public static long solve() {


		int[][] copy = new int[r][];
		for (int i=0; i<r; i++)
			copy[i] = Arrays.copyOf(grid[i], c);

		long sum = 0;

		// Go through each row.
		for (int i=0; i<r; i++) {

			// Set up current minimum.
			int curMin = i == 0 ? 1 : copy[i-1][0]+1;

			// Go left to right on this row.
			for (int j=0; j<c; j++) {

				if (j > 0) curMin = Math.max(curMin, copy[i][j-1]+1);
				if (i > 0) curMin = Math.max(curMin, copy[i-1][j]+1);

				// Fix parity just in case.
				if (j > 1) {
					if (copy[i][j-2]%2 != curMin%2) curMin++;
				}
				else if (i > 1) {
					if (copy[i-2][j]%2 != curMin%2) curMin++;
				}
				else if (i==1 && j==1) {
					if (copy[i-1][j-1]%2 == curMin%2) curMin++;
				}
				else if (i==1 && j==0) {
					if (copy[i-1][j+1]%2 == curMin%2) curMin++;
				}

				// See if parity or increasing requirement are broken.
				if (copy[i][j] != 0) {
					if (copy[i][j] < curMin) return -1;
					if (i>0 && j>0 && copy[i-1][j-1]%2 == copy[i][j]%2) return -1;
					if (i>0 && j<c-1 && copy[i-1][j+1]%2 == copy[i][j]%2) return -1;
				}

				// Otherwise, just put this number in there.
				else {
					copy[i][j] = curMin;
				}

				// Add it.
				sum += copy[i][j];
			}
		}

		return sum;
	}
}