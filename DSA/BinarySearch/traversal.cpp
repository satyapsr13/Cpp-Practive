#include <bits/stdc++.h>
using namespace std;
int upperBound(vector<int> v, int target)
{
    int n = v.size();

    int l = 0, r = n - 1;
    int ans = -1;
    while (l <= r)
    {
        cout << l << " " << r << endl;
        int mid = l + (r - l) / 2;
        if (v[mid] < target)
        {
            ans = mid + 1;
            l = mid + 1;
        }
        else if (v[mid] > target)
        {
            r = mid - 1;
            ans = r;
        }
        else
        {
            return mid;
        }
    }
    return ans;
}
int main(int argc, char const *argv[])
{

    vector<int> v;
    int n;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << upperBound(v, 2);

    return 0;
}
