// The 0/1 Knapsack problem is an optimization challenge in computer science and mathematics that determines the maximum total value of items to fit into a backpack with a limited capacity, without exceeding it. Items are indivisible: they must either be taken entirely (1) or left behind (0).

#include <bits/stdc++.h>

using namespace std;

int val[105];
int weight[105];
int dp[105][105];

int knapsack(int i, int maxWeight)
{

    if (i < 0 || maxWeight <= 0)
        return 0;

    // Dp Apply
    if (dp[i][maxWeight] != -1)
    {
        return dp[i][maxWeight];
    }

    if (weight[i] <= maxWeight)
    {
        // Two Option: Do pick or Dont pick
        int opt1 = knapsack(i - 1, maxWeight - weight[i]) + val[i];
        int opt2 = knapsack(i - 1, maxWeight);

        dp[i][maxWeight] = max(opt1, opt2);
        return dp[i][maxWeight];
    }
    else
    {
        // only one option is dont pick
        dp[i][maxWeight] = knapsack(i - 1, maxWeight);
        return dp[i][maxWeight];
    }
}

int main()
{
    int n, maxWeight;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> val[i];

    for (int i = 0; i < n; i++)
        cin >> weight[i];

    cin >> maxWeight;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= maxWeight; j++)
        {
            dp[i][j] = -1;
        }
    }

    cout << knapsack(n - 1, maxWeight) << endl;

    return 0;
}

/*
    || Knapsack Normal Process
    #include <bits/stdc++.h>

    using namespace std;

    int val[105];
    int weight[105];

    int knapsack(int i, int maxWeight)
    {

        if(i < 0 || maxWeight <= 0) return 0;

        if (weight[i] <= maxWeight)
        {
            // Two Option: Do pick or Dont pick
            int opt1 = knapsack(i - 1, maxWeight - weight[i]) + val[i];
            int opt2 = knapsack(i - 1, maxWeight);

            return max(opt1, opt2);
        }
        else
        {
            // only one option is dont pick
            int opt1 = knapsack(i - 1, maxWeight);
            return opt1;
        }
    }

    int main()
    {
        int n, maxWeight;
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> val[i];

        for (int i = 0; i < n; i++)
            cin >> weight[i];

        cin >> maxWeight;

        cout << knapsack(n - 1, maxWeight) << endl;

        return 0;
    }
*/

/*
    || Knapsack with DP and memoization
    #include <bits/stdc++.h>

    using namespace std;

    int val[105];
    int weight[105];
    int dp[105][105];

    int knapsack(int i, int maxWeight)
    {

        if (i < 0 || maxWeight <= 0)
            return 0;

        // Dp Apply
        if (dp[i][maxWeight] != -1)
        {
            return dp[i][maxWeight];
        }

        if (weight[i] <= maxWeight)
        {
            // Two Option: Do pick or Dont pick
            int opt1 = knapsack(i - 1, maxWeight - weight[i]) + val[i];
            int opt2 = knapsack(i - 1, maxWeight);

            dp[i][maxWeight] = max(opt1, opt2);
            return dp[i][maxWeight];
        }
        else
        {
            // only one option is dont pick
            dp[i][maxWeight] = knapsack(i - 1, maxWeight);
            return dp[i][maxWeight];
        }
    }

    int main()
    {
        int n, maxWeight;
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> val[i];

        for (int i = 0; i < n; i++)
            cin >> weight[i];

        cin >> maxWeight;

        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= maxWeight; j++)
            {
                dp[i][j] = -1;
            }
        }

        cout << knapsack(n - 1, maxWeight) << endl;

        return 0;
    }
*/


//.....