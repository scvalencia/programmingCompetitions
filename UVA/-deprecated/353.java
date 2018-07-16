import java.io.*;
import java.util.*;

class Main
{

    public static void main(String[] args) throws IOException {
        BufferedReader buf = new BufferedReader(
                new InputStreamReader(System.in));
        while (true) {
            String line = buf.readLine();
            if (line == null)
                break;
            Set<String> to = getSubstrings(line);
            int size = to.size();
            System.out.println("The string '" + line + "' contains " + size
                    + " palindromes.");
        }
    }

    static Set<String> getSubstrings(String word) {
        Set<String> ans = new HashSet<String>();
        if(isPalindrome(word))
            ans.add(word);
        for(int i = 0; i < word.length(); i++) {
            for(int j = 0; i + j <= word.length(); j++) {
                String sub = word.substring(j, i + j);
                if("".equals(sub))
                    continue;
                if(isPalindrome(sub))
                    ans.add(sub);
            }
        }
        return ans;
    }

    static boolean isPalindrome(String word) {
        for(int i = 0; i < word.length() / 2; i++)
            if(word.charAt(i) != word.charAt(word.length() - 1 - i))
                return false;
        return true;
    }
}