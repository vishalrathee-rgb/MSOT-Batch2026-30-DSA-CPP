#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cin >> rows >> cols;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            cout << '(' << i << ", " << j << ") ";
        }
        cout << '\n';
    }

    return 0;
}
