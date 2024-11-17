#include <iostream>
#include<iomanip>

const double PI = 3.141592653;

using namespace std;

int main() {
    double R;  // Use long long to handle larger values

    // Read input
    cin >> R;

    // Check if the input values are within the valid range
    if (R < 1 || R > 100 ) {
        return 1;  // Exit the program with an error code
    }

    cout << fixed << setprecision(9);
    double area = PI * R * R;

    cout << area << endl;

    return 0;
}
