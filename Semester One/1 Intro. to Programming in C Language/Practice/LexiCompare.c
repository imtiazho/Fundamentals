#include <stdio.h>
#include <string.h>

int main() {
    char str1[20], str2[20];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    int result = strcmp(str1, str2);

    if (result < 0) {
        printf("%s is lexicographically smaller than %s\n", str1, str2);
    } else if (result > 0) {
        printf("%s is lexicographically larger than %s\n", str1, str2);
    } else {
        printf("%s and %s are lexicographically equal\n", str1, str2);
    }

    return 0;
}
