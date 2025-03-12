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
        dp[n] = fibo(n - 1) + fibo(n - 2);
    }

    return dp[n];
}

int main()
{
    /*
        || Fibonacci with DP + Optimising Fibonacci :: top down
        .
        long long int dp[1005];

        int fibo(long long int n)
        {
            if (n < 2)
                return n;

            if (dp[n] != -1)
            {
                dp[n] = fibo(n - 1) + fibo(n - 2);
            }

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
    
        for (int i = 0; i <= n; i++)
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