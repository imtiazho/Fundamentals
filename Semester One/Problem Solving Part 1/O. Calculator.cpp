#include<iostream>

using namespace std;

int main()
{
    int A, B;
    char S;
    cin >> A >> S >> B;

    if(A < 1 || A > 10000 || B < 1 || B > 10000)
    {
        return 1;
    }

    if(S == '+')
    {
        cout << A + B;
    }
    else if(S == '-')
    {
        cout << A - B;
    }
    else if(S == '*')
    {
        cout << A * B;
    }
    else if(S == '/')
    {
        double result = A / B;
        cout << result;
    }


    return 0;
}
