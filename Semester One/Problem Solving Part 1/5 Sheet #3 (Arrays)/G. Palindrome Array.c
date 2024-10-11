#include <stdio.h>

int isPalindromeArray(int A[], int N) {
    int left = 0;
    int right = N - 1;

    while (left < right) {
        if (A[left] != A[right]) {
            return 0;
        }
        left++;
        right--;
    }

    return 1;
}

int main() {
    int N;
    scanf("%d", &N);

    int A[N];
    for(int i = 0; i < N; i++)
    {
        scanf("%lld", &A[i]);
    }

    if (isPalindromeArray(A, N)) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}