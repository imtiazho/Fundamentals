#include <bits/stdc++.h>

using namespace std;

bool stringCheck(string s1, string s2)
{
    int freqOne[26] = {0};
    int freqTwo[26] = {0};

    for (int i = 0; i < s1.length(); i++)
    {
        freqOne[s1[i] - 'a']++;
        freqTwo[s2[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freqOne[i] != freqTwo[i])
            return false;
    }
    
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

        if (s1.length() != s2.length())
        {
            cout << "NO" << endl;
        }
        else
        {
            if (stringCheck(s1, s2))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}