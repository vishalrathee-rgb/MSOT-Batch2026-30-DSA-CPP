#include <iostream>
using namespace std;

int main() {
    int year;
    cin >> year;

    bool isLeap = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
    cout << boolalpha << isLeap << '\n';
    return 0;
}
