/*
    || https://leetcode.com/problems/house-robber-ii/
*/

// class Solution {
// public:
//     int dp[405];
//     int n;

//     int find(int i, vector<int>& nums)
//     {
//         if(i < 0) return 0;

//         if(dp[i] != -1) return dp[i];

//         // two options
//         int op1 = find(i - 1, nums);
//         int op2 = find(i - 2, nums) + nums[i];
        
//         dp[i] = max(op1, op2);
//         return dp[i];
//     }


//     int rob(vector<int>& nums) {
//         n = nums.size();
//         if(n == 1) return nums[0];
        
//         // Call for without last value
//         memset(dp, -1, sizeof(dp));
//         int ans1 = find(n - 2, nums);

//         memset(dp, -1, sizeof(dp));
//         nums.erase(nums.begin()); // rease first value of nums
//         int ans2 = find(nums.size() - 1, nums);

//         return max(ans1, ans2);
//     }
// };