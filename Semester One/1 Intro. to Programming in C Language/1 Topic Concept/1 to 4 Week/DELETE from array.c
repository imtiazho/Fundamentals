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

    int index;
    scanf("%d", &index);

    if(index < 0 || index >= length)
    {
        break;
    }

    for(int i = index; i < length - 1; i++)
    {
        // A[i - 1] = A[i]; // for this case the value of i = index - 1;
        A[i] = A[i + 1];
    }

    length--;

    for(int i = 0; i < length; i++)
    {
        printf("%d ", A[i]);
    }


    return 0;
}
