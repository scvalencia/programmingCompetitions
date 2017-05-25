import java.util.*;

public class extensiveor {

	public static int n;
	public static int exponent;
	public static int[] bits;

	public static long[][][] move;
	final public static long MODULO = 1000000007L;
	final public static int PARITY = 2;

	public static void main(String[] args) {

		getInput();
		possibilities();

		long[][] myBase = getOneIter();
		long[][] res = exp(myBase, exponent);

		System.out.println(res[0][(1 << n) - 1]);
	}

	public static void getInput() {
		Scanner stdin = new Scanner(System.in);

		n = stdin.nextInt();
		exponent = stdin.nextInt();

		char[] tmp = stdin.next().toCharArray();
		bits = new int[tmp.length];

		for (int i = 0; i < tmp.length; i++)
			bits[i] = tmp[i] - '0';

	}

	public static void possibilities() {
		int bits = 2;
		move = new long[bits][1 << n][];

		for (int i = 0; i < bits; i++)
			for (int j = 0; j < (1 << n); j++)
				move[i][j] = computeFrom(i,j);

	}

	public static long[] computeFrom(int bit, int mask) {

		long[] res = new long[1 << n];

		for(int col=0; col < (1 << n); col++) {
			if(Integer.bitCount(col) % PARITY != 0) 
				continue;

			if (transition(mask, (bit << n) + col) == -1) continue;
			res[transition(mask, (bit << n) + col)]++;
		}

		return res;
	}

	public static int transition(int mask, int col) {

		for(int i = 0; i < n; i++)
			if(((mask >> i) & 1) == 0)
				if(((col >> i) & 1) > ((col >> (i + 1)) & 1)) 
					return -1;

		int newmask = mask;
		for(int i = 0; i < n; i++)
			if(((mask >> i) & 1) == 0)
				if(((col >> i) & 1) != ((col >> (i + 1)) & 1))
					newmask += (1 << i);

		return newmask;
	}

	public static long[][] getOneIter() {
		long[][] res = identity(1 << n);

		for (int i = 0; i < bits.length; i++)
			res = mult(res, move[bits[i]]);

		return res;
	}

	public static long[][] identity(int n) {
		long[][] mat = new long[n][n];

		for (int i = 0; i < n; i++)
			mat[i][i] = 1;

		return mat;
	}

	public static long[][] mult(long[][] a, long[][] b) {

		int size = a.length;
		long[][] res = new long[size][size];

		for (int i = 0; i < size; i++)
			for (int j = 0; j < size; j++)
				for (int k = 0; k < size; k++)
					res[i][j] = (res[i][j] + a[i][k] * b[k][j]) % MODULO;

		return res;
	}

	public static long[][] exp(long[][] base, int power) {

		if (power == 0) 
			return identity(base.length);

		if (power == 1) 
			return base;

		if (power % PARITY == 0) {
			long[][] mysqrt = exp(base, power / PARITY);
			return mult(mysqrt, mysqrt);
		} else {
			return mult(exp(base, power - 1), base);
		}
	}
}