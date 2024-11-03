#include<stdio.h>
#include <stdlib.h>

int main()
{
    /**
        Definition: A dynamic array is an array data structure that can grow and shrink in size at runtime, unlike static arrays whose size is
        fixed at compile time.
    **/
    int *array;
    int initial_size = 5;
    int new_size = 10;
    int i;

    array = (int *)malloc(initial_size * sizeof(int));

    // Check if memory allocation was successful
    if (array == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Initialize array elements
    for (i = 0; i < initial_size; i++) {
        array[i] = i + 1;
    }

    // Print initial array elements
    printf("Initial array elements: ");
    for (i = 0; i < initial_size; i++) {
        printf("%d, ", array[i]);
    }
    printf("\n");

    // Resize the array using realloc
    array = (int *)realloc(array, new_size * sizeof(int));

    // Check if memory reallocation was successful
    if (array == NULL) {
        printf("Memory reallocation failed\n");
        return 1;
    }

    // Initialize new elements in the resized array
    for (i = initial_size; i < new_size; i++) {
        array[i] = i + 1;
    }

    // Print elements of the resized array
    printf("Resized array elements: ");
    for (i = 0; i < new_size; i++) {
        printf("%d, ", array[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(array);

    return 0;
}
