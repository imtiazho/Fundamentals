#include <stdio.h>
#include <string.h>

int main()
{
    // Example of call by value and call by reference
    /*
    int fun(int x, int *y)
    {
        x = 10;
        *y = 10;
    }

    int a = 20;
    int b = 20;
    fun(a, &b);
    printf("%d %d", a, b);
    */

    // Example for Passing Array and String in Function
    /*
     For array
     int fun(int x[], int n)
     {
         int sum = 0;
         for(int i = 0; i < n; i++)
         {
             sum += x[i];
         }

         return sum;
     }
     int Arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
     int result = fun(Arr, 10);
     printf("%d", result);
     .
     For String:
     void fun(char x[])
     {
         int len = strlen(x);
         printf("%d", len);
     }
     char str[7] = "Imtiaz";
     fun(str);
    */

    // Using Pointer variable as Parameter for Array
    /*
    For Number Array
    int fun(int *x, int n)
    {
        for(int i = 0; i < n; i++)
        {
            printf("%d ", x[i]);
            // printf("%d ", *(x + i));
        }
    }
    int Arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    fun(Arr, 10);
    .
    For string:
    void fun(char *x)
    {
        printf("%s", x);
    }
   char words[17] = "Imtiaz Hossain";
   fun(words);
    */

    // Factorial
    /*
     int Factorial(int x)
     {
         if(x == 0)
         {
             return 1;
         }

         return x * Factorial(x - 1);

     }
     printf("%d", Factorial(5));
    */

    // print digits by recursion
    /*
    void printDigit(int x)
    {
        if(x == 0)
        {
            return 1;
        }

        int digit = x % 10;
        printDigit(x / 10);
        printf("%d ", digit);
    }
    int T;
    scanf("%d", &T);

    for(int i = 0; i < T; i++)
    {
        int n;
        scanf("%d", &n);

        if(n == 0)
        {
            printf("0");
        }

        printDigit(n);
        printf("\n");
    }
    */

    // Check Palindrome
    /*
     int isPalin(int *x, int i, int j)
     {
         if(i > j)
         {
             return 1;
         }

         return x[i] == x[j] && isPalin(x, i + 1, j - 1);
     }
    int n;
    scanf("%d", &n);

    int Arr[n];
    for(int i = 0; i < n; i++)
    {
         scanf("%d", &Arr[i]);
    }

    if(isPalin(Arr, 0, n - 1))
    {
         printf("Yes!");
    }
    else{
     printf("Nope!");
    }
    */

    return 0;
}