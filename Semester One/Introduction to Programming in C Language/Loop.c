#include<stdio.h>

int main()
{
    /**
        Definion:A loop in programming is a control structure that repeatedly executes a block of
        code as long as a specified condition is met. Loops are fundamental for performing repetitive
        tasks efficiently without writing redundant code.
    **/

    // For Loop for print numbers from 1 to 10 using a for loop
    for (int i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }


    // Print numbers from 1 to 10 using a while loop
    int j = 1;
    while (j <= 10) {
        printf("%d\n", j);
        j++;
    }


    // Print numbers from 1 to 10 using a do-while loop
    int k = 1;
    do {
        printf("%d\n", k);
        k++;
    } while (k <= 10);


    // Print a 5x5 matrix using nested for loops
    for (int p = 1; p <= 5; p++) {
        for (int m = 1; m <= 5; m++) {
            printf("%d ", p * m);
        }
        printf("\n");
    }

    return 0;
}
