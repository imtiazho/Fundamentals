#include<stdint.h>

int main()
{
    /**
        Definition: Output statements in C are used to display information to the user,
        typically through the console or terminal window.
        .
        Example: Combined Input and Output
    **/
    int num1, num2, sum;

    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter second integer: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("Sum of %d and %d is %d\n", num1, num2, sum);
    return 0;
}
