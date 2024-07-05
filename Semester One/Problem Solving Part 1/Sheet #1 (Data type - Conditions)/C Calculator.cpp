#include <iostream>
using namespace std;

int main() {
    long long X, Y;  // Use long long to handle larger values

    // Read input
    cin >> X >> Y;

    // Check if the input values are within the valid range
    if (X < 1 || X > 100000 || Y < 1 || Y > 100000) {
        return 1;  // Exit the program with an error code
    }

    // Perform the calculations
    long long summation = X + Y;
    long long multiplication = X * Y;
    long long subtraction = X - Y;

    // Print the results
    cout << X << " + " << Y << " = " << summation << endl;
    cout << X << " * " << Y << " = " << multiplication << endl;
    cout << X << " - " << Y << " = " << subtraction << endl;

    return 0;
}
