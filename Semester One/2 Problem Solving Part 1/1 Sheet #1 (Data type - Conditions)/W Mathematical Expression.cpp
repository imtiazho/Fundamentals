#include<iostream>

using namespace std;

int main()
{
    int A, B, C;
    char S, Q;
    cin >> A >> S >> B >> Q >> C;
    if(A < 0 || A > 100 || B < 0 || B > 100)
    {
        return 1;
    }

    if(S == '+')
    {
        if(A + B == C)
        {
            cout << "Yes";
        }
        else{
            cout << A + B;
        }
    }

    if(S == '-')
    {
        if(A - B == C)
        {
            cout << "Yes";
        }
        else{
            cout << A - B;
        }
    }

    if(S == '*')
    {
        if(A * B == C)
        {
            cout << "Yes";
        }
        else{
            cout << A * B;
        }
    }


    return 0;
}
