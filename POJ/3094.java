import java.io.*;

class Main {

	public static int solve(String word) {
		int len = word.length();
		int ans = 0;

		for(int i = 0; i < len; i++) {
			char ch = word.charAt(i);
			int value = (ch == ' ') ? 0 : ((int) ch - 65) + 1;
			ans += (i + 1) * value;
		}

		return ans;
	}

	public static void main(String[] args) throws Exception {
		InputStreamReader cin = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(cin);
		String line = br.readLine();

		while(!line.equals("#")) {
			System.out.println(solve(line));
			line = br.readLine();
		}
	}
}