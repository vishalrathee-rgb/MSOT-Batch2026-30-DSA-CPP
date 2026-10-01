#include <bits/stdc++.h>
using namespace std;

// functions are the reusable blocks of code that can be called multiple times in a program.
//  They help in reducing code redundancy and improving code organization. 
// Functions can take input parameters, perform specific tasks, and return output values.
// Functions can be called from different parts of the program, allowing for modular programming and easier maintenance.

// Function Declaration
// A function declaration, also known as a function prototype, is a statement that provides information about a function's name, return type, and parameters to the compiler. It allows the compiler to recognize the function before its actual implementation. Function declarations are typically placed in header files or at the beginning of a source file.

// Function Definition
// A function definition is the actual implementation of a function. It includes the function's name, return type, parameters, and the block of code that performs the desired task. The function definition provides the logic and instructions for the function to execute when it is called. It is typically placed in a source file.

// Function Call
// A function call is the process of invoking or executing a function in a program. When a function is called, the program jumps to the function's definition, executes its code, and then returns to the point where the function was called. Function calls can be made from different parts of the program, allowing for code reuse and modular programming.

// types of a function
// 1. No input and no output
void NoInputNoOutput() {
    cout << "This function has no input and no output." << endl;
}
// 2. No input but output
int NoInputWithOutput() {
    return 42;
}
// 3. Some input but no output
void SomeInputNoOutput(int x) {
    cout << "The input value is: " << x << endl;
}
// 4. Input and output
int SomeInputWithOutput(int x, int y) {
    return x + y;
}
// Structure of a function
// return_type function_name(parameter_list)
// {
//     // function body
//     // return statement (if applicable)
// }

void printHelloWorld() {
    cout << "Hello, World!" << endl;
}
int main() {
    // Calling the functions
    NoInputNoOutput();
    int output1 = NoInputWithOutput();
    cout << "Output from NoInputWithOutput: " << output1 << endl;
    SomeInputNoOutput(10);
    int output2 = SomeInputWithOutput(5, 7);
    cout << "Output from SomeInputWithOutput: " << output2 << endl;
    printHelloWorld();
    return 0;
}