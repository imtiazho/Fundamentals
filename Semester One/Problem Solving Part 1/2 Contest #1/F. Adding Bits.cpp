#include <iostream>
#include<bitset>

using namespace std;

int main() {
    long long A, B;
    cin >> A >> B;

    unsigned int result = A ^ B;
    cout << result;
    return 0;
}
