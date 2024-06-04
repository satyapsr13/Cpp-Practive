import java.util.*;

public class a1904 {

    void check(int x, int y, int a, int b, int t) {

    }

    public static void main(String[] args) {
        // Scanner sc = new Scanner(System.in);
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int xk = sc.nextInt();
            int yk = sc.nextInt();
            int xq = sc.nextInt();
            int yq = sc.nextInt();
            int ans = 0;
            int x1 = xq - a;
            int y11 = xq - b;
            int y12 = xq + b;
            int[] dx = { xk - a, xk - a };
            int[] dy = { xk - b, xk + b };
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 4; j++) {

                }

            }

            System.out.println(ans);

        }

    }
}
