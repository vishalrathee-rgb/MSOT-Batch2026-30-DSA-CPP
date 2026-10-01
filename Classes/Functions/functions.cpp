#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n < 2) return true;
    for (int i = 2 ; i <= sqrt(n) ; i++)
        if (n % i == 0) return false; 
    return true;
}

//pass by address
void swapNos(int* a , int* b)
{
    *a += *b;
    *b = *a - *b;
    *a -= *b;
}

//pass by reference
void swapNos(int& a , int& b)
{
    a += b;
    b = a - b;
    a -= b;
}

int main()
{
    int n, a , b;
    cin >> n >> a >> b;
    if (isPrime(n))
        cout << "YES\n";
    else
        cout << "NO\n";

    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    swapNos(a , b);
    cout << "After swapping: a = " << a << ", b = " << b << endl;
    int x = 5, y = 10;
    cout << "Before swapping: x = " << x << ", y = " << y
    << endl;
    swapNos(&x , &y);
    cout << "After swapping: x = " << x << ", y = " << y << endl;
}