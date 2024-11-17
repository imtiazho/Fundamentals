#include<stdio.h>


// Function to calculate factorial of a non-negative integer n
int factorial(int n) {
    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Recursive case: n! = n * (n-1)!
        return n * factorial(n - 1);
    }
}

int main()
{
    /**
        Definition: Recursion is a programming technique where a function
        calls itself in order to solve a problem.
        .
        // A recursive function typically has two parts:
        1. Base Case: A condition under which the function stops calling
        itself. This prevents infinite recursion and eventually
        terminates the recursive calls.

        2. Recursive Case: The part where the function calls itself with
        modified arguments, gradually moving towards the base case.
    **/


    int number = 5;
    printf("Factorial of %d is %d\n", number, factorial(number));
    return 0;
}
