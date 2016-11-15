import java.util.*;

public class dartscores {

    static class circle {
        private int radius;

        public circle(int radius) {
            this.radius = radius;
        }

        public boolean isInside(int x, int y) {
            return (Math.pow(x, 2) + Math.pow(y, 2)) <= Math.pow(this.radius, 2); 
        }
    }

    public static List<circle> circles = new ArrayList<circle>();

    public static int solve(int x, int y) {
        int count = 1;

        for(circle c : circles) {
            if(c.isInside(x, y))
                break;
            count++;
        }

        return (count > 12) ? 0 : (11 - count);
    }

    public static void main(String[] args) {

        for(int i = 20; i <= 200; i += 20)
            circles.add(new circle(i));

        Scanner sc = new Scanner(System.in);
        sc.useDelimiter("\\n");
        int cases = sc.nextInt();

        while(cases-- > 0) {
            int darts = sc.nextInt();
            int ans = 0;

            for(int i = 0; i < darts; i++) {
                String[] parse = sc.next().split(" ");
                int x = Integer.parseInt(parse[0]);
                int y = Integer.parseInt(parse[1]);

                ans += solve(x, y);
            }

            System.out.println(ans);
        }
    }
}

