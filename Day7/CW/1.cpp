#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a >= b && a >= c) {
        cout << a << '\n';
    } else if (b >= a && b >= c) {
        cout << b << '\n';
    } else {
        cout << c << '\n';
    }

    return 0;
}
