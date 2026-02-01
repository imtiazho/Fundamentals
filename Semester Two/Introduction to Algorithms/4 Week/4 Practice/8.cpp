/*
    || https://leetcode.com/problems/shortest-bridge/description/
*/

// class Solution {
// public:
//     bool vis[105][105];
//     int level[105][105];
//     vector<pair<int, int>> mov = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
//     queue<pair<int, int>> qu;
//     int n;
    
//     bool valid(int i, int j) {
//         return (i >= 0 && i < n && j >= 0 && j < n);
//     }
    
//     void dfs(int si, int sj, vector<vector<int>>& grid)
//     {
//         vis[si][sj] = true;
//         qu.push({si, sj});
//         level[si][sj] = 0;


//         for(int i = 0; i < 4; i++)
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

//     int bfs(vector<vector<int>>& grid)
//     {
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
//                     if(grid[ci][cj] == 1) return level[parI][parJ];

//                     vis[ci][cj] = true;
//                     level[ci][cj] = level[parI][parJ] + 1;
//                     qu.push({ci, cj});
//                 }
//             }
//         }

//         return 0;
//     }

//     int shortestBridge(vector<vector<int>>& grid) {
//         n = grid.size();

//         memset(vis, false, sizeof(vis));
//         memset(level, -1, sizeof(level));

//         int found = false;
//         for(int i = 0; i < n; i++){
//             for(int j = 0; j < n; j++)
//             {
//                 if(grid[i][j] == 1 && !vis[i][j])
//                 {
//                     dfs(i, j, grid);
//                     found = true;
//                     break;
//                 }
//             }
//             if(found) break;
//         }

//         return bfs(grid);

//         return 0;
//     }
// };

/*
    || Something different in logically
    class Solution {
    public:
        bool vis[105][105];
        int level[105][105];
        vector<pair<int, int>> mov = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        queue<pair<int, int>> qu;
        int n;
        
        bool valid(int i, int j) {
            return (i >= 0 && i < n && j >= 0 && j < n);
        }
        
        void dfs(int si, int sj, vector<vector<int>>& grid)
        {
            vis[si][sj] = true;
            qu.push({si, sj});
            level[si][sj] = 0;


            for(int i = 0; i < 4; i++)
            {
                int ci, cj;
                ci = si + mov[i].first;
                cj = sj + mov[i].second;
                
                if(valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == 1)
                {
                    dfs(ci, cj, grid);
                }
            }
        }

        int bfs(vector<vector<int>>& grid)
        {
            while(!qu.empty())
            {
                pair<int, int> par = qu.front();
                int parI = par.first;
                int parJ = par.second;
                qu.pop();

                for(int i = 0; i < 4; i++)
                {
                    int ci, cj;
                    ci = parI + mov[i].first;
                    cj = parJ + mov[i].second;

                    if(valid(ci, cj) && !vis[ci][cj])
                    {

                        vis[ci][cj] = true;
                        level[ci][cj] = level[parI][parJ] + 1;
                        qu.push({ci, cj});

                        if(grid[ci][cj] == 1) return level[ci][cj]; // Something different from last submission
                    }
                }
            }

            return 0;
        }

        int shortestBridge(vector<vector<int>>& grid) {
            n = grid.size();

            memset(vis, false, sizeof(vis));
            memset(level, -1, sizeof(level));

            int found = false;
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++)
                {
                    if(grid[i][j] == 1 && !vis[i][j])
                    {
                        dfs(i, j, grid);
                        found = true;
                        break;
                    }
                }
                if(found) break;
            }

            return bfs(grid) - 1; // In this line -1 because we need to check 0's level i mean bridge level

            return 0;
        }
    };
*/