#include <iostream>
using namespace std;

int main() {
    int age;
    cin >> age;

    if (age < 5) {
        cout << "Free\n";
    } else if (age <= 12) {
        cout << "Half ticket\n";
    } else if (age >= 60) {
        cout << "Senior citizen discount\n";
    } else {
        cout << "Full ticket\n";
    }

    return 0;
}
