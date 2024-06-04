
#include <iostream>
#include <vector>
using namespace std;
// const int d4x[4] = {-1, 0, 1, 0}, d4y[4] = {0, 1, 0, -1};
// const int d8x[8] = {-1, -1, 0, 1, 1, 1, 0, -1}, d8y[8] = {0, 1, 1, 1, 0, -1, -1, -1};
////vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void solve()
{
    int n, k, ans1 = 0, ans2 = 0;
    cin >> n;

    vector<int> v(n);
    vector<int> v1(n);

    for (int i = 0, x; i < n; ++i)
    {
        cin >> v[i];
        v1[i] = v[i];
    }

    for (int i = 0; i < n - 1; ++i)
    {

        for (int j = 0; j < n - i - 1; ++j)
        {
            if (v[j] < v[j + 1])
            {
                ans1++;
                swap(v[j], v[j + 1]);
                /* code */
            }
        }
    }
    for (int i = 0; i < n - 1; ++i)
    {

        for (int j = 0; j < n - i - 1; ++j)
        {
            if (v1[j] > v1[j + 1])
            {
                ans2++;
                swap(v1[j], v1[j + 1]);
                /* code */
            }
        }
    }
    // cout << (ans1 > ans2) ? ans2 : ans1;
    // cout<<ans1<<" "<<ans2;
    if (ans1 < ans2)
    {
        cout << ans1;
        /* code */
    }
    else
    {
        cout << ans2;
    }

    // cout << "\n";
}
signed main()
{

    // int Test_Cases;
    // cin >> Test_Cases;
    // while (Test_Cases--)
    solve();
    return 0;
}