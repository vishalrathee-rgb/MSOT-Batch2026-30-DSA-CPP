#include <bits/stdc++.h>
using namespace std;

int query(vector<int> &a, int l, int r)
{
    cout << "? " << r - l + 1 << " ";
    for (int i = l; i <= r; i++)
    {
        cout << i+1 << " ";
    }
    cout << endl;

    int res;
    cin >> res;
    return res;
}
void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int l = 0;
    int r = n - 1;
    while(l < r)
    {
        int mid = l + (r - l) / 2;
        int expected = 0;

        for (int i = l; i <= mid ; i++)
        {
            expected += a[i];
        }

        int actual = query(a , l, mid);
        if (expected < actual)
        {
            r = mid;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << "! " << l + 1 << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}