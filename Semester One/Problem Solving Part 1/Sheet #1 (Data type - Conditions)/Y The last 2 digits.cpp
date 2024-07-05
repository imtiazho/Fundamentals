#include <iostream>
using namespace std;

int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    // Compute the product modulo 100
    long long product = A * B % 100;
    product = product * C % 100;
    product = product * D % 100;

    // Print the last two digits
    if (product < 10) {
        cout << "0" << product << endl; // Ensure two digits by padding with zero if necessary
    } else {
        cout << product << endl;
    }

    return 0;
}
