/*
    Problem Statement: Given an m x n 2D binary grid grid which represents a map of '1's (land) and '0's (water), return the number of islands. An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.


*/

// class Solution
// {
// public:
//     bool vis[305][305];
//     vector<pair<int, int>> mov = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
//     int n, m, counter = 0;

//     bool valid(int i, int j)
//     {
//         if (i < 0 || i >= n || j < 0 || j >= m)
//         {
//             return false;
//         }

//         return true;
//     }

//     void dfs(int si, int sj, vector<vector<char>> &grid)
//     {
//         vis[si][sj] = true;

//         for (int i = 0; i < 4; i++)
//         {
//             int ci, cj;
//             ci = si + mov[i].first;
//             cj = sj + mov[i].second;

//             if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == '1')
//             {
//                 dfs(ci, cj, grid);
//             }
//         }
//     }

//     int numIslands(vector<vector<char>> &grid)
//     {
//         n = grid.size();
//         m = grid[0].size();

//         memset(vis, false, sizeof(vis));
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < m; j++)
//             {
//                 if (grid[i][j] == '1' && !vis[i][j])
//                 {
//                     dfs(i, j, grid);
//                     counter++;
//                 }
//             }
//         }

//         return counter;
//     }
// };