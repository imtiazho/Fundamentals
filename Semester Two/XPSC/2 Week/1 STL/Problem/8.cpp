/*
    || https://codeforces.com/problemset/problem/918/B
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    map<string, string> mp;
    while(n--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        mp[s2] = s1;
    }
    
    while(m--)
    {
        string s1, s2;
        cin >> s1 >> s2;

        string realIp = s2;
        realIp.pop_back();

        if(mp.find(realIp) != mp.end())
        {
            cout << s1 << " " << s2 << " " << '#' << mp[realIp] << endl;
        }
    }

    return 0;
}