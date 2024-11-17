#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);

    int A[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    int pDSum = 0, sDSum = 0;

    for (int i = 0; i < N; i++) {
        pDSum += A[i][i];
        sDSum += A[i][N - i - 1];
    }

    int difference = abs(pDSum - sDSum);
    printf("%d\n", difference);

    return 0;
}
