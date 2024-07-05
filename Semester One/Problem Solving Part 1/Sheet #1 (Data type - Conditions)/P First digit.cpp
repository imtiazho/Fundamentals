#include<iostream>

using namespace std;

int main()
{
    string X;
    cin >> X;
    char firstDigit = X[0];
    int firstDigitInNum = firstDigit - '0';
    if(firstDigitInNum % 2 == 0)
    {
        cout << "EVEN";
    }
    else{
        cout << "ODD";
    }
    return 0;
}
