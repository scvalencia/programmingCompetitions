import java.util.*;
import java.io.*;

public class primalpartitions {

	static int BOUND = 1000000;

	static int n, k, i, ans, length;
	static int[] sieve, primes, values;

	public static void main(String[] args) throws Exception {

		populatePrimes(); processInput(); solve();

	}

	public static void solve() {
		if (!probablepartition(0))
			ans = 0;

		else {

			int low = 0;
			int high = primes.length - 1;

			while(low < high - 1) {
				int mid = (low + high) / 2;
				if(probablepartition(mid))
					low = mid;
				else
					high = mid - 1;
			}

			while (low < primes.length && probablepartition(low)) 
				low++;

			ans = primes[low - 1];
		}

		System.out.println(ans);

	}

	public static void processInput() throws Exception {
		BufferedReader stdin = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer tokenizer = new StringTokenizer(stdin.readLine());

		n = Integer.parseInt(tokenizer.nextToken());
		k = Integer.parseInt(tokenizer.nextToken());

		values = new int[n];
		tokenizer = new StringTokenizer(stdin.readLine());

		for (i = 0; i < n; i++) 
			values[i] = Integer.parseInt(tokenizer.nextToken());

	}

	public static void populatePrimes() {
		int i;
		sieve = new int[BOUND + 1];
		length = sieve.length;

		for(i = 0; i < length; i++)
			sieve[i] = -1;

		for (i = 2; i < length; i++)
			if(sieve[i] == -1) {
				int j = i;
				for (; j < length; j += i)
					sieve[j] = i;
			}

		int primeCount = 0;
		for (i = 2; i < length; i++)
			if (sieve[i] == i)
				primeCount++;

		primes = new int[primeCount];
		int idx = 0;
		for (i = 2; i < length; i++)
			if (sieve[i] == i)
				primes[idx++] = i;
	}

	public static boolean probablepartition(int item) {

		int candidate = primes[item];
		int minimum = 0, idx = 0, flag = 1, pivot;

		while(idx < n) {

			if(minimum >= k)
				return false;

			pivot = values[idx];
			if(sieve[pivot] < candidate)
				return false;

			idx += 1;
			while(idx < n) {
				pivot = gcd(pivot, values[idx]);

				if (sieve[pivot] < candidate) 
					break;
				else
					idx += 1;
			}

			minimum++;
		}

		return true;
	}

	public static int gcd(int a, int b) {
		if (a == 0) 
			return b;

		if (b == 0) 
			return a;

		return gcd(b, a % b);
	}
}