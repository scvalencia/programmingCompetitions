/*
ID: **.****#
LANG: JAVA
TASK: namenum
*/

import java.io.*;
import java.util.*;

class namenum {

    public static final String DICT = "dict.txt";
    public static List<String> dict;

    public static String hash(String word) {
        String ans = "";
        for(int i = 0; i < word.length(); i++) {
            char ch = word.charAt(i);
            if(ch == 'A' || ch == 'B' || ch == 'C')
                ans += "2";
            else if(ch == 'D' || ch == 'E' || ch == 'F')
                ans += "3";
            else if(ch == 'G' || ch == 'H' || ch == 'I')
                ans += "4";
            else if(ch == 'J' || ch == 'K' || ch == 'L')
                ans += "5";
            else if(ch == 'M' || ch == 'N' || ch == 'O')
                ans += "6";
            else if(ch == 'P' || ch == 'R' || ch == 'S')
                ans += "7";
            else if(ch == 'T' || ch == 'U' || ch == 'V')
                ans += "8";
            else
                ans += "9";
        }
        return ans;
    }    

    public static void main (String [] args) throws IOException {

        BufferedReader in = new BufferedReader(new FileReader("namenum.in"));
        PrintWriter out = new PrintWriter(new BufferedWriter(new FileWriter("namenum.out")));

        String number = in.readLine();

        int count = 0;
        String line = "";
        BufferedReader dict = new BufferedReader(new FileReader(DICT));
        while((line = dict.readLine()) != null) {
            //out.println(number.equals(hash(line)));
            if(number.compareTo(hash(line)) == 0) {
                out.println(line.trim());
                count++;
            }
        }

        if(count == 0)
            out.println("NONE");

        out.close(); 
        System.exit(0);        
    }
}