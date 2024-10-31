#include<stdio.h>

int A[100000];

int main()
{
    int length;
    scanf("%d", &length);

    for(int i = 0; i < length; i++)
    {
        scanf("%d", &A[i]);
    }

    for(int i = 0, j = length - 1; i <= j; i++, j--)
    {
        int temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }

    for(int i = 0; i < length; i++)
    {
        printf("%d ", A[i]);
    }


    return 0;
}
