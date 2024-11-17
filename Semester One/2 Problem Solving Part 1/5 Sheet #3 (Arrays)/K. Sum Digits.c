#include<stdio.h>
#include<string.h>

int main()
{
    int N, sum = 0;
    scanf("%d", &N);

    char Arr[N];
    scanf("%s", &Arr);
    
    for(int i = 0; i < N; i++)
    {
        sum += Arr[i] - '0';
    }

    printf("%d", sum);
    return 0;
}