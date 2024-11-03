#include<stdio.h>

int freqArray[100001];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n + 5];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        freqArray[a[i]] += 1;
    }

    for(int i = 1; i <= m; i++)
    {
        printf("%d\n", freqArray[i]);
    }
    return 0;
}
