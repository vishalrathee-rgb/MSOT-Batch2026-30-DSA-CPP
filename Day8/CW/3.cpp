#include <iostream>
using namespace std;

int main() {
    int x, y, left, bottom, right, top;
    cin >> x >> y >> left >> bottom >> right >> top;

    if (x >= left && x <= right && y >= bottom && y <= top) {
        cout << "Inside\n";
    } else {
        cout << "Outside\n";
    }

    return 0;
}
