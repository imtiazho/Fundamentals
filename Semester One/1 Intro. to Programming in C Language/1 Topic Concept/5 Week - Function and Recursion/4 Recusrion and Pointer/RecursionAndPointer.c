#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    /*
    || Call By Value, Call by Reference => A copy of the actual argument's value is made and passed to the function is known as call by value. The address of the actual argument is passed to the function is known as call by reference. 
    .
    Example:
    #In Sub program:
    void fun(int *x, int *y)
    {
        x += 20;
        *y += 20;
    }
    .
    #In main program
    int a = 10, b = 10;
    fun(a, &b);
    printf("%d %d", a, b);
    */

    /*
     || Passing Array and String in Function
     .
     Example One: For Array
     #Subprogram:
     int fun(int x[], int n)
     {
         int sum = 0;
         for(int i = 0; i < n; i++)
         {
             sum += x[i];
         }

         return sum;
     }
     .
     #main program
     int Arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
     int sum = fun(Arr, 10);
     printf("%d", sum);
     .
     Example Two: String
     #Subprogram:
     void string(char x[])
     {
         // int len = strlen(x);
         // printf("%d", len);

         //
         x[0] = toupper(x[0]);
         printf("%s", x);
     }
     .
     #main program
     char Arr[20] = "hello World!";
     string(Arr);
    */

    /*
      || Using Pointer variable as Parameter for Array
      .
      Example One : for number array:
      #sub program
      int fun(int *x, int n)
      {
          for(int i = 0; i < n; i++)
          {
              // printf("%d ", x[i]);
              printf("%d ", *(x + i)); // In pointer array we can use pointer to traverse each elements
          }

          x[0] = 100;
      }
      .
      #main program:
      int Arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
      fun(Arr, 10);

      printf("\n");
      for(int i = 0; i < 10; i++)
      {
          printf("%d ", Arr[i]);
      }
      .
      .
      Example Two : For string
      .
      #sub program
      void fun(char *x, int n)
      {
          printf("%s ", x);
          x[0] = 'B';
      }
      .
      #main pro
      char Arr[10] = "Air Way";
      fun(Arr, 10);

      printf("\n");
      printf("%s ", Arr);

    */

    /*
    || Factorial
    .
    #subprogram
    int factorial(int x)
    {
        if(x == 0)
        {
            return 1;
        }
        return x * factorial(x - 1);
    }
    .
    #main Program:
    int ret = factorial(5);
    printf("%d", ret);
    */

    /*
     || D. Print Digits using Recursion
     .
     // Online C compiler to run C program online
     #include <stdio.h>

     void printDigits(int n)
     {
         if(n == 0)
         {
             return;
         }

         int digit = n % 10;
         printDigits(n / 10);
         printf("%d ", digit);
     }

     int main() {
         int T;
         scanf("%d", &T);

         for(int cs = 0; cs < T; cs++)
         {
             int n;
             scanf("%d", &n);

             if(n == 0){
                 printf("0");
             }

             printDigits(n);
             printf("\n");
         }

         return 0;
     }
    */

    /*
    || Palindrome Array
    .
    #include <stdio.h>

    int isPalin(int *a, int i, int j)
    {
    if(i > j)
    {
        return 1;
    }
        return a[i] == a[j] && isPalin(a, i + 1, j - 1);

    }

    int main() {
        int n;
        scanf("%d", &n);
        
        int a[n];
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        
        if(isPalin(a, 0, n - 1)){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        return 0;
    }
    */

    return 0;
}
