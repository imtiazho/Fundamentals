#include<stdio.h>

int main()
{
    int N, loc = 0;
    scanf("%d", &N);
    
    long long int A[N];
    for(int i = 0; i < N; i++)
    {
        scanf("%lld", &A[i]);
    }

    long long int min = A[0];
    for(int j = 0; j < N; j++)
    {
        if(A[j] < min)
        {
            min = A[j];
            loc = j;
        }

    }
    printf("%lld %d", min, loc + 1);


    return 0;
}