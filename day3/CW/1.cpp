// first and last digit of a number
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int firstDigit = num;
    while (firstDigit >= 10)
    {
        firstDigit /= 10;
    }

    int lastDigit = num % 10;

    cout << "First digit: " << firstDigit << endl;
    cout << "Last digit: " << lastDigit << endl;

    return 0;
}