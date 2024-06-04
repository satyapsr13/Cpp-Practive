
import java.util.Scanner;

public class a1910 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n, x;
            n = sc.nextInt();
            x = sc.nextInt();
            int v[] = new int[n];
            for (int i = 0; i < n; i++) {
                v[i] = sc.nextInt();

            }
            int ans = v[0];
            for (int i = 0; i < v.length - 1; i++) {
                ans = Math.max(ans, (v[i + 1] - v[i]));

            }
            ans = Math.max(ans, 2 * (x - v[n - 1]));

            System.out.println(ans);

        }
    }
}
