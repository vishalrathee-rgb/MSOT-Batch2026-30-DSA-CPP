#include <bits/stdc++.h>
using namespace std;

/*
    <------ Recursion ------>
    Recursion is a programming technique where a function calls itself to solve a smaller instance of the same problem. It is often used to solve problems that can be broken down into smaller, similar subproblems.

    A recursive function typically has two main components:
    1. Base Case: This is the condition under which the recursion stops. It prevents infinite recursion and provides a simple solution for the smallest instance of the problem.

    2. Recursive Case: This is where the function calls itself with a modified argument,
    gradually approaching the base case.
*/

// Recursion to print numbers from n to 1

void printN(int n)
{
    if (n <= 0)
        return;
    cout << n << "  ";
    printN(n-1);
}
// Recursion to print numbers from a to b
void printAB(int a , int b)
{
    if (a > b)
        return;
    cout << a << "  ";
    printAB(a + 1 , b);
}

int main()
{
    int n;
    cin >> n;
    printN(n);
    int a , b;
    cout << endl;
    cin >> a >> b;
    printAB(a , b);
}