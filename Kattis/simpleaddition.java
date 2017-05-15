import java.util.*;
import java.math.*;

public class simpleaddition {

    public static void main(String[] args) {
    	
        Scanner sc = new Scanner(System.in);

        BigInteger n1 = new BigInteger(sc.nextLine());
        BigInteger n2 = new BigInteger(sc.nextLine());

        System.out.println(n1.add(n2));

    }
}