#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    // Compute B * log(A) and D * log(C)
    long double leftSide = B * log(A);
    long double rightSide = D * log(C);
    cout << leftSide << " " << rightSide;
    if (leftSide > rightSide) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
