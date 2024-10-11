#include <stdio.h>
#include <stdlib.h>  
 
int main() {
    int N;
    long long sum = 0;  
 
    scanf("%d", &N);
 
    for (int i = 0; i < N; i++) {
        int x;
        scanf("%d", &x);
        sum += x;  
    }
 
    printf("%lld\n", llabs(sum));
 
    return 0;
}