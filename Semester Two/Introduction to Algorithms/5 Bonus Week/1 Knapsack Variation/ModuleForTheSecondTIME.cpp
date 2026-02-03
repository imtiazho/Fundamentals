#include <bits/stdc++.h>

using namespace std;

int val[1005];
int dp[1005][1005];

bool subSetSum(int i, int sum)
{
    if (i < 0)
    {
        if (sum == 0)
            return true;
        else
            return false;
    }

    if (dp[i][sum] != -1)
        return dp[i][sum];

    if (val[i] <= sum)
    {
        bool op1 = subSetSum(i - 1, sum - val[i]);
        bool op2 = subSetSum(i - 1, sum);

        return dp[i][sum] = op1 || op2;
    }
    else
    {
        return dp[i][sum] = subSetSum(i - 1, sum);
    }
}

int main()
{
    int n;
    int sum = 0;
    cin >> n;
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
        for (int i = 0; i <= n; i++)
            for (int j = 0; j <= sum; j++)
                dp[i][j] = -1;

        if (subSetSum(n - 1, sum / 2))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "FALSE" << endl;
        }
    }

    return 0;
}

/*
    || Normal Subset Sum
    #include <bits/stdc++.h>

    using namespace std;

    int val[1005];

    bool subSetSum(int i, int sum)
    {
        if (i < 0)
        {
            if (sum == 0)
                return true;
            else
                return false;
        }

        if (val[i] <= sum)
        {
            bool op1 = subSetSum(i - 1, sum - val[i]);
            bool op2 = subSetSum(i - 1, sum);

            return op1 || op2;
        }
        else
        {
            return subSetSum(i - 1, sum);
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
        if (subSetSum(n - 1, sum))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "FALSE" << endl;
        }

        return 0;
    }
*/

/*
    || Subset sum using DP
    #include <bits/stdc++.h>

    using namespace std;

    int val[1005];
    int dp[1005][1005];

    bool subSetSum(int i, int sum)
    {
        if (i < 0)
        {
            if (sum == 0)
                return true;
            else
                return false;
        }

        if (dp[i][sum] != -1)
            return dp[i][sum];

        if (val[i] <= sum)
        {
            bool op1 = subSetSum(i - 1, sum - val[i]);
            bool op2 = subSetSum(i - 1, sum);

            return dp[i][sum] = op1 || op2;
        }
        else
        {
            return dp[i][sum] = subSetSum(i - 1, sum);
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

        for (int i = 0; i <= n; i++)
            for (int j = 0; j <= sum; j++)
                dp[i][j] = -1;

        if (subSetSum(n - 1, sum))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "FALSE" << endl;
        }

        return 0;
    }
*/

/*
    || Subset sum count : How many way can create subset sum
    #include <bits/stdc++.h>

    using namespace std;

    int val[1005];
    int dp[1005][1005];

    int subSetSum(int i, int sum)
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
            int op1 = subSetSum(i - 1, sum - val[i]);
            int op2 = subSetSum(i - 1, sum);

            return dp[i][sum] = op1 + op2;
        }
        else
        {
            return dp[i][sum] = subSetSum(i - 1, sum);
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

        for (int i = 0; i <= n; i++)
            for (int j = 0; j <= sum; j++)
                dp[i][j] = -1;

        cout << subSetSum(n - 1, sum) << endl;

        return 0;
    }
*/

/*
    || Equal sum : are they eqal or not
    #include <bits/stdc++.h>

    using namespace std;

    int val[1005];
    int dp[1005][1005];

    bool subSetSum(int i, int sum)
    {
        if (i < 0)
        {
            if (sum == 0)
                return true;
            else
                return false;
        }

        if (dp[i][sum] != -1)
            return dp[i][sum];

        if (val[i] <= sum)
        {
            bool op1 = subSetSum(i - 1, sum - val[i]);
            bool op2 = subSetSum(i - 1, sum);

            return dp[i][sum] = op1 || op2;
        }
        else
        {
            return dp[i][sum] = subSetSum(i - 1, sum);
        }
    }

    int main()
    {
        int n;
        int sum = 0;
        cin >> n;
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
            for (int i = 0; i <= n; i++)
                for (int j = 0; j <= sum; j++)
                    dp[i][j] = -1;

            if (subSetSum(n - 1, sum / 2))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "FALSE" << endl;
            }
        }

        return 0;
    }
*/

// ...