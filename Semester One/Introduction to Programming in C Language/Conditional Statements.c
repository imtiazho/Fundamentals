#include<stdint.h>

int main()
{
    /**
        Definition: Conditional statements in C are used to perform different
        actions based on different conditions. The primary conditional statements
        in C include if, if-else, and nested if-else. These statements allow the
        program to take different paths based on the evaluation of conditions.
    **/
    // if else statement
    if (condition) {
    // Code to be executed if condition is true
    } else {
        // Code to be executed if condition is false
    }

    // if else ladder
    if (condition1) {
    // Code to be executed if condition1 is true
    } else if (condition2) {
        // Code to be executed if condition2 is true
    } else if (condition3) {
        // Code to be executed if condition3 is true
    } else {
        // Code to be executed if none of the conditions are true
    }

    // Nested if else
    if (condition1) {
        // Code to be executed if condition1 is true
        if (condition2) {
            // Code to be executed if condition2 is true
        } else {
            // Code to be executed if condition2 is false
        }
    } else {
        // Code to be executed if condition1 is false
    }

    return 0;
}
