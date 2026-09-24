//arithmatic progression sum
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    int first_term;
    cout << "Enter the first term: ";
    cin >> first_term;
    
    int common_difference;
    cout << "Enter the common difference: ";
    cin >> common_difference;
    
    int sum = (n / 2) * (2 * first_term + (n - 1) * common_difference);

    cout << "The sum of the series is: " << sum << endl;

    return 0;
}