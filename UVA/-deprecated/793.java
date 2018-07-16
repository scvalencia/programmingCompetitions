import java.io.*;
import java.util.*;

class Main {
    static int[] parent;
    static int[] size;

    public static void init(int n) {
        parent = new int[n + 1];
        size = new int[n + 1];
        for(int i = 0; i < n; i++) {
            parent[i] = i;
            size[i] = 1;
        }
    }

    public static int find(int p) {
        while(p != parent[p]) p = parent[p];
        return p;
    }

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Scanner sc = new Scanner(System.in);
        String l;
        String[] sp;

        int testCases = Integer.parseInt(br.readLine());
        br.readLine();
        char query; int computer1, computer2, n;        
        
        int yes, no;
        for (int i = 0; i < testCases; i++){
            
            n = Integer.parseInt(br.readLine());

            init(n);
            yes = 0; no = 0;

            while((l = br.readLine()) != null && !l.equals("")){
                sp = l.split(" ");
                query = sp[0].charAt(0);
                computer1 = Integer.parseInt(sp[1]);
                computer2 = Integer.parseInt(sp[2]);

                int rootP = find(computer1);
                int rootQ = find(computer2);

                if(query == 'c') {

                    if(rootP == rootQ)
                        continue;

                    if (size[rootP] < size[rootQ]) {
                        parent[rootP] = rootQ;
                        size[rootQ] += size[rootP];
                    } else {
                        parent[rootQ] = rootP;
                        size[rootP] += size[rootQ];
                    }
                } else {
                    if(rootP == rootQ)
                        yes++;
                    else
                        no++;
                }


            }

            System.out.printf("%d,%d\n", yes, no);
            if(i != (testCases - 1))
                System.out.println();

        }
    }
}