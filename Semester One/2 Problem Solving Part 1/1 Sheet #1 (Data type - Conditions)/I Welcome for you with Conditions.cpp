#include<iostream>

using namespace std;

int main()
{
    long long A, B;
    cin >> A >> B;

    if(A < 0 || A > 100 || B < 0 || B > 100)
    {
        return 1;
    }

    if(A >= B)
    {
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}
