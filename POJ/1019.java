import java.io.*;

class Main {

	public static final int SIZE = 31270;

	public static final long BOUND = 2147483647;

	public static long[] accumulate;


	public static int digitCount(int number) {

		if(number < 10)
			return 1;
		else if(number < 100)
			return 2;
		else if(number < 1000)
			return 3;
		else if(number < 10000)
			return 4;
		else if(number < 100000)
			return 5;
		else if(number < 1000000)
			return 6;
		else if(number < 10000000)
			return 7;
		else if(number < 100000000)
			return 8;
		else if(number < 1000000000)
			return 9;
		
		return 10;

	}

	public static void memoize() {
		int[] digits = new int[SIZE];
		accumulate = new long[SIZE];

		digits[0] = 1;
		accumulate[0] = 1;

		for(int i = 1; i < SIZE; i++) {
			digits[i] = digits[i - 1] + digitCount(i + 1);
			accumulate[i] = accumulate[i - 1] + Long.valueOf(digits[i]);
		}
	}

	public static void main(String[] args) throws Exception {
		InputStreamReader cin = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(cin);

		memoize();

		String line = br.readLine(), numberString;
		int testCases = Integer.parseInt(line);
		int digit, i, n;
		long j;

		while(testCases-- > 0) {
			line = br.readLine();
			digit = Integer.parseInt(line);

			for(i = 0; accumulate[i] < digit; i++);
			
			i = i - 1; n = 1;
			numberString = "";

			for(j = accumulate[i]; j < digit; j += Long.valueOf(digitCount(n)), n++)
				numberString += String.valueOf(n);

			j = accumulate[i];
			for(i = 0; j < digit; i++, j++);
			
			System.out.println(numberString.charAt(i - 1));
		}
	
	}
}