#include<iostream>

using namespace std;

int main()
{
    int X;
    cin >> X;
    bool YesORNot = true;
    for(int i = 2; i < X; i++)
    {
        if(X % i == 0)
        {
            YesORNot = false;
            break;
        }
    }

    if(YesORNot)
    {
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}
