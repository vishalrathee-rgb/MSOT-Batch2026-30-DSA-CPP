//sum of a 3 digit number
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout << "Enter a 3-digit number: ";
    cin >> num;

    if (num < 100 || num > 999)
    {
        cout << "Please enter a valid 3-digit number." << endl;
        return 1;
    }

    int sum = 0;
    int temp = num;

    while (temp > 0)
    {
        sum += temp % 10;
        temp /= 10;
    }

    cout << "The sum of the digits of " << num << " is: " << sum << endl;

    return 0;
}