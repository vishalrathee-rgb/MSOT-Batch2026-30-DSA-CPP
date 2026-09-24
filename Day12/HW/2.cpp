#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int original = n;
    int temp = n;
    int digits = 0;

    if (temp == 0) {
        digits = 1;
    } else {
        while (temp > 0) {
            digits++;
            temp /= 10;
        }
    }

    temp = n;
    int sum = 0;
    while (temp > 0) {
        int digit = temp % 10;
        sum += static_cast<int>(pow(digit, digits));
        temp /= 10;
    }

    if (sum == original) {
        cout << "Armstrong number\n";
    } else {
        cout << "Not an Armstrong number\n";
    }

    return 0;
}
