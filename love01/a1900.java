import java.util.Scanner;

/**
 * a1903
 */
public class a1900 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            sc.nextLine();
            String s = sc.nextLine();
            int l = 0, r = 0;
            s = "#" + s + "#";
            n = s.length();
            int count = 0, ans = 0;
            for (int i = 0; i < n; i++) {

                if (s.charAt(i) == '.') {
                    count++;

                } else {
                    if (count > 2) {
                        ans = 2;
                        break;

                    }
                    if (count != 0) {
                        if (count > 1) {
                            ans += 2;

                        } else {
                            ans++;
                        }
                    }

                    count = 0;
                }

            }

            System.out.println(ans);

        }
    }
}