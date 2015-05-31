import java.math.*;

class pe12 {
	
	static long triangularNumber;
	static int index;
	
	public static void main(String[] args) {
		triangularNumber = 1;
		index = 1;
		int i = countDivisors();
      while(i < 500) {
			i = countDivisors();
			System.out.println(triangularNumber + " " + i);
			nextTrangularNumber();
      }
		
	}
	
	public static int countDivisors() {
		int ans = 0;
		for(long i = 1; i * i <= triangularNumber; i++) {
			if(triangularNumber % i == 0) {
				if(i * i < triangularNumber) ans += 2;
				else ans += 1;
			}
		}
		return ans;
	}
	
	public static void nextTrangularNumber() {
		index++;
		triangularNumber += index;       
	}
}