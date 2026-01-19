/*
    Problem Statement: Given a 2D grid consists of 0s (land) and 1s (water).  An island is a maximal 4-directionally connected group of 0s and a closed island is an island totally (all left, top, right, bottom) surrounded by 1s. Return the number of closed islands.
*/

// class Solution {
// public:
//     int n, m;
//     bool vis[105][105];
//     vector<pair<int, int>> mov = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
//     bool flag;

//     bool valid(int i, int j)
//     {
//         if(i < 0 || i >= n || j < 0 || j >= m) return false;
//         return true;
//     }

//     void dfs(int si, int sj, vector<vector<int>> grid)
//     {
//         vis[si][sj] = true;

//         for(int i = 0; i < 4; i++)
//         {
//             int ci, cj;
//             ci = si + mov[i].first;
//             cj = sj + mov[i].second;

//             if(!valid(ci, cj)) flag = false;

//             if(valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == 0)
//             {
//                 dfs(ci, cj, grid);
//             }
//         }
//     }

//     int closedIsland(vector<vector<int>>& grid) {
//         n = grid.size();
//         m = grid[0].size();
//         int counter = 0;

//         for(int i = 0; i < n; i++)
//         {
//             for(int j = 0; j < m; j++)
//             {
//                 if(grid[i][j] == 0 && !vis[i][j])
//                 {
//                     flag = true;
//                     dfs(i, j, grid);
//                     if(flag)
//                     {
//                         counter++;
//                     }
//                 }
//             }
//         }

//         return counter;
//     }
// };