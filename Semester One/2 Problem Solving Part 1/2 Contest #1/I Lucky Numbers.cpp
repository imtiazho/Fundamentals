#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int firstDigit = N / 10;
    int secondDigit = N % 10;

    if((secondDigit != 0 && firstDigit % secondDigit == 0) || (firstDigit != 0 && secondDigit % firstDigit == 0))
    {
        cout << "YES";
    }
    else{
        cout << "NO";

    }
    return 0;
}
