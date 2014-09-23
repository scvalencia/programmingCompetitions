package trainingJava;

import java.util.ArrayList;
import java.util.Arrays;

public class StringPermutation1 {
	
	static ArrayList<String> perms;
	
	public static void main(String[] args) {
		int SELECT = 3;
		perms = new ArrayList<String>();
		String word = "A";
		int length = word.length();
		if(SELECT == 1) {			
			boolean[] used = new boolean[length];
			StringBuffer out = new StringBuffer(length);
			permutations(word, length, out, used, 0);			
		}
		else if(SELECT == 2) 
			permutations("", word);
		else if(SELECT == 3) {
			String[] parsedWord = new String[length];
			for(int i = 0; i < length; i++)
				parsedWord[i] = word.substring(i, i + 1);
			printPermutations(parsedWord);
		}
		
		System.out.println(perms);
	}

	private static void permutations(String word, int length, StringBuffer out,
			boolean[] used, int pos) {
		if(pos == length) {
			perms.add(out.toString());
			return;
		}
		else {
			for(int i = 0; i < length; i++) {
				if(used[i])
					continue;
				out.append(word.charAt(i));
				used[i] = true;
				permutations(word, length, out, used, pos + 1);
				out.deleteCharAt(out.length() - 1);
				used[i] = false;
			}
		}		
	}
	
	private static void permutations(String prefix, String word) {
		int n = word.length();
		if(n == 0)
			perms.add(prefix);
		else {
			for(int i = 0; i < n; i++)
				permutations(prefix + word.charAt(i), word.substring(0, i) + 
						word.substring(i + 1, n));				
		}
	}
	
	@SuppressWarnings("unused")
	private static char[] nextPermutation(char[] perm){
		// TODO
	    int len = perm.length;
	    int k0 = -1;
	    for(int i = 0; i < len - 1; i++)
	        if(perm[i] < perm[i + 1])
	            k0 = i;
	    if(k0 == -1)
	        return null;

	    int l0 = k0 + 1;
	    for(int i = k0 + 1; i < len; i++)
	        if(perm[k0] < perm[i])
	            l0 = i;
	    
	    char temp = perm[k0];
	    perm[k0] = perm[l0];
	    perm[l0] = temp;
	    		
	    char[] aux = Arrays.copyOfRange(perm, k0, len);
	    reverse(aux);
	    
	    for(int i = k0 + 1; i < len - 1; i++)
	    	perm[i] = aux[i];
	    
	    return perm;	    
	}
	
	private static void reverse(char[] data) {
	    for (int left = 0, right = data.length - 1; left < right; left++, right--) {
	        // swap the values at the left and right indices
	        char temp = data[left];
	        data[left]  = data[right];
	        data[right] = temp;
	    }
	}
	private static void printPermutations( Comparable[] c ) {
		System.out.println( Arrays.toString( c ) );
		while ( ( c = nextPermutation( c ) ) != null) {
				System.out.println( Arrays.toString( c ) );
		}
	}

	// modifies c to next permutation or returns null if such permutation does not exist
	@SuppressWarnings("unchecked")
	private static Comparable[] nextPermutation( final Comparable[] c ) {
		// 1. finds the largest k, that c[k] < c[k+1]
		int first = getFirst( c );
		if ( first == -1 ) return null; // no greater permutation
		// 2. find last index toSwap, that c[k] < c[toSwap]
		int toSwap = c.length - 1;
		while ( c[ first ].compareTo( c[ toSwap ] ) >= 0 )
			--toSwap;
		// 3. swap elements with indexes first and last
		swap( c, first++, toSwap );
		// 4. reverse sequence from k+1 to n (inclusive) 
		toSwap = c.length - 1;
		while ( first < toSwap )
			swap( c, first++, toSwap-- );
		return c;
	}

	// finds the largest k, that c[k] < c[k+1]
	// if no such k exists (there is not greater permutation), return -1
	private static int getFirst( final Comparable[] c ) {
		for ( int i = c.length - 2; i >= 0; --i )
			if ( c[ i ].compareTo( c[ i + 1 ] ) < 0 )
				return i;
		return -1;
	}

	// swaps two elements (with indexes i and j) in array 
	private static void swap( final Comparable[] c, final int i, final int j ) {
		final Comparable tmp = c[ i ];
		c[ i ] = c[ j ];
		c[ j ] = tmp;
	}
}
