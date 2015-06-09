import java.math.*;
import java.util.*;

class Main {
	public static void main(String[] args) {
		BigInteger a = BigInteger.ONE;
		BigInteger b = BigInteger.ZERO;
		int n = 1;
		while(getDigitCount(a) != 1000) {
			BigInteger c = a.add(b);
			b = a;
			a = c;	
			n += 1;		
		}

		System.out.println(n);

	}

	public static int getDigitCount(BigInteger number) {
	  	double factor = Math.log(2) / Math.log(10);
	  	int digitCount = (int) (factor * number.bitLength() + 1);
	  	if (BigInteger.TEN.pow(digitCount - 1).compareTo(number) > 0) {
	    	return digitCount - 1;
	  	}
	  	return digitCount;
	}
}