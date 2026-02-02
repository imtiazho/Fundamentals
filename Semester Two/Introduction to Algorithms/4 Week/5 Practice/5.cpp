/*
    || https://leetcode.com/problems/house-robber/description/
*/

// class Solution {
// public:
//     int dp[405];
//     int n;

//     int find(int i, vector<int>& nums)
//     {
//         if(i >= n) return 0;

//         if(dp[i] != -1) return dp[i];

//         // two options
//         int op1 = find(i + 1, nums);
//         int op2 = find(i + 2, nums) + nums[i];
        
//         dp[i] = max(op1, op2);
//         return dp[i];
//     }


//     int rob(vector<int>& nums) {
//         n = nums.size();

//         memset(dp, -1, sizeof(dp));
//         return find(0, nums);      
//     }
// };