#include<stdio.h>

int main()
{
    /**
       Definition: In C programming, a file is a data structure
       used to store a sequence of bytes on a disk or other storage
       medium.
    */

    // Open a file for writing
    FILE *fp = fopen("file.txt", "w");
    if (fp == NULL) {
        perror("Error opening file");
        return -1;
    }

    // Write some text to the file
    fputs("Hello, World!\n", fp);
    fclose(fp);


    // Open the file for reading
    fp = fopen("file.txt", "r");
    if (fp == NULL) {
        perror("Error opening file");
        return -1;
    }

    // Read and print the contents of the file
    char buffer[100];
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

    // Close file
    fclose(fp);
    return 0;
}
