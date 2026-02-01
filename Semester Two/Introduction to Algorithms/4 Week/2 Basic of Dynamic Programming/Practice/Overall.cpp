#include <bits/stdc++.h>

using namespace std;

int main()
{

    return 0;
}

/*
    || Normal Fact
    int fact(int n)
    {
        if (n == 1)
            return 1;

        return n * fact(n - 1);
    }
*/

/*
    || Normal way to find factorial. For the long input like 45 or something you will got TLE becuase it take huge time to find output. Its complixity is 2^N. Its a bad complexity.

    int fibo(long long n)
    {
        if(n == 0) return 0;
        if(n == 1) return 1;

        return fibo(n - 1) + fibo(n - 2);
    }
*/

/*
    || Fibonacci series optimizing by using Dynamic Programming and memoization. Its a top down approach. By this process we decrease number of operation significantly. Like its complexity is O(N).
    #include <bits/stdc++.h>

    using namespace std;

    long long int dp[1005];

    int fibo(int n)
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
        memset(dp, -1, sizeof(dp));
        long long int n;
        cin >> n;
        cout << fibo(10) << endl;

        return 0;
    }
*/

/*
|| Fibonacci bottom up apprach. Its a another aproach of dynamic programming. By this approach we can find fibonacci number of large value in O(n) complexity.

long long int n;
cin >> n;
long long int fibo[n + 5];
fibo[0] = 0;
fibo[1] = 1;

for (int i = 2; i <= n; i++)
{
    fibo[i] = fibo[i - 1] + fibo[i - 2];
}

cout << fibo[n] << endl;
*/

//...