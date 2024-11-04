#include<stdio.h>

int Arr[100000];

int getSum(int i, int n)
{
    if(i == n)
    {
        return 0;
    }

    return Arr[i] + getSum(i + 1, n);
    
}

int main()
{
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &Arr[i]);
    }

    int result = getSum(0, n);

    printf("%d", result);

    return 0;
}
