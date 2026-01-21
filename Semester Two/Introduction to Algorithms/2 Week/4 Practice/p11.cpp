/*
    || Problem Statement: There are n cities. Some of them are connected, while some are not. If city a is connected directly with city b, and city b is connected directly with city c, then city a is connected indirectly with city c. A province is a group of directly or indirectly connected cities and no other cities outside of the group. You are given an n x n matrix isConnected where isConnected[i][j] = 1 if the ith city and the jth city are directly connected, and isConnected[i][j] = 0 otherwise. Return the total number of provinces. 
*/

// class Solution {
// public:
//     vector<int> adjList[205];
//     bool vis[205];
//     int counter = 0;
    
//     void dfs(int src) {
//         vis[src] = true;

//         for (int child : adjList[src]) {
//             if (!vis[child]) {
//                 dfs(child);
//             }
//         }
//     }

//     int findCircleNum(vector<vector<int>>& isConnected) {
//         int n = isConnected.size();

//         for(int i = 0; i < n; i++)
//         {
//             for(int j = 0; j < n; j++)
//             {
//                 if(isConnected[i][j] == 1)
//                 {
//                     adjList[i].push_back(j);
//                     adjList[j].push_back(i);
//                 }
//             }
//         }

//         memset(vis, false, sizeof(vis));
//         counter = 0;

//         for (int i = 0; i < n; i++) {
//             if (!vis[i]) {
//                 dfs(i);
//                 counter++;
//             }
//         }

//         return counter;
//     }
// };