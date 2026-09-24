#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout << "Enter a three-digit number: ";
    cin >> num;

    if (num < 100 || num > 999)
    {
        cout << "Please enter a valid three-digit number." << endl;
        return 1;
    }

    int sum_of_digits = 0;
    int temp = num;

    while (temp > 0)
    {
        sum_of_digits += temp % 10;
        temp /= 10;
    }

    cout << "The sum of the digits of " << num << " is: " << sum_of_digits << endl;

    return 0;
}