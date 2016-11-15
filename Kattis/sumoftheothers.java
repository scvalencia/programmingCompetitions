import java.util.*;

public class sumoftheothers {

	public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        while(sc.hasNextLine()) {
            String line = sc.nextLine();
            String[] parse = line.split(" ");
            int[] numbers = new int[parse.length];
            int summation = 0;

            for(int i = 0; i < parse.length; i++) {
            	numbers[i] = Integer.parseInt(parse[i]);
            	summation += numbers[i];
            }

            for(int i = 0; i < numbers.length; i++) {
            	int current = numbers[i];
            	if(summation - current == current) {
            		System.out.println(current);
            		break;
            	}
            }
        }
    }
}

