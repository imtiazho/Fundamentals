#include <bits/stdc++.h>

using namespace std;

int dp[1005][1005];

int knapsack(int i, int maxW, int weight[], int val[])
{
    if(i < 0 || maxW <= 0) return 0;

    if(dp[i][maxW] != -1) return dp[i][maxW];

    if(weight[i] <= maxW)
    {
        int op1 = knapsack(i - 1, maxW - weight[i], weight, val) + val[i];
        int op2 = knapsack(i - 1, maxW, weight, val);

        dp[i][maxW] = max(op1, op2);
        return dp[i][maxW];
    }
    else{
        int op1 = knapsack(i - 1, maxW, weight, val);

        dp[i][maxW] = op1;

        return dp[i][maxW];
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, maxW;
        cin >> n >> maxW;
        int weight[n + 5];
        int val[n + 5];

        for(int i = 0; i < n; i++)
            cin >> weight[i];

        for(int i = 0; i < n; i++)
            cin >> val[i];

        memset(dp, -1, sizeof(dp));
        cout << knapsack(n - 1, maxW, weight, val) << endl;
    }

    return 0;
}