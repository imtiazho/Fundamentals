#include<iostream>

using namespace std;

int main()
{
    /*
        Uppercase (A-Z): 65 to 90
        Lowercase (a-z): 97 to 122
        Digits (0-9): 48 to 57
    */
    char X;
    cin >> X;
    int value = X;
    if(value >= 48 && value <= 57)
    {
        cout << "IS DIGIT";
    }
    else if(value >= 65 && value <= 90)
    {
        cout << "ALPHA" << endl;
        cout << "IS CAPITAL";
    }
    else if(value >= 97 && value <= 122)
    {
        cout << "ALPHA" << endl;
        cout << "IS SMALL";
    }
    return 0;
}
