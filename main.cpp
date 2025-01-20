// sam101               // Jan 2025

#include <iostream> // Input-Output Stream library

// function declaration (or function prototype)
int add(int, int);  // a function must be declared before it is called.
// Notice that the declaration above does not have a body.
// The function definition (below) provides the body (code)

// All C++ programs must have a main() function.
// This is the first function called and is where execution begins.
//
int main() {
    // cout - is the Console OUTput object - representing the screen
    std::cout << "sam101 - calling add function from main()" << std::endl;

    int sum = add(2,2);

    std::cout <<  "Sum of values = " << sum << std::endl;
    return 0;
}

// function definition
int add( int x, int y ) {    // two int parameters, returns int
    return x + y;
}

//TODO
// 1. Define a function multiply(int,int) that takes two integer
// arguments and returns an int value.
// Remember that you will need a function prototype to declare the function.
// Test your function and output the value it returns.

//TODO
// 2. Define a function divide(int,int) that takes two integer arguments
// and returns the result of dividing the first by the second.
// Consider what the return type should be.
// Output your result. Try calling divide(3,2)

