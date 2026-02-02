/*
    || https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/X
*/

#include <bits/stdc++.h>

using namespace std;

int n, m;
int grid[15][15];
int dp[15][15];

int find(int i, int j)
{
    if (i == n - 1 && j == m - 1)
        return grid[i][j];

    if (i >= n || j >= m)
        return -1e9;

    // Apply DP
    if (dp[i][j] != -1)
        return dp[i][j];

    // Two way to go
    int first = grid[i][j] + find(i + 1, j);
    int second = grid[i][j] + find(i, j + 1);

    // Save to DP
    dp[i][j] = max(first, second);

    return dp[i][j];
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }

    memset(dp, -1, sizeof(dp));
    cout << find(0, 0) << endl;
    return 0;
}