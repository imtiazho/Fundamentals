/*
    || Problem Statement: You are given an m x n binary matrix grid, where 0 represents a sea cell and 1 represents a land cell. A move consists of walking from one land cell to another adjacent (4-directionally) land cell or walking off the boundary of the grid. Return the number of land cells in grid for which we cannot walk off the boundary of the grid in any number of moves.
*/

// class Solution {
// public:
//     bool vis[505][505];
//     vector<pair<int, int>> mov = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
//     int n, m;

//     bool valid(int i, int j) {
//         if (i < 0 || i >= n || j < 0 || j >= m)
//             return false;
//         return true;
//     }

//     void dfs(int si, int sj, vector<vector<int>>& grid) {
//         vis[si][sj] = true;

//         for (int i = 0; i < 4; i++) {
//             int ci, cj;
//             ci = si + mov[i].first;
//             cj = sj + mov[i].second;

//             if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == 1) {
//                 dfs(ci, cj, grid);
//             }
//         }
//     }

//     int numEnclaves(vector<vector<int>>& grid) {
//         n = grid.size();
//         m = grid[0].size();

//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < m; j++) {
//                 if (grid[i][j] == 1 && !vis[i][j] &&
//                     (i == 0 || i == n - 1 || j == 0 || j == m - 1)) {
//                     dfs(i, j, grid);
//                 }
//             }
//         }
        
//         int counter = 0;
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < m; j++) {
//                 if (grid[i][j] == 1 && !vis[i][j]) {
//                     counter++;
//                 }
//             }
//         }

//         return counter;
//     }
// };