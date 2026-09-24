#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int binary = 0;
    int place = 1;

    if (n == 0)
    {
        cout << 0 << '\n';
        return 0;
    }

    while (n > 0)
    {
        int bit = n % 2;
        binary += bit * place;
        place *= 10;
        n /= 2;
    }

    cout << binary << '\n';
    return 0;
}
