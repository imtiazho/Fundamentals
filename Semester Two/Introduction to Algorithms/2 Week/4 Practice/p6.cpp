/*
    || Problem Statement: You are given an m x n matrix board containing letters 'X' and 'O', capture regions that are surrounded: Connect: A cell is connected to adjacent cells horizontally or vertically. Region: To form a region connect every 'O' cell. Surround: The region is surrounded with 'X' cells if you can connect the region with 'X' cells and none of the region cells are on the edge of the board. To capture a surrounded region, replace all 'O's with 'X's in-place within the original board. You do not need to return anything.
*/

// class Solution {
// public:
//     vector<pair<int, int>> mov = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
//     int vis[205][205];
//     int n, m;

//     bool valid(int i, int j) {
//         if (i < 0 || i >= n || j < 0 || j >= m)
//             return false;
//         return true;
//     }

//     void dfs(int si, int sj, vector<vector<char>>& grid) {
//         vis[si][sj] = true;

//         for (int i = 0; i < 4; i++) {
//             int ci, cj;
//             ci = si + mov[i].first;
//             cj = sj + mov[i].second;

//             if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == 'O')
//                 dfs(ci, cj, grid);
//         }
//     }

//     void solve(vector<vector<char>>& board) {
//         n = board.size();
//         m = board[0].size();

//         memset(vis, false, sizeof(vis));

//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < m; j++) {
//                 if (!vis[i][j] && board[i][j] == 'O' &&
//                     (i == 0 || j == 0 || i == n - 1 || j == m - 1))
//                     dfs(i, j, board);
//             }
//         }

//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < m; j++) {
//                 if (board[i][j] == 'O' && !vis[i][j]){
//                     board[i][j] = 'X';
//                 }
//             }
//         }
//     }
// };