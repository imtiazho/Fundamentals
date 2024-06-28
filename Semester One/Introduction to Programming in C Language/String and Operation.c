#include<stdio.h>
#include <string.h>

int main()
{
    /**
        Definition: a string is a sequence of characters terminated by a null character (\0).
        Strings are stored in arrays of characters. For example, the string "Hello" is stored
        as an array of characters ['H', 'e', 'l', 'l', 'o', '\0'].
        .
        char str1[] = "Hello";  // String literal, size is determined automatically
        char str2[6] = "Hello";  // Explicit size, including the null terminator
        char str3[6] = {'H', 'e', 'l', 'l', 'o', '\0'};  // Character array
        .
        1. String Copy (strcpy)
        {
            char src[] = "Hello";
            char dest[6];
            strcpy(dest, src);
            printf("Copied string: %s\n", dest);
        }
        .
        2. String Concatenation (strcat)
        {
            str1[20] = "Hello, ";
            char str2[] = "World!";
            strcat(str1, str2);
            printf("Concatenated string: %s\n", str1);
        }
        .
        3. String Length (strlen)
        {
            char str[] = "Hello, World!";
            int length = strlen(str);
            printf("Length of the string: %d\n", length);
        }
        .
        4. String Comparison (strcmp): base on ASCII value
        {
            char str1[] = "Hello";
            char str2[] = "World";
            int result = strcmp(str1, str2);
            if (result == 0) {
                printf("Strings are equal\n");
            } else if (result < 0) {
                printf("str1 is less than str2\n");
            } else {
                printf("str1 is greater than str2\n");
            }
        }
        5. String Reverse (strrev)
        {
            char str[] = "Hello, World!";
            strrev(str);
            printf("Reversed string: %s\n", str);
        }
        6. String Tokenization (strtok)
        {
            char str[] = "Hello, World! This is C programming.";
            char delimiters[] = " ,.!";  // Delimiters are space, comma, period, and exclamation mark
            char *token;

            // Get the first token
            token = strtok(str, delimiters);

            // Walk through other tokens
            while (token != NULL) {
                printf("Token: %s\n", token);
                token = strtok(NULL, delimiters);
            }
        }
    **/


    return 0;
}
