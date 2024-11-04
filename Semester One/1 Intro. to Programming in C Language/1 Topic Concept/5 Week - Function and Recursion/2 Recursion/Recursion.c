#include<stdio.h>


int main()
{
    /*
    // What is Recusrion? => Its a programming method that call itself from inside the function. Its mandatory to have a bese case for programming termination.
    .
    Example:
    void distribute(int roll, int x)
    {
        printf("Roll %d received 1 chocolate\n", roll);
        distribute(roll + 1, x -1);
    }
    .
    To be continue...
    */


    /*
    From last example...
    .
    // Base Case: For terminate the function like loop. Otherwise it will be recursive
    .
    Example:
    void distribute(int roll, int x)
    {
        // Base case || Termination Condition
        if(roll == 4)
        {
            return;
        }

        printf("Roll %d received 1 chocolate\n", roll);
        distribute(roll + 1, x -1);
    }
    */

    /*
    // Print 1 to N with recursive function
    .
    Example:
    void printNumbers(int x, int n)
    {
        if(x > n)
        {
            return;
        }
        printf("%d ", x);

        printf("Before function call, Current X = %d \n", x);

        printNumbers(x + 1, n);

        printf("After function call, Current X = %d \n", x);
    }
    .
    Function Call from main function =>
    .
    printf("Before function call in main\n");

    printNumbers(1, 5);

    printf("After function call in main\n");

    */


    /*
    // Understanding Call Flow and Return
    .
    Execute flow => 1, 2 ,3 ,4
    Return  flow => 4, 3, 2, 1
    .
    Example:
    #subprogram
    void fun2()
    {
        printf("Inside func 2");
    }
    void fun1()
    {
        printf("Before func call from fun1");

        fun2();

        printf("After func call from fun1");
    }
    .
    #from Main program
    printf("Before func call from main");
    .
    fun1();
    .
    printf("After func call from fun1");
    */



    /*
    // Print N to 1 with recursive function
    .
    void printNumbers(int x, int n)
    {
        if(x > n)
        {
            return;
        }

        printNumbers(x + 1, n);
        printf("%d ", x); // This is the karizma
    }
    .
    Function Call from main function =>
    .
    printNumbers(1, 10);
    */



    /*
    // Sum of an Array
    .
    Example One:
    #subprogram
    int a[100000], sum;

    void goToIndex(int i, int n)
    {
        if(i == n)
        {
            return;
        }
        sum += a[i];
        goToIndex(i + 1, n);
    }
    .
    #main program
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    sum = 0;

    goToIndex(0, n);


    printf("%d", sum);
    .
    Example Two:
    .
    #subprogram
    .
    int a[100000];

    int getSum(int i, int n)
    {
        if(i == n)
        {
            return 0;
        }

        return a[i] + getSum(i + 1, n);
    }

    #MainProgram
    .
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }


    int ret = getSum(0, n);


    printf("%d", ret);
    */



    return 0;
}
