#include<iostream>

using namespace std;

bool isLuckyNumber(int n)
{
    if(n < 0)
    {
        return false;
    }

    while(n > 0)
    {
        int digit = n % 10;
        if(digit != 4 && digit != 7)
        {
            return false;
        }
        n /= 10;
    }

    return true;
}

int main()
{
    int A, B;
    cin >> A >> B;
    if(A > B)
    {
        return 1;
    }

    bool foundLucky = false;
    for(int i = A; i <= B; i++)
    {
        if(isLuckyNumber(i))
        {
            cout << i << " ";
            foundLucky = true;
        }
    }

    if(!foundLucky)
    {
        cout << "-1";
    }
    return 0;
}
