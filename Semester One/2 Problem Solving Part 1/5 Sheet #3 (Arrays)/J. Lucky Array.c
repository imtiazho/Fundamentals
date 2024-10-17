#include<stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int A[N];
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    int min = A[0];
    for(int i = 0; i < N; i++)
    {
        if(min > A[i])
        {
            min = A[i];
        }
    }

    int frequencyCounter = 0;
    for(int i = 0; i < N; i++)
    {
        if(min == A[i])
        {
            frequencyCounter++;
        }
    }

    if(frequencyCounter % 2 != 0)
    {
        printf("Lucky");
    }
    else {
        printf("Unlucky");
    }
    return 0;
}
