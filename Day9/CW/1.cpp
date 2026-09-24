#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;
    cin >> a >> op >> b;

    switch (op) {
        case '+':
            cout << a + b << '\n';
            break;
        case '-':
            cout << a - b << '\n';
            break;
        case '*':
            cout << a * b << '\n';
            break;
        case '/':
            if (b == 0) {
                cout << "Cannot divide by zero\n";
            } else {
                cout << a / b << '\n';
            }
            break;
        default:
            cout << "Invalid operator\n";
    }

    return 0;
}
