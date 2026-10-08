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
/*
    <------- How to write a recursive function? ------>
    1. Identify the base case: Determine the simplest instance of the problem that can be solved directly without further recursion.
    2. Define the recursive case: Break down the problem into smaller subproblems and
    call the function recursively with modified arguments that bring it closer to the base case.
    3. Combine the results: If necessary, combine the results of the recursive calls to
    obtain the final solution for the original problem.
*/

/*
    <------- Example of Recursion ------>
    1. Factorial Calculation: The factorial of a non-negative integer n (denoted as n!) is the product of all positive integers less than or equal to n. It can be defined recursively as:
        - Base Case: fact(0) = 1
        - Recursive Case: fact(n) = n * fact(n - 1) for n > 0

    2. Fibonacci Sequence: The Fibonacci sequence is a series of numbers where each number is the sum of the two preceding ones. It can be defined recursively as:
        - Base Cases: fib(0) = 0, fib(1) = 1
        - Recursive Case: fib(n) = fib(n - 1) + fib(n - 2) for n > 1

    3. Tower of Hanoi: The Tower of Hanoi is a classic problem that involves moving a stack of disks from one peg to another, following specific rules. The recursive solution involves moving smaller stacks of disks between pegs until the entire stack is transferred.

    4. Binary Search: Binary search is an efficient algorithm for finding a target value in a sorted array. It can be implemented recursively by dividing the search space in half at each step until the target is found or the search space is empty.
*/

/*
    <-------How does Recursion work? ------>
    Recursion works by maintaining a call stack, which keeps track of the function calls and their
    local variables. When a recursive function is called, a new frame is added to the call stack, and the function's execution continues until it reaches the base case. Once the base case is reached, the function starts returning values back through the call stack, unwinding the recursion and combining results as needed.
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