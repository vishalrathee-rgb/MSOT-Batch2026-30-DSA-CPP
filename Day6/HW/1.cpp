#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n > 0) {
        cout << "Positive\n";
    } else if (n < 0) {
        cout << "Negative\n";
    } else {
        cout << "Zero\n";
    }

    return 0;
}
