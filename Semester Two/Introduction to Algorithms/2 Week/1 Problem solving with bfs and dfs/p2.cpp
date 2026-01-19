/*
    Problem Statement: There is a bi-directional graph with n vertices, where each vertex is labeled from 0 to n - 1 (inclusive). The edges in the graph are represented as a 2D integer array edges, where each edges[i] = [ui, vi] denotes a bi-directional edge between vertex ui and vertex vi. Every vertex pair is connected by at most one edge, and no vertex has an edge to itself. You want to determine if there is a valid path that exists from vertex source to vertex destination. Given edges and the integers n, source, and destination, return true if there is a valid path from source to destination, or false otherwise.
*/

// class Solution {
// public:
//     bool vis[200005];

//     void bfs(vector<int> edges[], int src) {
//         queue<int> qu;
//         qu.push(src);
//         vis[src] = true;

//         while (!qu.empty()) {
//             int par = qu.front();
//             qu.pop();

//             for(int child : edges[par])
//             {
//                 if (!vis[child]) {
//                     qu.push(child);
//                     vis[child] = true;
//                 }
//             }

//         }
//     }

//     bool validPath(int n, vector<vector<int>>& edges, int source,
//                    int destination) {
        
//         vector<int> adjList[200005];
//         for(int i = 0; i < edges.size(); i++)
//         {
//             int a = edges[i][0];
//             int b = edges[i][1];

//             adjList[a].push_back(b);
//             adjList[b].push_back(a);
//         }
//         memset(vis, false, sizeof(vis));

//         bfs(adjList, source);

//         if (vis[destination])

//             return true;
//         else
//             return false;
//     }
// };