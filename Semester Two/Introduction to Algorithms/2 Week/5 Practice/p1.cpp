/*
    || Problem Statement: Given an undirected, weighted graph with V vertices numbered from 0 to V-1 and E edges, represented by 2d array edges[][], where edges[i]=[u, v, w] represents the edge between the nodes u and v having w edge weight. You have to find the shortest distance of all the vertices from the source vertex src, and return an array of integers where the ith element denotes the shortest distance between ith node and source vertex src. Note: The Graph is connected and doesn't contain any negative weight edge. It is guaranteed that all the shortest distance will fit in a 32-bit integer.
*/

// class Solution {
//   public:
//     vector<int> dis;
    
//     void fun(int src, vector<pair<int, int>> adjList[]){
//         priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> qu;
//         qu.push({0, src});
//         dis[src]= 0;
        
//         while(!qu.empty())
//         {
//             pair<int, int> par = qu.top();
//             qu.pop();
            
//             int parDis = par.first;
//             int parNode = par.second;
            
//             if(parDis > dis[parNode]) continue;
            
//             for (auto child : adjList[parNode])
//             {
//                 int childNode = child.first;
//                 int childDis = child.second;
                
//                 if(childDis + parDis < dis[childNode])
//                 {
//                     dis[childNode] = childDis + parDis;
//                     qu.push({dis[childNode], childNode});
//                 }
//             }
//         }
//     }
    
//     vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
//         int e = edges.size();
//         vector<pair<int, int>> adjList[V];
        
//         for(int i = 0; i < e; i++)
//         {
//             int a, b, c;
//             a = edges[i][0];
//             b = edges[i][1];
//             c = edges[i][2];
            
//             adjList[a].push_back({b, c});
//             adjList[b].push_back({a, c});
//         }
        
//         dis.assign(V, INT_MAX);
        
//         fun(src, adjList);
        
//         return dis;
//     }
// };