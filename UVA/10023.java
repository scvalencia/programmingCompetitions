import java.io.*;
import java.math.*;
import java.util.*;

class Main {
	
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String line;
		int cases = Integer.parseInt(br.readLine());
		br.readLine();
		while(cases != 0) {
			cases--;
			line = br.readLine();
			System.out.println(line.equals("0") ? "0" : sqrt(new BigInteger(line)));
			if(cases > 0) 
				System.out.println();
			br.readLine();			
		}
		br.close();
	}

	public static BigInteger sqrt(BigInteger number) {
	    BigInteger temp = number.shiftRight(BigInteger.valueOf(number.bitLength()).shiftRight(1).intValue()), result = null;
	    while (true) {
	        result = temp.add(number.divide(temp)).shiftRight(1);
	        if (!temp.equals(result)) temp = result;
	        else
	            break;
	    }	   
	    return result;
	} 
}