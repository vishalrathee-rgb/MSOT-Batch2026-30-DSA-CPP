#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    n = abs(n);
    while (n >= 10) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }

    cout << n << '\n';
    return 0;
}
