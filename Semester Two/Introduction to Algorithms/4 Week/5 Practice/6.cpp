/*
    || https://leetcode.com/problems/house-robber-ii/
*/

// It solve right to left
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

/*
    || Another soln of this problem. It solve left to right
    class Solution {
    public:
        int dp[405];
        int n;

        int find(int i, vector<int>& nums)
        {
            if(i >= n) return 0;

            if(dp[i] != -1) return dp[i];

            // two options
            int op1 = find(i + 1, nums);
            int op2 = find(i + 2, nums) + nums[i];
            
            dp[i] = max(op1, op2);
            return dp[i];
        }


        int rob(vector<int>& nums) {
            if(nums.size() == 1) return nums[0];
            
            // O to second last
            vector<int> case1 = nums;
            case1.pop_back();
            n = case1.size();
            memset(dp, -1, sizeof(dp));
            int opt1 = find(0, case1);
            
            // 1 to Last
            vector<int> case2 = nums;
            case2.erase(case2.begin());
            n = case2.size();
            memset(dp, -1, sizeof(dp));
            int opt2 = find(0, case2);

            return max(opt1, opt2);
        }
    };
*/