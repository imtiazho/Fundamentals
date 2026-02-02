/*
    || https://leetcode.com/problems/min-cost-climbing-stairs/description/
*/

// Top Down Approach
// class Solution {
// public:
//     int dp[1005];
//     int n;

//     int findCost(int i, vector<int>& cost)
//     {
//         if(i == 0 || i == 1) return 0;

//         if(dp[i] != -1) return dp[i];

//         int op1 = findCost(i - 1, cost) + cost[i - 1];
//         int op2 = findCost(i - 2, cost) + cost[i - 2];

//         dp[i] = min(op1, op2);

//         return dp[i];
//     }

//     int minCostClimbingStairs(vector<int>& cost) {
//         n = cost.size();
//         memset(dp, -1, sizeof(dp));

//         return findCost(n, cost);
//     }
// };

// Bottom Up Approach
// class Solution {
// public:
//     int dp[1005];
//     int n;

//     int findCost(int i, vector<int>& cost)
//     {
//         if(i >= n) return 0;

//         if(dp[i] != -1) return dp[i];

//         int op1 = findCost(i + 1, cost) + cost[i];
//         int op2 = findCost(i + 2, cost) + cost[i];

//         dp[i] = min(op1, op2);

//         return dp[i];
//     }

//     int minCostClimbingStairs(vector<int>& cost) {
//         n = cost.size();
//         memset(dp, -1, sizeof(dp));

//         int op1 = findCost(0, cost);
//         int op2 = findCost(1, cost);

//         return min(op1, op2);
//     }
// };
