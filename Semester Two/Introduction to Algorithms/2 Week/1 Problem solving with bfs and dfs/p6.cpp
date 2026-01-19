/*
    Problem Statement: You are given two m x n binary matrices grid1 and grid2 containing only 0's (representing water) and 1's (representing land). An island is a group of 1's connected 4-directionally (horizontal or vertical). Any cells outside of the grid are considered water cells. An island in grid2 is considered a sub-island if there is an island in grid1 that contains all the cells that make up this island in grid2. Return the number of islands in grid2 that are considered sub-islands.
*/

// class Solution {
// public:
//     bool vis[505][505];
//     int n, m, counter = 0;
//     bool flag;
//     vector<pair<int, int>> mov = {{-1 , 0}, {1, 0}, {0, -1}, {0, 1}};
    
//     bool valid(int i, int j)
//     {
//         if(i < 0 || j < 0 || i >= n || j >= m) return false;
//         else return true;
//     }

//     void dfs(int si, int sj,vector<vector<int>>& grid1, vector<vector<int>>& grid2)
//     {
//         vis[si][sj] = true;
//         if(grid1[si][sj] != 1)
//         {
//             flag = false;
//         }

//         for(int i = 0; i < 4; i++)
//         {
//             int ci, cj;
//             ci = si + mov[i].first;
//             cj = sj + mov[i].second;

//             if(valid(ci, cj) && !vis[ci][cj] && grid2[ci][cj] == 1)
//             {
//                 dfs(ci, cj, grid1, grid2);
//             }
//         }
//     }

//     int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
//         n = grid2.size();
//         m = grid2[0].size();

//         for(int i = 0; i < n; i++)
//         {
//             for(int j = 0; j < m; j++)
//             {   flag = true;
//                 if(grid2[i][j] == 1 && !vis[i][j])
//                 {
//                     dfs(i, j, grid1, grid2);

//                     if(flag) counter++;
//                 }
//             }
//         }

//         return counter;
//     }
// };