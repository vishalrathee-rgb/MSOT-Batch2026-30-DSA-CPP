#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    getline(cin, text);

    int count = 0;
    for (char ch : text) {
        char lower = static_cast<char>(tolower(ch));
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            count++;
        }
    }

    cout << count << '\n';
    return 0;
}
