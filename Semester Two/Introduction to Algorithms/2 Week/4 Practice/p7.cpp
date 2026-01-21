/*
    || Problem Statement: Given an m x n matrix board where each cell is a battleship 'X' or empty '.', return the number of the battleships on board. Battleships can only be placed horizontally or vertically on board. In other words, they can only be made of the shape 1 x k (1 row, k columns) or k x 1 (k rows, 1 column), where k can be of any size. At least one horizontal or vertical cell separates between two battleships (i.e., there are no adjacent battleships).
*/

// class Solution {
// public:
//     vector<pair<int, int>> mov = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
//     bool vis[205][205];
//     int n, m, counter;

//     bool valid(int i, int j) {
//         if (i < 0 || i >= n || j < 0 || j >= m)
//             return false;
//         else
//             return true;
//     }

//     void dfs(int si, int sj, vector<vector<char>>& grid) {
//         vis[si][sj] = true; 

//         for(int i = 0; i < 4; i++)
//         {
//             int ci, cj;
//             ci = si + mov[i].first;
//             cj = sj + mov[i].second;

//             if(valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == 'X')
//             {
//                 dfs(ci, cj, grid);
//             }
//         }
//     }

//     int countBattleships(vector<vector<char>>& board) {
//         n = board.size();
//         m = board[0].size();
//         counter = 0;
//         memset(vis, false, sizeof(vis));

//         for(int i = 0; i < n; i++)
//         {
//             for(int j = 0; j < m; j++)
//             {   
//                 if(board[i][j] == 'X' && !vis[i][j])
//                 {
//                     dfs(i, j, board);
//                     counter++;
//                 }
//             }
//         }

//         return counter;
//     }
// };