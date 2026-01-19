/*
    Problem Statement: You are given an m x n binary matrix grid. An island is a group of 1's (representing land) connected 4-directionally (horizontal or vertical.) You may assume all four edges of the grid are surrounded by water. The area of an island is the number of cells with a value 1 in the island. Return the maximum area of an island in grid. If there is no island, return 0.
*/

// class Solution {
// public:
//     bool vis[55][55];
//     int counter = 0, mx = 0;
//     int n, m;
//     vector<pair<int, int>> mov = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

//     bool valid(int i, int j)
//     {
//         if(i < 0 || i >= n || j < 0 || j >= m) return false;
//         else return true;
//     }

//     void dfs(int si, int sj, vector<vector<int>>& grid)
//     {
//         vis[si][sj] = true;
//         counter++;


//         for(int i =0; i < 4; i++)
//         {
//             int ci, cj;
//             ci = si + mov[i].first;
//             cj = sj + mov[i].second;

//             if(valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == 1)
//             {
//                 dfs(ci, cj, grid);
//             }
//         }
//     }

//     int maxAreaOfIsland(vector<vector<int>>& grid) {
//         n = grid.size();
//         m = grid[0].size();
//         memset(vis, false, sizeof(vis));

//         for(int i = 0; i < n; i++)
//         {
//             for(int j = 0; j < m; j++)
//             {   
//                 if(!vis[i][j] && grid[i][j] == 1)
//                 {
//                     counter = 0;
//                     dfs(i, j, grid);

//                     if(mx < counter)
//                     {
//                         mx = counter;
//                     }
//                 }
//             }
//         }

//         return mx;
//     }
// };