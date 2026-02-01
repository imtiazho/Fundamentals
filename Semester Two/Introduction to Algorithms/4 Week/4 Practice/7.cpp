/*
    || https://leetcode.com/problems/nearest-exit-from-entrance-in-maze/description/
*/

// class Solution {
// public:
//     bool visTwoD[105][105];
//     vector<pair<int, int>> mov = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
//     int n, m;
//     int dis[105][105];

//     bool valid(int i, int j) {
//         if (i < 0 || i >= n || j < 0 || j >= m) return false;
//         return true;
//     }

//     int bfsTwoD(int si, int sj, vector<vector<char>>& grid) {
//         queue<pair<int, int>> qu;
//         qu.push({si, sj});
//         visTwoD[si][sj] = true;
//         dis[si][sj] = 0;

//         while (!qu.empty()) {
//             pair<int, int> par = qu.front();
//             qu.pop();

//             int parI = par.first;
//             int parJ = par.second;

//             for (int i = 0; i < 4; i++) {
//                 int ci = parI + mov[i].first;
//                 int cj = parJ + mov[i].second;

//                 if ( valid(ci, cj) == true && !visTwoD[ci][cj] &&
//                     grid[ci][cj] == '.') {
//                     visTwoD[ci][cj] = true;
//                     dis[ci][cj] = dis[parI][parJ] + 1;

//                     if(ci == 0 || ci == n - 1 || cj == 0 || cj == m - 1)
//                     {
//                         return dis[ci][cj];
//                     }

//                     qu.push({ci, cj});
//                 }
//             }
//         }

//         return -1;
//     }

//     int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
//         n = maze.size();
//         m = maze[0].size();

//         memset(visTwoD, false, sizeof(visTwoD));
//         memset(dis, -1, sizeof(dis));

//         return bfsTwoD(entrance[0], entrance[1], maze);
//     }
// };