package trainingJava;

import java.util.ArrayList;
import java.util.Collection;
import java.util.List;

public class PowerSet {

	public static void main(String[] args) {
		List<Integer> set = new ArrayList<Integer>();
		for(int i = 0; i <= 20; i++)
			set.add(i);
		System.out.println(set);
		System.out.println(powerset(set));

	}
	
	public static <T> List<List<T>> powerset(Collection<T> list) {
	    List<List<T>> ps = new ArrayList<List<T>>();
	    ps.add(new ArrayList<T>());   // start with the empty set
	 
	    // for every item in the original list
	    for (T item : list) {
	      List<List<T>> newPs = new ArrayList<List<T>>();
	 
	      for (List<T> subset : ps) {
	        // copy all of the current powerset's subsets
	        newPs.add(subset);
	 
	        // plus the subsets appended with the current item
	        List<T> newSubset = new ArrayList<T>(subset);
	        newSubset.add(item);
	        newPs.add(newSubset);
	      }
	 
	      // powerset is now powerset of list.subList(0, list.indexOf(item)+1)
	      ps = newPs;
	    }
	    return ps;
	  }
	

}
