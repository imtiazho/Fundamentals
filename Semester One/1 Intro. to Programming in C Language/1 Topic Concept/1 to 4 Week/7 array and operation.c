#include<stdint.h>

int main()
{
    /**
        Definition:An array is a data structure in C that can store a fixed-size sequential collection of elements of the same data type.
        Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.
        .
        // Declare and assign value
        int numbers[5] = {1, 2, 3, 4, 5};
    **/

    /** Array Operations **/
    /**
        Traversal: Accessing each element of the array one by one.
        int numbers[5] = {1, 2, 3, 4, 5};
        for (int i = 0; i < 5; i++) {
            printf("%d ", numbers[i]);
        }
    **/

    /**
        Insertion: Adding an element at a specific position in the array.
        int numbers[6] = {1, 2, 3, 4, 5}; // Declaring an array with an extra space
        int position = 2; // Position where the new element is to be inserted
        int value = 10; // New element to be inserted

        for (int i = 5; i > position; i--) {
            numbers[i] = numbers[i - 1];
        }
        numbers[position] = value;

        for (int i = 0; i < 6; i++) {
            printf("%d ", numbers[i]);
        }
    **/

    /**
        Deletion: Removing an element from a specific position in the array.
        int numbers[5] = {1, 2, 3, 4, 5};
        int position = 2; // Position of the element to be deleted

        for (int i = position; i < 4; i++) {
            numbers[i] = numbers[i + 1];
        }
        // Optional: Set the last element to 0 if it's no longer used
        numbers[4] = 0;

        for (int i = 0; i < 4; i++) {
            printf("%d ", numbers[i]);
        }

    **/

    /**
        Searching: Finding the position of an element in the array.
        int numbers[5] = {1, 2, 3, 4, 5};
        int value = 3;
        int position = -1;

        for (int i = 0; i < 5; i++) {
            if (numbers[i] == value) {
                position = i;
                break;
            }
        }

        if (position != -1) {
            printf("Element found at position: %d\n", position);
        } else {
            printf("Element not found\n");
        }
    **/

    /**
        Updating: Changing the value of an element at a specific position in the array.
        int numbers[5] = {1, 2, 3, 4, 5};
        int position = 2;
        int newValue = 10;

        numbers[position] = newValue;

        for (int i = 0; i < 5; i++) {
            printf("%d ", numbers[i]);
        }
    **/

    return 0;
}
