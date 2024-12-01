#include <bits/stdc++.h>

using namespace std;

int main()
{
    // E G Y P T
    string S;
    cin >> S;
    
    while (1)
    {
        int pos = S.find("EGYPT");
        if (pos != -1)
        {
            S.erase(pos, 5);
            S.insert(S.begin() + pos, ' ');
        }
        else
        {
            break;
        }
    }

    cout << S;

    return 0;
}

/*
    // Find()
    int T;
    cin >> T;
    while (T--)
    {

        string s;
        cin >> s;
        if (s.find("101") != -1)
        {
            cout << "GOOD";
        }
        else if (s.find("010") != -1)
        {
            cout << "GOOD";
        }
        else
        {
            cout << "BAD";
        }
    }
*/