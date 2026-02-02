#include <bits/stdc++.h>

using namespace std;

int weight[105], val[105];
int memoi[105][105];

int knapsack(int i, int mx)
{
    if (i < 0 || mx <= 0)
        return 0;

    // Apply Dp
    if (memoi[i][mx] != -1)
        return memoi[i][mx];

    if (weight[i] <= mx)
    {
        int opt1 = knapsack(i - 1, mx - weight[i]) + val[i];
        int opt2 = knapsack(i - 1, mx);

        return memoi[i][mx] = max(opt1, opt2);
    }
    else
    {
        return memoi[i][mx] = knapsack(i - 1, mx);
    }
}

int main()
{
    int n, mx;
    cin >> n >> mx;

    for (int i = 0; i < n; i++)
    {
        cin >> weight[i] >> val[i];
    }

    memset(memoi, -1, sizeof(memoi));
    cout << knapsack(n - 1, mx);

    return 0;
}