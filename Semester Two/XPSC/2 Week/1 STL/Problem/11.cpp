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
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
            cin >> v[i];

        
        set<int> exist;
        int cnt = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            if(exist.count(v[i]))
            {
                break;
            }

            exist.insert(v[i]);
            cnt++;
        }
       
        cout << n - cnt << endl;
    }

    return 0;
}
