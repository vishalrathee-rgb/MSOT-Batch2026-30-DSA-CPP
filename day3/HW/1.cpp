#include <bits/stdc++.h>
using namespace std;

int main()
{
    int totalSeconds;
    cout << "Enter the total number of seconds: ";
    cin >> totalSeconds;

    int hours = totalSeconds / 3600;
    int minutes = (totalSeconds % 3600) / 60;
    int seconds = totalSeconds % 60;

    cout << "H:M:S = " << hours << ":" << minutes << ":" << seconds << endl;

    return 0;
}