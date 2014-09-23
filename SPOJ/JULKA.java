import java.io.*;
import java.math.*;
class JULKA {

	static BufferedReader br;
	
	public static void main(String[] args) throws IOException {
		br = new BufferedReader(new InputStreamReader(System.in));
		solve();
		br.close();
	}

	private static void solve() throws IOException {
		int counter = 0;
		String line;
		while((line = br.readLine()) != null) {
			BigInteger total = new BigInteger(line);
			line = br.readLine();
			BigInteger difference = new BigInteger(line);
			BigInteger natalia = total.subtract(difference).divide(new BigInteger("2"));
			BigInteger klaudia = total.subtract(natalia);
			System.out.println(klaudia);
			System.out.println(natalia);
			counter++;
			if(counter == 10)
				break;
		}
			
	}
}