#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;
    cin >> a >> op >> b;

    if (op == '+') {
        cout << a + b << '\n';
    } else if (op == '-') {
        cout << a - b << '\n';
    } else if (op == '*') {
        cout << a * b << '\n';
    } else if (op == '/') {
        if (b == 0) {
            cout << "Cannot divide by zero\n";
        } else {
            cout << a / b << '\n';
        }
    } else {
        cout << "Invalid operator\n";
    }

    return 0;
}
