/*
    || Problem Statement: You are given an integer matrix isWater of size m x n that represents a map of land and water cells.
    If isWater[i][j] == 0, cell (i, j) is a land cell.
    If isWater[i][j] == 1, cell (i, j) is a water cell.
    You must assign each cell a height in a way that follows these rules:

    The height of each cell must be non-negative.
    If the cell is a water cell, its height must be 0.
    Any two adjacent cells must have an absolute height difference of at most 1. A cell is adjacent to another cell if the former is directly north, east, south, or west of the latter (i.e., their sides are touching).
    Find an assignment of heights such that the maximum height in the matrix is maximized.

    Return an integer matrix height of size m x n where height[i][j] is cell (i, j)'s height. If there are multiple solutions, return any of them.

    Break Down: We want to assign heights so water = 0, neighbors differ by ≤1, and max height is as large as possible. This can be done with multi-source BFS: start from all water cells (0) and expand outward, layer by layer.

    Approach: 
    Put all water cells in a queue with height 0.
    Run BFS: each unvisited neighbor gets current + 1.
    Continue until all cells are filled.
    Return the height grid.
*/

// class Solution {
// public:
//     vector<pair<int, int>> mov = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
//     bool vis[1005][1005];
//     int n, m;

//     bool valid(int i, int j)
//     {
//         if(i < 0 || i >= n || j < 0 || j >= m) return false;
//         return true;
//     }

//     void bfs(vector<vector<int>>& grid) {
//         queue<pair<int, int>> qu;
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < m; j++) {
//                 if (grid[i][j] == 1) {
//                     grid[i][j] = 0;
//                     qu.push({i, j});
//                     vis[i][j] = true;
//                 }
//             }
//         }
        
//         while(!qu.empty())
//         {
//             pair<int, int> par = qu.front();
//             int parI = par.first;
//             int parJ = par.second;
//             qu.pop();

//             for(int i = 0; i < 4; i++)
//             {
//                 int ci, cj;
//                 ci = parI + mov[i].first;
//                 cj = parJ + mov[i].second;

//                 if(valid(ci, cj) && !vis[ci][cj])
//                 {
//                     grid[ci][cj] = grid[parI][parJ] + 1;
//                     qu.push({ci, cj});
//                     vis[ci][cj] = true;
//                 }
//             }
//         }

//     }

//     vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
//         n = isWater.size();
//         m = isWater[0].size();

//         memset(vis, false, sizeof(vis));
//         bfs(isWater);

//         return isWater;
//     }
// };