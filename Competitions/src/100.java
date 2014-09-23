import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Scanner;

class Main {
	
	public static void main(String[] args) {
		boolean scanning = true;
		if(scanning) {
			Scanner sc = new Scanner(System.in);
		    while(sc.hasNext()) {
		    	int a = sc.nextInt(), b = sc.nextInt();
		    	int number = maxCycle(a, b);
		        System.out.printf("%d %d %d\n", a, b, number);
		    }
		}
		else {
			BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
			String line;
			try {
				while((line = br.readLine()) != null) {
					String[] parse = line.split(" ");
					int a = Integer.parseInt(parse[0]);
					int b = Integer.parseInt(parse[1]);
					int number = maxCycle(a, b);
				    System.out.printf("%d %d %d\n", a, b, number);
				}
			} catch (Exception e) {	
				//Unreachable code
			}
		}
	}

	private static int maxCycle(int a, int b) {
		if(a > b) {
			int temp = a;
			a = b;
			b = temp;
		}
		int max = collatz(a);
		for(int i = a + 1; i <= b; i++) 
			max = Math.max(collatz(i), max);
		return max;
	}

	private static int collatz(int n) {
		int length = 1;
		while(n != 1) {
			if(n % 2 == 0)
				n /= 2;
			else
				n = 3*n + 1;
			length++;
		}
		return length;
	}
}