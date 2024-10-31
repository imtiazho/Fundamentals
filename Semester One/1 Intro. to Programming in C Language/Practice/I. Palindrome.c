#include <stdio.h>
#include <string.h>

int main() {
    char S[1001];
    scanf("%s", S);

    int length = strlen(S);
    int palindromeStatus = 1;

    for (int i = 0; i < length / 2; i++) {
        if (S[i] != S[length - i - 1]) {
            palindromeStatus = 0;
            break;
        }
    }

    if (palindromeStatus) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
