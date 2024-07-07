#include <iostream>
#include <limits>

using namespace std;

int main() {
    unsigned int n, k, a;
    cin >> n >> k >> a;

    unsigned long long product = static_cast<long long>(n) * k;

    if(product % a == 0)
    {
        unsigned long long result = product / a;
        if(result <= numeric_limits<int>::max())
        {
            cout << "int";
        }
        else {
            cout << "long long";
        }
    }
    else {
        cout << "double";
    }


    return 0;
}
