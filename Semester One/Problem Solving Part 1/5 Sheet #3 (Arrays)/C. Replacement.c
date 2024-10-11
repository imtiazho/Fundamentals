#include<stdio.h>
 
int main(){
    int N;
    scanf("%d", &N);
 
    int A[N];
 
    for(int i = 0; i < N; i++){
        scanf("%d", &A[i]);
    }
 
    for(int j = 0; j < N; j++)
    {
        if(A[j] > 0)
        {
            A[j] = 1;
        }
        else if(A[j] == 0)
        {
            continue;
        }
        else{
            A[j] = 2;
        }
    }
 
    for(int i = 0; i < N; i++){
        printf("%d ", A[i]);
    }
 
    return 0;
}