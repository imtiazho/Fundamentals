/*
    || https://codeforces.com/problemset/problem/1722/C
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
        map<string, vector<int>> mp;
        int n, m = 3;
        cin >> n;
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                string s;
                cin >> s;
                mp[s].push_back(i);
            }
        }

        vector<int> v(m + 1);
        for (auto [x, y] : mp)
        {
            if (y.size() == 1)
            {
                v[y[0]] += 3;
            }
            else if (y.size() == 2)
            {
                v[y[0]]++;
                v[y[1]]++;
            }
        }

        for (int i = 1; i <= m; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}