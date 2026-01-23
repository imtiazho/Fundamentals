/*
    || Given an m x n binary matrix mat, return the distance of the nearest 0 for each cell. The distance between two cells sharing a common edge is 1.
*/

// class Solution {
// public:
//     vector<pair<int, int>> mov = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
//     int n, m;

//     bool valid(int i, int j) {
//         if (i < 0 || i >= n || j < 0 || j >= m)
//             return false;
//         return true;
//     }

//     void bfs(vector<vector<int>>& grid) {
//         queue<pair<int, int>> qu;
//         bool vis[n][m];
//         memset(vis, false, sizeof(vis));

//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < m; j++) {
//                 if (grid[i][j] == 0) {
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

//                 if(valid(ci, cj) && (!vis[ci][cj] || grid[ci][cj] > grid[parI][parJ] + 1))
//                 {
//                     qu.push({ci, cj});
//                     grid[ci][cj] = grid[parI][parJ] + 1;
//                     vis[ci][cj] = true;
//                 }
//             }
//         }
//     }

//     vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
//         n = mat.size();
//         m = mat[0].size();
//         bfs(mat);

//         return mat;
//     }
// };