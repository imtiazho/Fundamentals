/*
    || https://leetcode.com/problems/minimum-path-sum/description/
*/

// Bottom Up Approach
// class Solution {
// public:
//     int dp[205][205];
//     int n, m;

//     int find(int i, int j, vector<vector<int>>& grid)
//     {
//         if(i == n - 1 && j == m - 1) return grid[i][j];

//         if(i >= n || j >= m) return 1e9;

//         // Apply DP
//         if(dp[i][j] != -1) return dp[i][j];
//         dp[i][j] = grid[i][j] + min(find(i + 1, j, grid), find(i, j + 1, grid));
        
//         return dp[i][j];


//     }

//     int minPathSum(vector<vector<int>>& grid) {
//         n = grid.size();
//         m = grid[0].size();

//         memset(dp, -1, sizeof(dp));

//         return find(0, 0, grid);
//     }
// };

// Top Down Approach
// class Solution {
// public:
//     int dp[205][205];
//     int n, m;

//     int find(int i, int j, vector<vector<int>>& grid)
//     {
//         if(i == 0 && j == 0) return grid[i][j];

//         if(i < 0 || j < 0) return 1e9;

//         // Apply DP
//         if(dp[i][j] != -1) return dp[i][j];

//         int right = grid[i][j] + find(i, j - 1, grid);
//         int down = grid[i][j] + find(i - 1, j, grid);
        
//         dp[i][j] =  min(right, down);
        
//         return dp[i][j];


//     }

//     int minPathSum(vector<vector<int>>& grid) {
//         n = grid.size();
//         m = grid[0].size();

//         memset(dp, -1, sizeof(dp));

//         return find(n - 1, m - 1, grid);
//     }
// };