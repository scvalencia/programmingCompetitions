import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashMap;
import java.util.Map;

class Main
{

    static final HashMap<Character, Character> hm = new HashMap<Character, Character>();
    static final boolean DEBUGGING = false;

    public static void main(String[] args) throws IOException {
        final BufferedReader in;
        hm.put('A', 'A');
        hm.put('E', '3');
        hm.put('H', 'H');
        hm.put('I', 'I');
        hm.put('J', 'L');
        hm.put('L', 'J');
        hm.put('M', 'M');
        hm.put('O', 'O');
        hm.put('S', '2');
        hm.put('T', 'T');
        hm.put('U', 'U');
        hm.put('V', 'V');
        hm.put('W', 'W');
        hm.put('X', 'X');
        hm.put('Y', 'Y');
        hm.put('Z', '5');
        hm.put('1', '1');
        hm.put('2', 'S');
        hm.put('3', 'E');
        hm.put('5', 'Z');
        hm.put('8', '8');
        if(!DEBUGGING)
            in = new BufferedReader(new InputStreamReader(System.in));
        else
            in = new BufferedReader(new FileReader("in.txt"));
        String line;
        while((line = in.readLine()) != null && !line.equals("")) {
            System.out.println(solve(line.trim()));
            System.out.println();
        }
    }

    static String solve(String word) {
        if(isMirroredPalindrome(word))
            return word + " -- is a mirrored palindrome.";
        if(isMirroredString(word))
            return word + " -- is a mirrored string.";
        if(isPalindrome(word))
            return word + " -- is a regular palindrome.";
        else
            return word + " -- is not a palindrome.";
    }

    static boolean isMirroredPalindrome(String word) {
        return isPalindrome(word) && isMirroredString(word);
    }

    static boolean isPalindrome(String string){
        int left = 0;
        int right = string.length() - 1;
        for(; left < right && string.charAt(left) == string.charAt(right); left++, right--);
        return left >= right;
    }

    static boolean isMirroredString(String string){
        for(int i = string.length() - 1; i >= 0; i--) {
            if(!hm.containsKey(string.charAt(i)) || 
                hm.get(string.charAt(i)) != string.charAt(string.length() - i - 1))
                    return false;
            }
        return true;
    }
}