#include <bits/stdc++.h>
using namespace std;

int main()
{
    double price;
    int quantity;

    cout << "Enter the price of the item: ";
    cin >> price;

    cout << "Enter the quantity of the item: ";
    cin >> quantity;

    double bill = price * quantity;

    cout << fixed << setprecision(2);
    cout << "The total bill is: $" << bill << endl;

    return 0;
}