#include<stdio.h>

int main()
{
    /*
        To optimize a problem
        What is frequency Array: A frequency array is a data structure that stores the frequency of occurrence of each unique element in a given dataset. It's particularly useful when dealing with large datasets where you need to efficiently count the occurrences of different values
    */

    int n;
    scanf("%d", &n);

    int a[n + 5];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int freArray[100000] = {0};

    for(int i = 0; i < n; i++)
    {
        freArray[a[i]] = 1;
    }

    for(int i = 0; i < 10; i++)
    {
        printf("%d ", freArray[i]);
    }

    printf("\n");

    // For single value search
    // printf("\n%d", freArray[7]);

    // For multiple value searching
    int m;
    scanf("%d", &m);

    for(int i = 0; i < m; i++)
    {
        int x;
        scanf("%d", &x);

        if(freArray[x] == 1)
        {
            printf("Ache\n");
        }
        else
        {
            printf("Nai\n");
        }
    }
    return 0;
}
