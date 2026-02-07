/*
    || https://codeforces.com/problemset/problem/1703/C
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Shorter Version with element changing
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s1, s2;
        cin >> n >> s1 >> s2;

        for(int i = 0; i < n; i++)
        {
            if(s1[i] == 'G') s1[i] = 'B';
            if(s2[i] == 'G') s2[i] = 'B';
        }

        cout << (s1 == s2 ? "YES" : "NO") << endl; 
    }

    return 0;
}


/*
    || First Soln
    #include <bits/stdc++.h>

    using namespace std;

    int main()
    {
        int t;
        cin >> t;
        while (t--)
        {
            int n;
            cin >> n;
            string s1, s2;
            cin >> s1 >> s2;

            bool flag = false;
            for (int i = 0; i < n; i++)
            {
                if (s1[i] != 'R' && s2[i] == 'R' || s2[i] != 'R' && s1[i] == 'R')
                {
                    flag = true;
                    break;
                }
            }

            if (flag)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }

        return 0;
    }
*/