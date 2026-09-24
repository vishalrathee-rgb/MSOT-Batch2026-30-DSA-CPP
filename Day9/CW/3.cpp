#include <cctype>
#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;

    switch (tolower(ch)) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "Vowel\n";
            break;
        default:
            if (isalpha(ch)) {
                cout << "Consonant\n";
            } else {
                cout << "Not an alphabet\n";
            }
    }

    return 0;
}
