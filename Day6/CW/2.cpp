#include <iostream>
using namespace std;

int main() {
    int age;
    cin >> age;

    if (age >= 18) {
        cout << "Eligible to vote\n";
    } else {
        cout << "Not eligible to vote\n";
    }

    return 0;
}
