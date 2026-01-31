#include <bits/stdc++.h>
// https://quanticdev.com/tools/recursion-visualization/
using namespace std;

long long int dp[1005];

int fibo(long long int n)
{
    if (n < 2)
        return n;

    if (dp[n] != -1)
    {
        return dp[n];
    }

    dp[n] = fibo(n - 1) + fibo(n - 2);
    return dp[n];
}

int main()
{
    /*
        || Normal Fact
        int fact(int n)
        {
            if(n == 1) return 1;

            int mul = fact(n - 1);

            return n * mul;
        }

    */

    /*
        || Fibonacci
        int fibo(long long int n)
        {
            // if (n == 0)
            //     return 0;
            // else if(n == 1)
            //     return 1;
            if (n == 0 || n == 1)
                return n;

            if (n < 2)
                return n;

            return fibo(n - 1) + fibo(n - 2);
        }
    */
    /*
        || Fibonacci with DP + Optimising Fibonacci
        .
        long long int dp[1005];

        int fibo(long long int n)
        {
            if (n < 2)
                return n;

            if (dp[n] != -1)
            {
                return dp[n];
            }

            dp[n] = fibo(n - 1) + fibo(n - 2);
            return dp[n];
        }
        .
        memset(dp, -1, sizeof(dp));
        long long int n;
        cin >> n;
        cout << fibo(n);
    */

    /*
        || Fibonacci with DP + Optimising Fibonacci :: top down it use recursion
        .
        long long int dp[1005];

        int fibo(long long int n)
        {
            if (n < 2)
                return n;

            if (dp[n] != -1)
            {
                return dp[n];
            }

            dp[n] = fibo(n - 1) + fibo(n - 2);
            return dp[n];
        }
        .
        memset(dp, -1, sizeof(dp));
        long long int n;
        cin >> n;
        cout << fibo(n);
    */

    /*
        || Fibonacci bottom up
        int n;
        cin >> n;
        int fibo[n + 1];
        fibo[0] = 0;
        fibo[1] = 1;

        for (int i = 2; i <= n; i++)
        {
            fibo[i] = fibo[n - 1] + fibo[n - 2];
        }

        cout << fibo[n] << endl;
    */

    /*
        || LeetCode Climbing Stairs
    */

    return 0;
}