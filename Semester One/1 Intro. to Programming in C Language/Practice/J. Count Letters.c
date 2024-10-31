#include <stdio.h>
#include <string.h>

int main() {
    char s[10000001];

    if (scanf("%s", s) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    int len = strlen(s);
    if (len > 10000000) {
        printf("Input string too long\n");
        return 1;
    }

    int freq[26] = {0};

    for (int i = 0; i < len; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            freq[s[i] - 'a']++;
        } else {
            printf("Invalid character in input\n");
            return 1;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            printf("%c : %d\n", 'a' + i, freq[i]);
        }
    }

    return 0;
}
