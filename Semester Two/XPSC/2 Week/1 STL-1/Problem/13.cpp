/*
    || https://codeforces.com/problemset/problem/903/C
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }

    int maxVis = INT_MIN;
    for (auto [x, y] : mp)
        if (y > maxVis)
            maxVis = y;

    cout << maxVis << endl;
    return 0;
}
