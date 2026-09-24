#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n % 5 == 0) {
        cout << "Divisible by 5\n";
    } else {
        cout << "Not divisible by 5\n";
    }

    return 0;
}
