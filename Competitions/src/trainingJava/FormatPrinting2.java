package trainingJava;

import java.util.Scanner;

public class FormatPrinting2 {
	
	public static void main(String[] args) {
		double pi = Math.PI;
		Scanner sc = new Scanner(System.in);
		while(sc.hasNext()) {
			int n = sc.nextInt();
			System.out.printf("%." + n +"f\n", pi);
		}
		
	}

}
