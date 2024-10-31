#include <stdio.h>
#include <string.h>

int main() {
    char A[11], B[11];
    scanf("%s %s", A, B);

    // Task One : Two Length
    printf("%d %d\n", strlen(A), strlen(B));

    // Task two : Concatinate
    printf("%s%s\n", A, B);

    // Task three : Swap first element
    char temp = A[0];
    A[0] = B[0];
    B[0] = temp;
    printf("%s %s\n", A, B);

    return 0;
}
