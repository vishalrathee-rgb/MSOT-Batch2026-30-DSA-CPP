#include <iostream>
using namespace std;

int main() {
    int marks;
    cin >> marks;

    if (marks >= 90) {
        cout << "A\n";
    } else if (marks >= 80) {
        cout << "B\n";
    } else if (marks >= 70) {
        cout << "C\n";
    } else if (marks >= 60) {
        cout << "D\n";
    } else {
        cout << "F\n";
    }

    return 0;
}
