#include <bits/stdc++.h>
using namespace std;

// Factorial
long long fact(int n)
{
    if (n < 0)
        return -1;

    if (n == 0 || n == 1)
        return 1;

    return 1LL * n * fact(n - 1);
}

// nCr
long long ncr(int n, int r)
{
    if (n < 0 || r < 0 || r > n)
        return -1;

    return fact(n) / (fact(r) * fact(n - r));
}

// Power
double power(double base, int exp)
{
    if (exp == 0)
        return 1.0;

    if (exp < 0)
        return 1.0 / power(base, -exp);

    return base * power(base, exp - 1);
}

int main()
{
    int n, r;
    cin >> n >> r;

    cout << "Factorial = " << fact(n) << endl;
    cout << "nCr = " << ncr(n, r) << endl;

    double base;
    int exp;

    cin >> base >> exp;

    cout << "Power = " << power(base, exp) << endl;

    return 0;
}