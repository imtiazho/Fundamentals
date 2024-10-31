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

    int index, value;
    scanf("%d %d", &index, &value);

    length++;

    for(int i = length - 1; i >= index; i--)
    {
        A[i + 1] = A[i];
    }

    A[index] = value;

    for(int i = 0; i < length; i++)
    {
        printf("%d ", A[i]);
    }


    return 0;
}
