#include<iostream>

using namespace std;

int main()
{
    // Note : difference between 'a' and 'A' in ASCII is 32 .
    char X;
    cin >> X;
    int inAscii = X;
    if(inAscii >= 65 && inAscii <= 90)
    {
        char result = inAscii + 32;
        cout << result;
    }
    else if(inAscii >= 97 && inAscii <= 122)
    {
        char result = inAscii - 32;
        cout << result;
    }
    return 0;
}
