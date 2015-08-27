/*
ID: sc.vale2
LANG: JAVA
TASK: gift1
*/

import java.io.*;
import java.util.*;

class gift1 {
    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new FileReader("gift1.in"));
        PrintWriter out = new PrintWriter(new BufferedWriter(new FileWriter("gift1.out")));
        StringTokenizer st = new StringTokenizer(in.readLine());

        int np = Integer.parseInt(st.nextToken());
        List<String> people = new ArrayList<String>();
        HashMap<String, Integer> map = new HashMap<String, Integer>();

        for(int i = 0; i < np; i++) {
            st = new StringTokenizer(in.readLine());
            people.add(st.nextToken());
            map.put(people.get(i), 0);
        }

        String current, who;
        int money, many, mine, m;

        for(int i = 0; i < np; i++) {
            st = new StringTokenizer(in.readLine());
            current = st.nextToken();
            st = new StringTokenizer(in.readLine());
            money = Integer.parseInt(st.nextToken());
            many = Integer.parseInt(st.nextToken());

            if(many != 0) {
                mine = money % many;
            } else {
                mine = money;
            }

            m = map.get(current);
            map.put(current, m + mine - money);

            for(int j = 0; j < many; j++) {
                st = new StringTokenizer(in.readLine());
                who = st.nextToken();
                m = map.get(who);
                map.put(who, m + (money / many));
            }
        }

        for(String s : people)
            out.println(s + " " + map.get(s));
      
        

        out.close();
    }
}
