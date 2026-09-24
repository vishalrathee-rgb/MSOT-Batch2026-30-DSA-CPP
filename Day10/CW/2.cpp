#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        ch = static_cast<char>(ch + 32);
    } else if (ch >= 'a' && ch <= 'z') {
        ch = static_cast<char>(ch - 32);
    }

    cout << ch << '\n';
    return 0;
}
