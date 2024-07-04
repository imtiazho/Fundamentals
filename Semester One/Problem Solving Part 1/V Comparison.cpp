#include<iostream>

using namespace std;

int main()
{
    int A, B;
    char S;
    cin >> A >> S >> B;
    if(A < -100 || A > 100 || B < -100 || B > 100)
    {
        return 1;
    }

    if(S == '>')
    {
        if(A > B)
        {
            cout << "Right";
        }
        else{
            cout << "Wrong";
        }
    }
    if(S == '<')
    {
        if(A < B)
        {
            cout << "Right";
        }
        else{
            cout << "Wrong";
        }
    }

    if(S == '=')
    {
        if(A == B)
        {
            cout << "Right";
        }
        else{
            cout << "Wrong";
        }
    }

    return 0;
}
