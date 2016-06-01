import java.io.*;
import java.util.*;

class Main {
    static int[] id, sz;

    public static void init(int n) {
        id = new int[n + 1];
        sz = new int[n + 1];
        for(int i = 0; i < n; i++) { id[i] = i; sz[i] = 1; }
    }

    public static int find(int p) {
        while(p != id[p]) p = id[p];
        return p;
    }

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String l;
        String[] sp;

        while(true) {
            l = br.readLine();
            sp = l.split(" ");
            int c = Integer.parseInt(sp[0]);
            int r = Integer.parseInt(sp[1]);

            if(c + r == 0)
                break;

            HashMap<String, Integer> hm = new HashMap<String, Integer>();

            for(int i = 0; i < c; i++)
                hm.put(br.readLine(), i);

            init(c);

            for(int i = 0; i < r; i++) {
                String[] parse = br.readLine().split(" ");
                int p = hm.get(parse[0]);
                int q = hm.get(parse[1]);

                int rp = find(p), rq = find(q);

                if (find(p) == find(q)) continue;

                if (sz[rp] < sz[rq]) { id[rp] = rq; sz[rq] += sz[rp]; } 
                else { id[rq] = rp; sz[rp] += sz[rq]; }
            }

            int max = 0;
            for(int i = 0; i < c; i++) max = Math.max(max, sz[i]);

            System.out.println(max);
            br.readLine();           
        }
    }
}