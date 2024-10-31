#include<iostream>

using namespace std;

int main()
{
    // Memo => A, Momo => B
    long long A, B, K;
    cin >> A >> B >> K;

    if(A < 1 || A >1000000000000000000 || B < 1 || B >1000000000000000000 || K < 1 || K >1000000000000000000)
    {
        return 1;
    }

    if(A % K == 0 && B % K == 0)
    {
        cout << "Both";
    }
    else if(A % K == 0)
    {
        cout << "Memo";
    }
    else if(B % K == 0)
    {
        cout << "Momo";
    }
    else if(A % K != 0 && B % K != 0)
    {
        cout << "No One";
    }

    return 0;
}
