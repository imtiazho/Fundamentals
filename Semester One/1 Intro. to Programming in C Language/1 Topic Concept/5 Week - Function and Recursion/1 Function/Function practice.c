#include<stdio.h>

int main()
{
    /*
    || What is function? => A function in programming is a block of code that performs a specific action and can be reused throughout a program.
    .
    Declare Syntax: 
    data_type function_name(arguments)
    {
        // Statements;

        return something;
    }
    .
    Example::
    int add(int a, int b)
    {
        int sum = a + b;
        return sum;
    }

    || There are two types => User Defined Function, BuiltIn Function
    */

   /*
    // Types One: return + Parameter
    .
    Example::
    return_type functionName(arguments)
    {
        statement or something
        return something;
    }
    .
    int add(int a, int b)
    {
        int sum = a + b;
        return sum;
    }
    */

   /*
    // Types One: return + No Parameter
    .
    Example::
    return_type functionName()
    {
        statement or something
        return something;
    }
    .
    int add()
    {
        Way one =>
        int a, b;
        scanf("%d %d", &a, &b);

        Way Two =>
        #for the a and b variable, we can use global variable section to assign the value.

        int sum = a + b;
        return sum;
    }
    */

   /*
    // Types One: no return + Parameter
    .
    Example::
    return_type functionName(Arguments)
    {
        statement or something
        return something;
    }
    .
    void add(int a, int b)
    {
        int sum = a + b;
        printf("%d", sum);
    }
    */

   /*
    // Types One: no return + no Parameter
    .
    Example::
    return_type functionName()
    {
        statement or something
        return something;
    }
    .
    void helloWorld()
    {
        printf("Hello World!");
    }
    */

   /*
    // BuiltIn function
    .
    Example::
    Ceil: 10.25 => 11
    floor: 10.25 => 10
    round: 10.55 => 11 || 10.25 => 10 || 10.50 => 11
    sqrt: Square Root 3 x 3 = 9
    pow: Power Function pow(5, 3) => 5^3
    */

   /*
    // Scope: In programming, scope refers to the region of a program where a variable or function is accessible. It determines the visibility and lifetime of a variable or function.
    .
    Example::
    1. Global Scope : Same memory location for a variable from any part of a program || Variables declared outside any function or block have global scope || They can be accessed from anywhere within the program, including inside functions.
    .
    2. Local Scope : Different memory location for a variable from any part of a program || Variables declared within a function or block have local scope || They are only accessible within that specific function or block.
    */

   /*
    // Pointer with Function => It pass the main address of variables.
    .
    Example:
    int swap(int *a, int *b)
    {
        // Normally its does not works because of scope(We call this function by value that'sy main data does not modify). So we can work with call by reference.
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    */
    return 0;
}