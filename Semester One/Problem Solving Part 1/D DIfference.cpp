#include <iostream>
using namespace std;

int main() {
    long long A, B, C, D;  // Use long long to handle larger values

    // Read input
    cin >> A >> B >> C >> D;

    // Check if the input values are within the valid range
    if ((A < -100000 || A > 100000) || (B < -100000 || B > 100000) || (C < -100000 || C > 100000) || (D < -100000 || D > 100000)) {
        return 1;  // Exit the program with an error code
    }

    long long X = (A * B) - (C * D);

    cout << "Difference = " << X << endl;

    return 0;
}
