import java.io.*;
import java.math.*;
import java.util.*;

class Main
{

    static final boolean DEBUGGING = false;
    static final long N = 200;
    static SortedSet<Integer> uglyNumbers;    
    static BufferedReader in;

    public static void main(String[] args) throws IOException {
        uglyNumbers = new TreeSet<Integer>();
        if(DEBUGGING)
        	in = new BufferedReader(new FileReader("in.txt"));
       	else
            in = new BufferedReader(new InputStreamReader(System.in));
        uglyNumbers.add(1);
        generateUglyNumbers();
        for(Integer itm : uglyNumbers) {
            System.out.println(itm);
        }
    }

    static void generateUglyNumbers() {
        for(Iterator<Integer> it = uglyNumbers.iterator(); it.hasNext();) {
            int itm = it.next();
            if(uglyNumbers.size() > N)
                break;
            uglyNumbers.add(itm * 2);
            uglyNumbers.add(itm * 3);
            uglyNumbers.add(itm * 5);            
        }
    }
}