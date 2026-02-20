/*
    || https://codeforces.com/problemset/problem/1974/B
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
        int n;
        string s;
        cin >> n >> s;

        set<char> st;
        for (auto c : s)
        {
            st.insert(c);
        }

        vector<char> v;
        for (auto x : st)
        {
            v.push_back(x);
        }

        map<char, char> mp;
        for (int i = 0; i < v.size(); i++)
        {
            mp[v[i]] = v[v.size() - i - 1];
        }

        for(auto c : s)
        {
            cout << mp[c];
        }
        cout << endl;
    }

    return 0;
}
