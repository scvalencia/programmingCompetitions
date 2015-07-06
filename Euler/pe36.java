import java.math.*;

class pe36 {
	
	public static void main(String[] args) {
		int i = 1, ans = 0;
		while(i < 1000000) {
			String number = i + "";
			String binary = Integer.toBinaryString(i);
			if(isPalindromic(number) && isPalindromic(binary))
				ans += i;
			i++;
		}
		System.out.println(ans);
	}
	
	public static boolean isPalindromic(String word) {
		return word.equals(new StringBuffer(word).reverse().toString());
	}
}