#include<iostream>

using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    int difference = A - B;

    if(difference >= 0)
    {
        cout << difference;
    }
    else {
        cout << "0";
    }
    return 0;
}
