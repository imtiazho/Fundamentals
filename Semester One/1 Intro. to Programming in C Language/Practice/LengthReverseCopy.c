#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Hello, world!";
    char destination[20];
    int length;

    // strcpy()
    strcpy(destination, source);
    printf("Copied string: %s\n", destination);

    // strlen()
    length = strlen(source);
    printf("Length of the string: %d\n", length);

    // strrev()
    strrev(source);
    printf("Reversed string: %s\n", source);

    return 0;
}
