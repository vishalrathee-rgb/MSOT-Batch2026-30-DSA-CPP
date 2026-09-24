#include <iostream>
using namespace std;

int main() {
    int choice;
    double a, b;

    cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
    cin >> choice >> a >> b;

    switch (choice) {
        case 1:
            cout << a + b << '\n';
            break;
        case 2:
            cout << a - b << '\n';
            break;
        case 3:
            cout << a * b << '\n';
            break;
        case 4:
            if (b == 0) {
                cout << "Cannot divide by zero\n";
            } else {
                cout << a / b << '\n';
            }
            break;
        default:
            cout << "Invalid choice\n";
    }

    return 0;
}
