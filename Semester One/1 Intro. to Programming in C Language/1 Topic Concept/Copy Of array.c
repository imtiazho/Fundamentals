#include<stdio.h>

int A[100000], B[100000];

int main()
{
    int lengthOne = 0, lengthTwo = 0;
    scanf("%d", &lengthOne);

    for(int i = 0; i < lengthOne; i++)
    {
        scanf("%d", &A[i]);
    }

    for(int i = 0; i < lengthOne; i++)
    {
        B[i] = A[i];
    }

    lengthTwo = lengthOne;
    for(int i = 0; i < lengthTwo; i++)
    {
        printf("%d ", B[i]);
    }


    return 0;
}
