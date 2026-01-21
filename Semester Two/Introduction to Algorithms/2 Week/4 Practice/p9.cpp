/*
    || Problem Statement: Given an n x n binary matrix grid, return the length of the shortest clear path in the matrix. If there is no clear path, return -1. A clear path in a binary matrix is a path from the top-left cell (i.e., (0, 0)) to the bottom-right cell (i.e., (n - 1, n - 1)) such that: All the visited cells of the path are 0. All the adjacent cells of the path are 8-directionally connected (i.e., they are different and they share an edge or a corner). The length of a clear path is the number of visited cells of this path.
*/

// class Solution {
// public:
//     int level[105][105];
//     vector<pair<int, int>> mov = {{-1,0},{0,-1},{1,0},{0,1},{-1,1},{1,-1},{-1,-1},{1,1}};
//     int n;

//     bool valid(int i, int j)
//     {
//         if(i < 0 || i >= n || j < 0 || j >= n) return false;
//         return true;
//     }

//     void bfs(int si, int sj, vector<vector<int>>& grid)
//     {
//         queue<pair<int, int>> qu;
//         qu.push({si, sj});
//         level[si][sj] = 1;

//         while(!qu.empty())
//         {
//             pair<int, int> par = qu.front();
//             qu.pop();
//             int pi = par.first;
//             int pj = par.second;


//             for(int i = 0; i < 8; i++)
//             {
//                 int ci, cj;
//                 ci = pi + mov[i].first;
//                 cj = pj + mov[i].second;

//                 if(valid(ci, cj) && level[ci][cj] == -1 && grid[ci][cj] == 0)
//                 {
//                     qu.push({ci, cj});
//                     level[ci][cj] = level[pi][pj] + 1;
//                 }
//             }
//         }

//     }

//     int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
//         n = grid.size();      
//         memset(level, -1, sizeof(level));

//         if(grid[0][0] == 0) bfs(0, 0, grid);

//         return level[n - 1][n - 1];
            
//     }
// };