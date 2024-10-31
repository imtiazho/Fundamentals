#include <stdio.h>
#include <string.h>

int main() {
    char S[100001];
    scanf("%s", S);

    int i = 0, j = 0;
    while (S[i] != '\0') {
        if (S[i] == 'h' && j == 0) {
            j++;
        } else if (S[i] == 'e' && j == 1) {
            j++;
        } else if (S[i] == 'l' && j == 2) {
            j++;
        } else if (S[i] == 'l' && j == 3) {
            j++;
        } else if (S[i] == 'o' && j == 4) {
            printf("YES\n");
            return 0;
        }
        i++;
    }

    printf("NO\n");
    return 0;
}
