#include<iostream>
#include <algorithm>  // for sort

using namespace std;

int main()
{
    long long A, B, C;
    cin >> A >> B >> C;

    if(A < -1000000 || A > 1000000 || B < -1000000 || B > 1000000 || C < -1000000 || C > 1000000)
    {
        return 1;
    }

    long long numbers[3] = {A, B, C};
    sort(numbers, numbers + 3);

    cout << numbers[0] << endl << numbers[1] << endl << numbers[2] << endl << endl;
    cout << A << endl << B << endl << C;
    return 0;
}

