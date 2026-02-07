/*
    || https://codeforces.com/problemset/problem/1703/C
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int val[n];
        for (int i = 0; i < n; i++)
            cin >> val[i];

        for (int i = 0; i < n; i++)
        {
            int x;
            string moves;
            cin >> x >> moves;

            for (char c : moves)
            {
                if (c == 'U')
                {
                    val[i] = val[i] == 0 ? 9 : val[i] - 1;
                }
                else if (c == 'D')
                {
                    val[i] = val[i] == 9 ? 0 : val[i] + 1;
                }
            }
        }

        for (int x : val)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}