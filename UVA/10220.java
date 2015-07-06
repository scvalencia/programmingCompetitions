import java.math.*;
import java.util.*;

class Main {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int sum[] = new int[1050];
		for(int i = 0; i < 1050; i++) {
			BigInteger factorial = BigInteger.ONE;
			for(int j = 1; j <= i; j++) {
				factorial = factorial.multiply(BigInteger.valueOf(j));
			}
			String valFactorial = factorial.toString();
			for(int k = 0; k < valFactorial.length(); k++) {
				sum[i] += valFactorial.charAt(k) - '0';
			}
		}

		while(scanner.hasNext())
			System.out.println(sum[scanner.nextInt()]);
	}
}
