#include <bits/stdc++.h>

using namespace std;

map<int, bool> dp;

int makeit(int current, int target)
{
    if(current == target) return true;
    if(current > target) return false;

    if(dp.count(current)) return dp[current];

    dp[current] = makeit(3 + current, target) || makeit(2 * current, target);

    return dp[current];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        dp.clear();
        if (makeit(1, n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}