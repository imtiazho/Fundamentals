// https://docs.google.com/document/d/1JTCbAZ4kUPpGgsvmGMAF2qxBc1eSAwnAexCH97IohgY/edit?usp=sharing
#include <bits/stdc++.h>

using namespace std;

int val[1005], weight[1005];
int dp[1005][1005];

int knapsack(int i, int mxW)
{
    if (i < 0 || mxW < 0)
    {
        return 0;
    }

    // DP Apply
    if (dp[i][mxW] != -1)
    {
        return dp[i][mxW];
    }
    // Two options
    // 1 bag rakhbo, 2 bag e rakhbo na!
    if (weight[i] <= mxW)
    {
        int op1 = knapsack(i - 1, mxW - weight[i]) + val[i];
        int op2 = knapsack(i - 1, mxW);

        // return max(op1, op2);
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
    /*
        || KnapSack Implementation I
    */
    int n, mxW;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }

    cin >> mxW;

    cout << knapsack(n - 1, mxW);

    return 0;
}