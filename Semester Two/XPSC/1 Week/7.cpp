/*
    || https://atcoder.jp/contests/abc214/tasks/abc214_b?lang=en
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int s, t;
    cin >> s >> t;

    int counter = 0;
    for (int a = 0; a <= s; a++)
    {
        for (int b = 0; b <= s - a; b++)
        {
            for (int c = 0; c <= s - a - b; c++)
            {
                if (a * b * c <= t)
                    counter++;
            }
        }
    }

    cout << counter << endl;

    return 0;
}