#include<stdio.h>
#include<limits.h>

int main()
{
    int T, N = 0;
    scanf("%d", &T);
    
    long long int A[N];
    for(int i = 0; i < T; i++)
    {
        scanf("%d", &N);
        
        A[N];
        for(int j = 0; j < N; j++)
        {
            scanf("%lld", &A[j]);
        }
    }
    
    int minResult = INT_MAX;
    for(int i = 0; i < N; i++)
    {
        for(int j = i + 1; j < N; j++)
        {
            if(minResult > A[i] + A[j] + j - i)
            {
                minResult = A[i] + A[j] + j - i;
            }
        }
    }

    printf("%d\n", minResult);
    return 0;
}