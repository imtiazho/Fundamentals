#include <bits/stdc++.h>

using namespace std;

int dp[35];

int trivo(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (n == 2)
        return 1;
    if (n == 3)
        return 2;

    if (dp[n] != -1)
        return dp[n];

    return dp[n] = trivo(n - 1) + trivo(n - 2) + trivo(n - 3) + trivo(n - 4);
}

int main()
{
    int n;
    cin >> n;

    memset(dp, -1, sizeof(dp));
    cout << trivo(n) << endl;
    return 0;
}