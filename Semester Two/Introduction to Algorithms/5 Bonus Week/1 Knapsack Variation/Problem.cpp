/*
    || https://leetcode.com/problems/coin-change-ii/description/
*/

// class Solution {
// public:
//     int dp[305][5005];

//     int subSetSum(int i, int sum, vector<int>& val)
//     {
//         if (i < 0)
//         {
//             if (sum == 0)
//                 return 1;
//             else
//                 return 0;
//         }

//         if (dp[i][sum] != -1)
//             return dp[i][sum];

//         if (val[i] <= sum)
//         {
//             int op1 = subSetSum(i, sum - val[i], val);
//             int op2 = subSetSum(i - 1, sum, val);

//             return dp[i][sum] = op1 + op2;
//         }
//         else
//         {
//             return dp[i][sum] = subSetSum(i - 1, sum, val);
//         }
//     }
//     int change(int amount, vector<int>& coins) {
//         int n = coins.size();
        
//         for (int i = 0; i <= n; i++)
//             for (int j = 0; j <= amount; j++)
//                 dp[i][j] = -1;

//         return subSetSum(n - 1, amount, coins);
//     }
// };