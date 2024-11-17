#include<stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    long long int A[N];

    for(int i = 0; i < N; i++)
    {
        scanf("%lld", &A[i]);
    }

    int max = A[0], min = A[0];
    int maxPos = 0, minPos = 0;
    for(int i = 0; i < N; i++)
    {
        if(max < A[i])
        {
            max = A[i];
            maxPos = i;
        }

        if(min > A[i])
        {
            min = A[i];
            minPos = i;
        }
    }

    // Swap
    int temp = A[maxPos];
    A[maxPos] = A[minPos];
    A[minPos] = temp;

    for(int i = 0; i < N; i++)
    {
        printf("%lld ", A[i]);
    }

    return 0;
}
