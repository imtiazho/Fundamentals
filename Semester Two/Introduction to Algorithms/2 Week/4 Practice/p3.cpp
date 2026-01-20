/*
    || Problem Statement: There is a directed graph of n nodes with each node labeled from 0 to n - 1. The graph is represented by a 0-indexed 2D integer array graph where graph[i] is an integer array of nodes adjacent to node i, meaning there is an edge from node i to each node in graph[i]. A node is a terminal node if there are no outgoing edges. A node is a safe node if every possible path starting from that node leads to a terminal node (or another safe node). Return an array containing all the safe nodes of the graph. The answer should be sorted in ascending order.
*/

// class Solution {
// public:
//     bool vis[10005];
//     bool pathVis[10005];
//     vector<int> safe;

//     bool dfs(int src, vector<vector<int>>& graph)
//     {
//         vis[src] = true;
//         pathVis[src] = true;

//         for(auto child : graph[src])
//         {
//             if(vis[child] && pathVis[child]) return true;

//             if(!vis[child])
//             {
//                 if(dfs(child, graph)) return true;
//             }
//         }

//         safe.push_back(src);
//         pathVis[src] = false;
//         return false;
//     }

//     vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
//         int n = graph.size();
//         for(int i = 0; i < n; i++)
//         {
//             if(!vis[i])
//             {
//                 dfs(i, graph);
//             }
//         }

//         sort(safe.begin(), safe.end());

//         return safe;
//     }
// };