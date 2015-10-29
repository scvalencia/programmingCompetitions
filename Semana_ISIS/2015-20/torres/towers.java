import java.util.*;
import java.io.*;


public class towers {

	public static void main(String... args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String line;
		int n, w, s;

		while((line = br.readLine()) != null) {
			n = Integer.parseInt(line);
			ArrayList<Student> list = new ArrayList<Student>();
			while(n > 0) {
				String[] parse = br.readLine().split(" ");
				w = Integer.parseInt(parse[0]);
				s = Integer.parseInt(parse[1]);
				list.add(new Student(w, s - w));
				n--;
			}

			n = list.size();

			System.out.println(solve(list, n));			
		}
	
	}

	static class Student implements Comparator<Student>, Comparable<Student> {
		int weight;
		int strength;

		Student() {}

		Student(int w, int s) {
		    weight = w;
		    strength = s;
		}

		@Override
		public int compare(Student s1, Student s2) {
	      	if (this.strength == s2.strength)
	            return this.weight - s2.weight;
	        return this.strength - s2.strength;
	   	}

	   	@Override
	    public int compareTo(Student s2) {
	        if (this.strength == s2.strength)
	            return this.weight - s2.weight;
	        return this.strength - s2.strength;
	    }
	}

	public static int solve(List<Student> list, int n) {

		Collections.sort(list);

        int[][] table = new int[n + 1][n + 1];
        int ans = 0;
        int i = 0;
        int j;
        boolean flag = true;

        for (; i < n; i++)
            for (j = 0; j <= n; j++)
            	if(j == 0)
            		table[i][j] = j;
            	else
            		table[i][j] = Integer.MAX_VALUE;

        table[0][1] = list.get(0).weight;

        for (i = 1; i < n; i++)
            for (j = 1; j <= i + 1; j++) {    	
                table[i][j] = Math.min(table[i][j], table[i - 1][j]);
                table[i][j] = (list.get(i).strength > table[i - 1][j - 1]) ? Math.min(table[i][j],
                            table[i - 1][j - 1] + list.get(i).weight) : table[i][j];
            }


        i = n;
        while(i >= 0 && flag) {
        	if(table[n - 1][i] != Integer.MAX_VALUE && (ans = i) != 0)
                flag = false;
        	i--;
        }

        return ans;
	}

	
}


