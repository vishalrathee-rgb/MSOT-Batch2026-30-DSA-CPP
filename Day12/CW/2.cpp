#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    n = abs(n);
    int digits = 0;

    if (n == 0) {
        digits = 1;
    } else {
        while (n > 0) {
            digits++;
            n /= 10;
        }
    }

    cout << digits << '\n';
    return 0;
}
