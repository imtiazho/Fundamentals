/*
    || https://codeforces.com/problemset/problem/1792/A
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, cnt = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 1)
                cnt++;
        }

        cout << n - (cnt / 2) << endl;
    }

    return 0;
}