#include <stdio.h>
#include <limits.h>

int main() {
    long long int T, N;
    scanf("%lld", &T);

    for (int t = 0; t < T; t++) {
        scanf("%lld", &N);
        
        long long int A[N];
        for (int j = 0; j < N; j++) {
            scanf("%lld", &A[j]);
        }
        
        int minResult = INT_MAX;
        int minPrefix = A[0] - 0;  

        for (int j = 1; j < N; j++) {
            int currentResult = A[j] + j + minPrefix;
            if (currentResult < minResult) {
                minResult = currentResult;
            }

            if (A[j] - j < minPrefix) {
                minPrefix = A[j] - j;
            }
        }

        printf("%d\n", minResult);
    }

    return 0;
}
