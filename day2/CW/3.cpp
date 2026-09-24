#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter your first number: ";
    int num1;
    cin >> num1;
    cout << "Enter your second number: ";
    int num2;
    cin >> num2;
    cout << "The original numbers: " << num1 << " and " << num2 << endl;

    int temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "The swapped numbers: " << num1 << " and " << num2 << endl;
}