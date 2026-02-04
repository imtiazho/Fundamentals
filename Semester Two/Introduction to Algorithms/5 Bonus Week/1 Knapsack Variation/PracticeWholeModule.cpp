#include <bits/stdc++.h>

using namespace std;

int val[105];
int dp[105][105];

bool findSubsetSum(int i, int sum)
{
    if (i < 0)
    {
        return sum == 0;
    }

    if (dp[i][sum] != -1)
        return dp[i][sum];

    if (val[i] <= sum)
    {
        return dp[i][sum] = findSubsetSum(i - 1, sum - val[i]) + findSubsetSum(i - 1, sum);
    }
    else
    {
        return dp[i][sum] = findSubsetSum(i - 1, sum);
    }
}

#include <bits/stdc++.h>

using namespace std;

int val[1005], weight[1005];
int dp[1005][1005];

int knapsack(int i, int mxW)
{
    if (i < 0 || mxW <= 0)
    {
        return 0;
    }

    // DP Apply
    if (dp[i][mxW] != -1)
    {
        return dp[i][mxW];
    }

    if (weight[i] <= mxW)
    {
        // Two options 
        int op1 = knapsack(i, mxW - weight[i]) + val[i];
        int op2 = knapsack(i - 1, mxW);

        // return max(op1, op2);
        dp[i][mxW] = max(op1, op2);

        return dp[i][mxW];
    }
    else
    {
        // One Options
        // Bag e rakhte parbo na
        dp[i][mxW] = knapsack(i - 1, mxW);
        return dp[i][mxW];
    }
}

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
        sum += val[i];
    }

    if (sum % 2 == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
            for (int j = 0; j <= sum; j++)
                dp[i][j] = -1;

        if (findSubsetSum(n - 1, sum / 2))
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

/*
    || Subset Sum || The subset sum problem is a foundational decision problem in computer science and mathematics that determines if any combination of integers from a given set equals a specific target sum

    #include <bits/stdc++.h>

    using namespace std;

    int val[105];
    int dp[105][105];

    bool findSubsetSum(int i, int sum)
    {
        if (i < 0)
        {
            return sum == 0;
        }

        if (dp[i][sum] != -1)
            return dp[i][sum];

        if (val[i] <= sum)
        {
            return dp[i][sum] = findSubsetSum(i - 1, sum - val[i]) || findSubsetSum(i - 1, sum);
        }
        else
        {
            return dp[i][sum] = findSubsetSum(i - 1, sum);
        }
    }

    int main()
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> val[i];

        int sum;
        cin >> sum;

        memset(dp, -1, sizeof(dp));
        if (findSubsetSum(n - 1, sum))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

        return 0;
    }
*/

/*
    || Subset sum count : How many way can create subset sum
    #include <bits/stdc++.h>

    using namespace std;

    int val[105];
    int dp[105][105];

    int findSubsetSum(int i, int sum)
    {
        if (i < 0)
        {
            if (sum == 0)
                return 1;
            else
                return 0;
        }

        if (dp[i][sum] != -1)
            return dp[i][sum];

        if (val[i] <= sum)
        {
            return dp[i][sum] = findSubsetSum(i - 1, sum - val[i]) + findSubsetSum(i - 1, sum);
        }
        else
        {
            return dp[i][sum] = findSubsetSum(i - 1, sum);
        }
    }

    int main()
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> val[i];

        int sum;
        cin >> sum;
        memset(dp, -1, sizeof(dp));
        cout << findSubsetSum(n - 1, sum) << endl;

        return 0;
    }
*/

/*
    || Equal Sum : Can this list of numbers be split into two groups such that the sum of the numbers in each group is exactly the same?

    #include <bits/stdc++.h>

    using namespace std;

    int val[105];
    int dp[105][105];

    bool findSubsetSum(int i, int sum)
    {
        if (i < 0)
        {
            return sum == 0;
        }

        if (dp[i][sum] != -1)
            return dp[i][sum];

        if (val[i] <= sum)
        {
            return dp[i][sum] = findSubsetSum(i - 1, sum - val[i]) + findSubsetSum(i - 1, sum);
        }
        else
        {
            return dp[i][sum] = findSubsetSum(i - 1, sum);
        }
    }

    int main()
    {
        int n;
        cin >> n;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> val[i];
            sum += val[i];
        }

        if (sum % 2 == 1)
        {
            cout << "NO" << endl;
        }
        else{
            for(int i = 0; i < n; i++)
                for(int j = 0; j <= sum; j++)
                        dp[i][j] = -1;


            if(findSubsetSum(n - 1, sum / 2))
            {
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }

        return 0;
    }
*/

/*
    || The unbounded knapsack problem is a variation of the knapsack optimization problem where an unlimited number of copies of each item can be selected to maximize total value without exceeding the capacity, \(W\), of a bag. Unlike 0/1 knapsack, this version allows repetition of items. It is typically solved using dynamic programming. 


*/

// ...