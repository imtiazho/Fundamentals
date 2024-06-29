#include<stdio.h>

// Define a struct
struct Person {
    char name[50];
    int age;
    float height;
};

// Define a union
union Data {
    int i;
    float f;
    char str[20];
};

int main()
{
    /**
       Definition:In C programming, struct (structure) and union are
       user-defined data types that allow you to group different data
       types together. They provide a way to define complex data structures
       and are essential for managing and organizing data in a program.
    */

    // This for struct ========
    // Declare and initialize a struct variable
    struct Person person1 = {"Alice", 25, 5.6};
    // Access and modify members
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.1f\n", person1.height);
    // Modify struct members
    person1.age = 26;
    printf("Updated Age: %d\n", person1.age);
    //
    //
    // This for union  =========
    // Declare a union variable
    union Data data;
    // Assign and access members
    data.i = 10;
    printf("data.i: %d\n", data.i);
    data.f = 220.5;
    printf("data.f: %.2f\n", data.f);
    // Note: Now, the value of data.i is unpredictable
    strcpy(data.str, "Hello");
    printf("data.str: %s\n", data.str);


    return 0;
}
