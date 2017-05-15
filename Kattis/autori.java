import java.util.*;

public class autori {

    public static String solve(String input) {
        String[] parse = input.split("-");
        String ans = "";
        for(String st : parse)
            ans += st.charAt(0);
        return ans;
    }

    public static void main(String[] args) {
    	
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();
        System.out.println(solve(input));

    }
}