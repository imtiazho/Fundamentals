#include<stdio.h>
#include<string.h>

int main()
{
    int A, B;
    char S[100];
    scanf("%d %d", &A, &B);
    scanf("%s", S);

    if(strlen(S) != A + B + 1)
    {
        printf("No\n");
        return 0;
    }

    if (S[A] != '-')
    {
        printf("No\n");
        return 0;
    }

    for(int i = 0; i < strlen(S); i++)
    {
        if(i != A && (S[i] < '0' || S[i] > '9'))
        {
            printf("No\n");
            return 0;
        }
    }

    printf("Yes\n");
    
    return 0;
}