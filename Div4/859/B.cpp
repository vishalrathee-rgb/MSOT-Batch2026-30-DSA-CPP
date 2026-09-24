#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end() , [](int x, int y) { if (x % 2 == y % 2)
            return x > y;
        return x % 2 < y % 2;
    });

    int mihai = 0, bianca = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            mihai += a[i];
        else
            bianca += a[i];
    }

    if (mihai > bianca)
        cout << "YES\n";
    else 
        cout << "NO\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}