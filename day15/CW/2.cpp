#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, n;
    cout << "Enter the range (a and b): ";
    cin >> a >> b;
    cout << "Enter the number to find multiples of: ";
    cin >> n;

    int count = 0;
    for (int i = a; i <= b; i++)
    {
        if (i % n == 0)
        {
            count++;
        }
    }

    cout << "The number of multiples of " << n << " in the range [" << a << ", " << b << "] is: " << count << endl;

    return 0;
}