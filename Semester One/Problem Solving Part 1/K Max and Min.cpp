#include<iostream>
#include <algorithm>

using namespace std;

int main()
{
    long long A, B, C, minimum, maximum;
    cin >> A >> B >> C;

    // Error Handling
    if(A < -100000 || A > 100000 || B < -100000 || B > 100000 || C < -100000 || C > 100000 )
    {
        return 1;
    }

    /**
    // Another way
    // Max Check
    if(A > B && A > C)
    {
        maximum = A;
    }
    else if(B > A && B > C)
    {
        maximum = B;
    }
    else{
        maximum = C;
    }

    // Min Check
    if(A < B && A < C)
    {
        minimum = A;
    }
    else if(B < A && B < C)
    {
        minimum = B;
    }
    else{
        minimum = C;
    }
    */
    minimum = min({A, B, C});
    maximum = max({A, B, C});


    cout << minimum << " " << maximum;
    return 0;
}
