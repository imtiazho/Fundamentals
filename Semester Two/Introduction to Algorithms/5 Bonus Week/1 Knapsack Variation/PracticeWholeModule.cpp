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

// ...