#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // A system of declaration
    // int n, m;
    // cin >> n >> m;
    // vector<vector<int>> v(n, vector<int>(m, 0));
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; i++)
    //     {
    //         cout << v[i][j] << " ";
    //     }
    // }

    // Another system of declaration
    // int n;
    // cin >> n;
    // vector<vector<int>> v;
    // for (int i = 0; i < n; i++)
    // {
    //     int m;
    //     cin >> m;
    //     vector<int> a;
    //     for (int j = 0; i < m; j++)
    //     {
    //         int x;
    //         cin >> x;
    //         a.push_back(x);
    //     }

    //     v.push_back(a);
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < v[i].size(); j++)
    //     {
    //         cout << v[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // Store string in 2D vector
    int n;
    cin >> n;
    vector<string> v;
    for (int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }

    // A way to print
    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << endl;
    // }

    // Another way to print
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}