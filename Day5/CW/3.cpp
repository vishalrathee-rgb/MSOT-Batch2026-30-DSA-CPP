#include <cctype>
#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;

    ch = static_cast<char>(tolower(ch));
    bool isVowel = ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    cout << boolalpha << isVowel << '\n';
    return 0;
}
