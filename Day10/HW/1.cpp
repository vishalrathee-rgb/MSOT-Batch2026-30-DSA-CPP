#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    getline(cin, text);

    reverse(text.begin(), text.end());
    cout << text << '\n';
    return 0;
}
