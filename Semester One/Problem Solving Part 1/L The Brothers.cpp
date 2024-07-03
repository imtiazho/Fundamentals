#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    /**
    char nameOne[12];
    gets(nameOne);
    cout << nameOne;
    */
    string F1, F2;
    string S1, S2;
    cin >> F1 >> S1;
    cin >> F2 >> S2;

    if(S1 == S2)
    {
        cout << "ARE Brothers";
    }
    else{
        cout << "NOT";
    }
    return 0;
}
