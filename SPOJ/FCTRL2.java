import java.io.*;
import java.math.*;
class FCTRL2 {
	
	static BufferedReader br;
		
		public static void main(String[] args) throws IOException {
			br = new BufferedReader(new InputStreamReader(System.in));
			solve();
			br.close();
		}

		private static void solve() throws IOException {
			int counter;
			String line = br.readLine();
			counter = Integer.parseInt(line);
			while(counter > 0) {
				line = br.readLine();
				int rep = Integer.parseInt(line);
				System.out.println(factorial(rep));
				counter--;
			}
				
		}
		
		private static BigInteger factorial(int number) {
			BigInteger ans = new BigInteger("1");
			for(int i = 1; i <= number; i++) {
				String rep = String.valueOf(i);
				BigInteger newRep = new BigInteger(rep);
				ans = ans.multiply(newRep);
			}
			return ans;
		}
}