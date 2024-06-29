#include<stdio.h>

int main()
{
    /**
        Definition: A pointer is a variable that stores the memory
        address of another variable. Pointers are a powerful feature
        in C and C++, providing a way to directly access and
        manipulate memory. They are essential for dynamic memory
        allocation, arrays, and complex data structures like linked
        lists and trees.
        .
        // Basics of Pointers
        1. Declaration: A pointer is declared using the asterisk (*)
        symbol. (int *ptr;)

        2. Address-of Operator (&): This operator is used to get the
        address of a variable.
        {
            int var = 10;
            int *ptr = &var;
        }

        3. Dereferencing Operator (*): This operator is used to access
        the value stored at the memory address held by the pointer.
        {
            int var = 10;
            int *ptr = &var;
            int value = *ptr; // value is now 10
        }


    **/

    int var = 10;   // A normal integer variable
    int *ptr;       // A pointer variable that can hold the address of an integer

    ptr = &var;     // Assign the address of 'var' to the pointer 'ptr'

    // Output the value of 'var' using the pointer
    printf("Value of var: %d\n", var);
    printf("Address of var: %p\n", &var);
    printf("Pointer ptr holds the address: %p\n", ptr);
    printf("Value pointed to by ptr: %d\n", *ptr);

    // Modifying the value of 'var' using the pointer
    *ptr = 20;
    printf("New value of var: %d\n", var);


    return 0;
}
