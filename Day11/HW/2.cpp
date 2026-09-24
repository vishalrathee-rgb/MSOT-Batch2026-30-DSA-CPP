#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    cout << factorial << '\n';
    return 0;
}
