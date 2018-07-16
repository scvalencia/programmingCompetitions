import java.math.*;
import java.util.*;

class Main {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		String number = scanner.nextLine();
		int idx = 0;

		while(!number.equals("END")) {
			int xc = number.length();
			int xp = (int) (Math.log10(xc) + 1);
			idx++;

			while(xp != xc) {
				xc = xp;
				xp = (int) (Math.log10(xc) + 1);
				idx++;
			}

			System.out.println(idx + 1);

			number = scanner.nextLine();
			idx = 0;
		}
	}
}
