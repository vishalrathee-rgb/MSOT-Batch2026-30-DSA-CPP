#include <iostream>
using namespace std;

int main() {
    int age;
    cin >> age;

    bool canVote = age >= 18;
    cout << boolalpha << canVote << '\n';
    return 0;
}
