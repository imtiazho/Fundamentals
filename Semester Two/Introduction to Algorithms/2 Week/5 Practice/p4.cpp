/*
    || Problem Statement: You are given a positive integer n representing n cities numbered from 1 to n. You are also given a 2D array roads where roads[i] = [ai, bi, distancei] indicates that there is a bidirectional road between cities ai and bi with a distance equal to distancei. The cities graph is not necessarily connected. The score of a path between two cities is defined as the minimum distance of a road in this path. Return the minimum possible score of a path between cities 1 and n.
    Note: A path is a sequence of roads between two cities. It is allowed for a path to contain the same road multiple times, and you can visit cities 1 and n multiple times along the path. The test cases are generated such that there is at least one path between 1 and n.
*/

// class Solution {
// public:
//     bool vis[100005];
//     vector<pair<int, int>> adjList[100005];
//     int mini = INT_MAX;

//     void dfs(int src)
//     {
//         vis[src] = true;
        
//         for(auto child : adjList[src])
//         {
//             mini = min(mini, child.second);
//             if(!vis[child.first])
//             {
//                 dfs(child.first);
//             }
//         }
//     }

//     int minScore(int n, vector<vector<int>>& roads) {
//         for(auto road : roads)
//         {
//             adjList[road[0]].push_back({road[1], road[2]});
//             adjList[road[1]].push_back({road[0], road[2]});
//         }

//         memset(vis, false, sizeof(vis));
//         dfs(1);

//         return mini;
//     }
// };