#include <bits/stdc++.h>
using namespace std;

int main()
{
    int length, breadth;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the breadth of the rectangle: "; 
    cin >> breadth;
    int area = length * breadth;
    cout << "The area of the rectangle is: " << area << endl;
    int perimeter = 2 * (length + breadth);
    cout << "The perimeter of the rectangle is: " << perimeter << endl;
}