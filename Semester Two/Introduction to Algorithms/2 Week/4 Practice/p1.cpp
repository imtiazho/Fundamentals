/*
    || Problem Statement: Given an undirected graph with V vertices and E edges, represented as a 2D vector edges[][], where each entry edges[i] = [u, v] denotes an edge between vertices u and v, determine whether the graph contains a cycle or not. Note: The graph can have multiple component.
*/

// class Solution {
//   public:
//     vector<int> adjList[100005];
//     bool vis[100005];
//     int parent[100005];
//     bool flag;
    
//     void dfs(int src)
//     {
//         vis[src] = true;
        
//         for(int child : adjList[src])
//         {
//             if(vis[child] && parent[src] != child) flag = true;
//             if(!vis[child])
//             {
//                 parent[child] = src;
//                 dfs(child);
//             }
//         }
//     }
    
//     bool isCycle(int V, vector<vector<int>>& edges) {
//         memset(vis, false, sizeof(vis));
//         memset(parent, -1, sizeof(parent));
        
//         for(int i = 0; i < edges.size(); i++)
//         {
//             int a = edges[i][0];
//             int b = edges[i][1];
            
//             adjList[a].push_back(b);
//             adjList[b].push_back(a);
//         }
        
//         flag = false;
//         for(int i = 0; i < V; i++)
//         {   
//             if(!vis[i])
//             {
//                 dfs(i);
//                 if(flag) return true;
//             }
//         }
        
//         return flag;
//     }
// };