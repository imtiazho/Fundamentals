#include<stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int A[N];
    for(int i = 0; i < N; i++)
    {
        scanf("%lld", &A[i]);
    }

    for(int i = 0; i < N - 1; i++)
    {
        int minLoc = i;
        for(int j = i + 1; j < N; j++)
        {
            if(A[j] < A[minLoc])
            {
                minLoc = j;
            }
        }

        // swap
        if(minLoc != i)
        {
            int temp = A[i];
            A[i] = A[minLoc];
            A[minLoc] = temp;
        }
    }

    for(int i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}