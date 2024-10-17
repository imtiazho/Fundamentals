#include<iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;

    for(int i = 1; i <= T; i++)
    {
        for(int j = 1; j <= T - i; j++)
        {
            cout << " ";
        }
        for(int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for(int i = T; i >= 1; i--)
    {
        for(int j = 1; j <= T - i; j++)
        {
            cout << " ";
        }

        for(int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
