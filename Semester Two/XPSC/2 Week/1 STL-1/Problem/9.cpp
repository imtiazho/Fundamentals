/*
    || https://codeforces.com/problemset/problem/855/A
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    set<string> st;
    while(t--)
    {
        string s;
        cin >> s;

        if(st.find(s) != st.end())
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
            st.insert(s);
        }
    }
    
    return 0;
}