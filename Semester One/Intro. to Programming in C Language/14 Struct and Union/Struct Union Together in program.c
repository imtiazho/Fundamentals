#include <stdio.h>

// Define a struct containing a union
struct Employee {
    int id;
    union {
        int salary;
        float hourly_rate;
    } pay;
    char pay_type; // 'S' for salary, 'H' for hourly rate
};

int main() {
    struct Employee emp1 = {1, .pay.salary = 50000, 'S'};
    struct Employee emp2 = {2, .pay.hourly_rate = 20.5, 'H'};

    if (emp1.pay_type == 'S') {
        printf("Employee 1 Salary: %d\n", emp1.pay.salary);
    } else {
        printf("Employee 1 Hourly Rate: %.2f\n", emp1.pay.hourly_rate);
    }

    if (emp2.pay_type == 'S') {
        printf("Employee 2 Salary: %d\n", emp2.pay.salary);
    } else {
        printf("Employee 2 Hourly Rate: %.2f\n", emp2.pay.hourly_rate);
    }

    return 0;
}
