import java.io.*;
import java.math.*;

class Main
{

    static final HashMap<Character, Character> hm = new HashMap<Character, Character>();
    static final boolean DEBUGGING = false;
    static BufferedReader in;

    public static void main(String[] args) throws IOException {
        if(DEBUGGING)
        	in = new BufferedReader(new FileReader("in.txt"));
       	else
            in = new BufferedReader(new InputStreamReader(System.in));
        String line;
        int a, b;
        while((line = in.readLine()) != null && !line.equals("")) {
        	line = line.trim();
        	String[] parse = line.split(" ");
        	a = Integer.parseInt(parse[0]);
        	b = Integer.parseInt(parse[1]);
            System.out.println(solve(a, b));
        }
    }

    static BigInteger solve(int N, int A) {
        BigInteger a = BigInteger.valueOf(A);
        BigInteger ans = BigInteger.ZERO;
        int i = 1;
        for(; i <= N; i++) {
        	BigInteger term = a.pow(i);
        	term = term.multiply(BigInteger.valueOf(i));
        	ans = ans.add(term);
        }
        return ans;
    }
}