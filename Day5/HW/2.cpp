#include <iostream>
using namespace std;

int main() {
    cout << "A B A&&B A||B\n";

    for (int a = 0; a <= 1; a++) {
        for (int b = 0; b <= 1; b++) {
            cout << a << ' ' << b << ' ' << (a && b) << "    " << (a || b) << '\n';
        }
    }

    return 0;
}
