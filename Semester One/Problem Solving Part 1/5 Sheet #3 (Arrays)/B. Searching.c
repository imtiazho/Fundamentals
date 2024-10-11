#include <stdio.h>
#include <stdlib.h>  
 
int main() {
    int N, foundStatus = -1;
    scanf("%d", &N);
    long long int A[N];
    for(int i = 0; i < N; i++)
    {
        scanf("%lld", &A[i]);
    }
 
    long long int targetedNumber;
    scanf("%lld", &targetedNumber);
 
    for(int j = 0; j < N; j++)
    {
        if(A[j] == targetedNumber){
            foundStatus = j;
            break;
        }
    }
 
    printf("%d", foundStatus);
 
 
    return 0;
}