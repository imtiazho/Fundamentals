#include<stdio.h>
#include<stdlib.h>

int main()
{
    // Pointer also known as dereferencing variable
    /*
    // Working with pointer
    int a = 5;
    int *b = &a;

    *b = 6;
    printf("Address = %d and value = %d", b, *b);
    */

    /*
    // work with pointer
    int arr[5] = {1, 2, 3, 4, 5};
    int *x = arr;
    printf("%d %d\n", &arr[0], x);
    printf("%d\n", (x + 1));

    char letter = 'a';
    char *p = &letter;
    printf("%d %d", p, p + 1);
    */

    /*
    // Pointer in array
    int *arr = (int *)malloc(5 * sizeof(int));

    for(int i = 0; i < 5; i++)
    {
        arr[i] = i + 1;
    }

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Resize
    int *temp = arr;
    arr = (int *)realloc(arr, 10 * sizeof(int));

    if(arr == NULL)
    {
        arr = temp;
    }

    for(int i = 5; i < 10; i++)
    {
        arr[i] = i + 1;
    }
    for(int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }


    // Deallocate
    free(arr);
    */

    /*
        We can store address of another pointer
        int a = 5;
        int *x = &a;
        int **y = &x;

        if we need to use value of pointer then we have to use **y.
        printf("%d", *y); => address of a

        printf("%d", **y); => value of a
    */

    return 0;
}
