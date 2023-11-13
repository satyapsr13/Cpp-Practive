#include <bits/stdc++.h>
using namespace std;
void solve(string s, int l, int r)
{
    if (l == r)
    {
        cout << s << endl;
        return;
    }
    else
    {

        for (int i = l; i <= r; ++i)
        {
            swap(s[i], s[l]);
            solve(s, i + 1, r);
            swap(s[i], s[l]);
        }
    }
}
int main(int argc, char const *argv[])
{

    string s;
    cin >> s;
    solve(s, 0, s.size() - 1);
    return 0;
}
