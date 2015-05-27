import java.math.BigInteger;

public class pe20 {

	public static void main(String[] args) {

		System.out.println(summation(fact(1000).toString()));

	}

	public static BigInteger fact(int number) {
		BigInteger ans = BigInteger.valueOf(number);
		for(int i = 1; i < number; i++)
			ans = ans.multiply(BigInteger.valueOf(i));
		return ans;
	}

	public static int summation(String word) {
		int ans = 0;
		for(int i = 0; i < word.length(); i++)
			ans += Character.getNumericValue(word.charAt(i));
		return ans;
	}
}