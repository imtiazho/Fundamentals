/*
    || https://codeforces.com/problemset/problem/1997/A
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string s, ans;
        cin >> s;

        if (s.length() == 1)
        {
            if (s[0] == 'z')
            {
                ans = s;
                ans += 'a';
            }
            else
            {
                ans.push_back(s[0]);
                ans.push_back(s[0] + 1);
            }
        }
        else
        {
            bool flag = false;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == s[i + 1] && !flag)
                {
                    ans.push_back(s[i]);
                    if (s[i] != 'z')
                    {
                        ans.push_back(s[i] + 1);
                    }
                    else
                    {
                        ans.push_back('a');
                    }
                    flag = true;
                }
                else
                {
                    ans.push_back(s[i]);
                }
            }

            if (!flag)
            {
                ans = s;
                if (s[s.size() - 1] == 'z')
                {
                    ans += 'a';
                }
                else
                {
                    ans.push_back(s[s.size() - 1] + 1);
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}

// rna
// apa
// va
// vna
