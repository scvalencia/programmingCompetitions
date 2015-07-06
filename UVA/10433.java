import java.io.*;
import java.math.*;

class Main {
	static final boolean DEBUGGING = false;
    static BufferedReader in;
    public static void main(String[] args) throws IOException {
        in = new BufferedReader(new InputStreamReader(System.in));
        String line;
        while((line = in.readLine()) != null && !line.equals("")) {
            line = line.trim();
            BigInteger number = new BigInteger(String.valueOf(line));
            BigInteger power = number.pow(2);
            if(number.toString().equals("0") || number.toString().equals("1"))
                System.out.println("Not an Automorphic number.");
            else {
                String n = number.toString();
                String np = power.toString();
                char ldn = n.charAt(n.length() - 1);
                char ldnp = np.charAt(np.length() - 1);
                if(ldn == ldnp) {
                    int digits = n.length();
                    System.out.println("Automorphic number of " + String.valueOf(digits) + "-digit.");
                }
                else
                    System.out.println("Not an Automorphic number.");
            }
        }        
    }
}