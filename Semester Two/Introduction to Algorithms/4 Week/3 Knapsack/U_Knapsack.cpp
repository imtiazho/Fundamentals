#include <bits/stdc++.h>

using namespace std;

int val[1005], weight[1005];
int dp[1005][1005];

int knapsack(int i, int mxW)
{
    if (i < 0 || mxW <= 0)
        return 0;

    if (dp[i][mxW] != -1)
    {
        return dp[i][mxW];
    }

    if (weight[i] <= mxW)
    {
        int op1 = knapsack(i - 1, mxW - weight[i]) + val[i];
        int op2 = knapsack(i - 1, mxW);

        dp[i][mxW] = max(op1, op2);

        return dp[i][mxW];
    }
    else
    {
        dp[i][mxW] = knapsack(i - 1, mxW);
        return dp[i][mxW];
    }
}

int main()
{
    int n, mxW;
    cin >> n >> mxW;
    for (int i = 0; i < n; i++)
    {
        cin >> weight[i] >> val[i];
    }

    memset(dp, -1, sizeof(dp));

    cout << knapsack(n - 1, mxW) << endl;

    return 0;
}