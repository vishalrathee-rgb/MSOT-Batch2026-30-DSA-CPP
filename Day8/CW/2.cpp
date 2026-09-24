#include <cctype>
#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;

    if (isdigit(ch)) {
        cout << "Digit\n";
    } else {
        char lower = static_cast<char>(tolower(ch));
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            cout << "Vowel\n";
        } else if (isalpha(ch)) {
            cout << "Consonant\n";
        } else {
            cout << "Other\n";
        }
    }

    return 0;
}
