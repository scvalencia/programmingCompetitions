import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class CCPL {
	
	static BufferedReader br;
	static boolean test = true;
	static String fileName = "./src/data/CCPL.in";
	
	public static void main(String[] args) throws IOException {
		if(test)
			br = new BufferedReader(new FileReader(new File(fileName)));
		else
			br = new BufferedReader(new InputStreamReader(System.in));
		solve();
		br.close();
	}

	private static void solve() throws IOException {
		String line;
		while((line = br.readLine()) != null) {
			String[] parse = line.split(" ");
			int a = Integer.parseInt(parse[0]), b = Integer.parseInt(parse[1]);
			int max, min;
			if(a > b) {
				max = a; min = b;
			}
			else {
				max = b; min = a;
			}
			int maxLength = sequenceLength(a);
			for(int i = min + 1; i <= max; i++) {
				int flag = sequenceLength(i);			
				if(flag > maxLength)
					maxLength = flag;
			}
			System.out.printf("%d %d %d\n", a, b, maxLength);			
		}		
	}
	
	private static int sequenceLength(int n) {
		int ans = 1;
		while(n != 1) {
			if(n % 2 == 1)
				n = 3*n + 1;
			else
				n = n/2;
			ans++;
		}
		return ans;
	}
}