/*
    || https://codeforces.com/problemset/problem/44/A
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<pair<string, string>, bool> mp;
    while(n--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        mp[{s1, s2}] = true;
    }

    cout << mp.size() << endl;

    return 0;
}