#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> vec(n-1);
    for (auto &i : vec)
        cin >> i;
    long long th_sum = 1ll*n*(n+1)/2;
    long long real_sum = accumulate(vec.begin() , vec.end() , 0ll);
    cout << th_sum - real_sum;
}