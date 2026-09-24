#include <bits/stdc++.h>
using namespace std;

int main()
{
    int marks[3];
    cout << "Enter marks for 3 subjects: ";
    for (int i = 0; i < 3; i++)
    {
        cin >> marks[i];
    }

    int total = marks[0] + marks[1] + marks[2];
    double average = total / 3.0;

    cout << "Total Marks: " << total << endl;
    cout << "Average Marks: " << average << endl;

    return 0;
}