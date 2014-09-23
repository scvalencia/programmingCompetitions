import java.util.*;
import java.io.*;

class perm {

    public static Set<String> permutationFinder(String str) {
        Set<String> perm = new HashSet<String>();
        //Handling error scenarios
        perm.add(str);
        if (str == null) 
            return null;
        else if (str.length() == 0) {
            perm.add("");
            return perm;
        }
        char initial = str.charAt(0); // first character
        String rem = str.substring(1); // Full string without first character
        Set<String> words = permutationFinder(rem);
        for (String strNew : words) 
            for (int i = 0; i <= strNew.length(); i++)
                perm.add(charInsert(strNew, initial, i));
            
        return perm;
    }
 
    public static String charInsert(String str, char c, int j) {
        String begin = str.substring(0, j);
        String end = str.substring(j);
        return begin + c + end;
    }
 
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int TC = in.nextInt();
        while (TC-- > 0) {
            String word = in.next();
            long desired = in.nextLong();
            Set<String> ans = permutationFinder(word);
            ArrayList<String> arrayAns = new ArrayList<String>();
            for(String s : ans)
                arrayAns.add(s);
            Collections.sort(arrayAns);
            System.out.println(arrayAns.get((int)desired)); 
        }
    }    
}