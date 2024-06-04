import java.util.Scanner;

/**
 * a1903
 */
public class a1903 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int l = sc.nextInt();
            int r = sc.nextInt();
            int v[] = new int[l];
            for (int i = 0; i < l; i++) {
                v[i] = sc.nextInt();

            }
            boolean isSorted = true;
            for (int i = 0; i < v.length - 1; i++) {
                if (v[i] > v[i + 1]) {
                    isSorted = false;
                    break;

                }
            }
            if (r > 1) {
                System.out.println("YES");

            } else {
                if (isSorted) {
                    System.out.println("YES");

                } else {
                    System.out.println("NO");

                }
            }
            // System.out.println();

        }
    }
}