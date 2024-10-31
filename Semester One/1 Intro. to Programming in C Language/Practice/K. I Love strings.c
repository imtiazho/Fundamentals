#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);

    while (N--) {
        char S[51], T[51];
        scanf("%s %s", S, T);

        int lenS = strlen(S);
        int lenT = strlen(T);

        int i;
        for (i = 0; i < lenS && i < lenT; i++) {
            printf("%c%c", S[i], T[i]);
        }

        while (i < lenS) {
            printf("%c", S[i]);
            i++;
        }

        while (i < lenT) {
            printf("%c", T[i]);
            i++;
        }

        printf("\n");
    }

    return 0;
}
