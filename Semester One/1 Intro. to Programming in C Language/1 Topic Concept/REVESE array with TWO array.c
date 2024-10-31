#include<stdio.h>

int A[100000], B[100000];

int main()
{
    int length;
    scanf("%d", &length);

    for(int i = 0; i < length; i++)
    {
        scanf("%d", &A[i]);
    }

    for(int i = 0, j = length - 1; i < length; i++, j--)
    {
        B[j] = A[i];
    }

    for(int i = 0; i < length; i++)
    {
        printf("%d ", B[i]);
    }


    return 0;
}
