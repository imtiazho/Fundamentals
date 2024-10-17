#include <iostream>

using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    if(a < 0 || a > 100 || b < 0 || b > 100)
    {
        return 1;
    }

    if((a - b == 1 || b - a == 1) || (a == b && a != 0 && b != 0))
    {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}
