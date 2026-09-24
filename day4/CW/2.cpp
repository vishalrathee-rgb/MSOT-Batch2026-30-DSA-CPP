#include <bits/stdc++.h>
using namespace std;

int main()
{
    static const auto M_PI = 3.14159265358979323846;
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    double area = M_PI * radius * radius;

    cout << "The area of the circle is: " << area << endl;

    return 0;
}