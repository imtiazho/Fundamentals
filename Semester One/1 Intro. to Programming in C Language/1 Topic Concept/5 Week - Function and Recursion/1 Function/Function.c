#include<stdio.h>

int main()
{
    /**
    // What is function? input => Process => Output

    // Declare syntax and protocol
    return_type functionName(arguments)
    {
        return something;
    }
    .
    Example::
    int add(int a, int b)
    {
        int sum = a + b;
        return sum;
    }

    // Types: User Defined, Library
    */

    /**
    // Types One: return + Parameter

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

    /**
    // Types One: return + No Parameter

    Example::
    return_type functionName()
    {
        statement or something
        return something;
    }
    .
    int add()
    {
        System one =>
        int a, b;
        scanf("%d %d", &a, &b);

        System Two =>
        #for the a and b variable we can use global variable section to assign the value.

        int sum = a + b;
        return sum;
    }
    */

    /**
    // Types One: no return + Parameter

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

    /**
    // Types One: no return + no Parameter

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

    /**
    // BuiltIn function

    Example::
    Ceil: 10.25 => 11
    floor: 10.25 => 10
    round: 10.55 => 11 || 10.25 => 10
    sqrt: Square Root 3 x 3 = 9
    pow: Power Function pow(5, 3) => 5^3
    */

    /**
    // Scope

    Example::
    1. Global Scope : Same memory location for all
    2. Local Scope : Different memory location for all
    */

    /**
    // Pointer with Function

    Example::
    int swap(int *a, int *b)
    {
        // Normally its does not works cause of scope(We call by value that'sy main data does not modify). So we can work with call by reference.
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    */
    return 0;
}
