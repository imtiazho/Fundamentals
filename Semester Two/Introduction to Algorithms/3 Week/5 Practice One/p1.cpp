/*
    || Problem Statement: Given an weighted graph with V vertices numbered from 0 to V-1 and E edges, represented by a 2d array edges[][], where edges[i] = [u, v, w] represents a direct edge from node u to v having w edge weight. You are also given a source vertex src.
    Your task is to compute the shortest distances from the source to all other vertices. If a vertex is unreachable from the source, its distance should be marked as 108. Additionally, if the graph contains a negative weight cycle, return [-1] to indicate that shortest paths cannot be reliably computed.
*/ 

// class Solution {
//   public:
//     vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {
//         vector<int> dis(V, 100000000);
        
//         dis[src] = 0;
//         for(int i = 0; i < V - 1; i++)
//         {
//             for(auto edge : edges)
//             {
//                 int a, b, c;
//                 a = edge[0];
//                 b = edge[1];
//                 c = edge[2];
                
//                 if(dis[a] + c < dis[b] && dis[a] != 100000000)
//                 {
//                     dis[b] = dis[a] + c;
//                 }
//             }
//         }
        
//         // For cycle detection
//         for(auto edge : edges)
//         {
//             int a, b, c;
//             a = edge[0];
//             b = edge[1];
//             c = edge[2];
            
//             if(dis[a] + c < dis[b] && dis[a] != 100000000)
//             {
//                 return {-1};
//             }
//         }
        
        
//         return dis;
        
//     }
// };
