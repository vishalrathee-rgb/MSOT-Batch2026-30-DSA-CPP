#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cin >> word;

    bool palindrome = true;
    int left = 0;
    int right = static_cast<int>(word.size()) - 1;

    while (left < right) {
        if (word[left] != word[right]) {
            palindrome = false;
            break;
        }
        left++;
        right--;
    }

    if (palindrome) {
        cout << "Palindrome\n";
    } else {
        cout << "Not a palindrome\n";
    }

    return 0;
}
