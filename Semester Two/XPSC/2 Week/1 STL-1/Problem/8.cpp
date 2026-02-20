/*
    || https://codeforces.com/problemset/problem/918/B
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> v;
    set<string> track;
    for (int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if(track.find(v[i]) == track.end())
        {
            cout << v[i] << endl;
            track.insert(v[i]);
        }
    }
    
    return 0;
}