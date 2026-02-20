/*
    || https://codeforces.com/problemset/problem/501/B
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    /* Misha ILoveCodeforces
    ILoveCodeforces MikeMirzayanov */
    int t;
    cin >> t;
    map<string, string> mp, hasAlready;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

        if (hasAlready.find(s1) != hasAlready.end())
        {
            string oirginalUserName = hasAlready[s1];

            mp[oirginalUserName] = s2;

            hasAlready.erase(s1);
            hasAlready[s2] = oirginalUserName;
        }
        else
        {
            mp[s1] = s2;
            hasAlready[s2] = s1;
        }
    }

    cout << mp.size() << endl;
    for (auto [x, y] : mp)
    {
        cout << x << " " << y << endl;
    }
    return 0;
}