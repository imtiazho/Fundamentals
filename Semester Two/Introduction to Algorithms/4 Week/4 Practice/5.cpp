/*
    || https://leetcode.com/problems/fibonacci-number/description/
*/

// class Solution {
// public:
//     long long int dp[35];

//     int fibo(int n)
//     {
//         if(n <= 1) return n;
//         if(n == 2) return 1;

//         if(dp[n] != -1) return dp[n];
//         return dp[n] = fibo(n - 1) + fibo(n - 2);
//     }

//     int fib(int n) {
//         memset(dp, -1, sizeof(dp));

//         return fibo(n);
//     }
// };