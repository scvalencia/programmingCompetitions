package trainingJava;

import java.util.Scanner;

public class FormatPrinting1 {
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		while(sc.hasNext()) {
			double input = sc.nextDouble();
			System.out.printf("%7.3f\n", input);
		}
	}

}
