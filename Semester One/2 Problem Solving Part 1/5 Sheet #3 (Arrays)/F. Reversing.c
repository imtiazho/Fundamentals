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

    for(int j = N - 1; j >= 0; j--)
    {
        printf("%lld ", A[j]);
    }

    return 0;
}