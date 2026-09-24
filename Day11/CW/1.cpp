#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << i << ' ';
    }
    cout << '\n';

    for (int i = 2; i <= n; i += 2) {
        cout << i << ' ';
    }
    cout << '\n';

    return 0;
}
