/*
    || Problem Statement: You are given a network of n nodes, labeled from 1 to n. You are also given times, a list of travel times as directed edges times[i] = (ui, vi, wi), where ui is the source node, vi is the target node, and wi is the time it takes for a signal to travel from source to target. We will send a signal from a given node k. Return the minimum time it takes for all the n nodes to receive the signal. If it is impossible for all the n nodes to receive the signal, return -1.

    Breakdown and cofusion: In a network, the signal travels along multiple paths simultaneously. We use Dijkstra's to find the shortest path to every individual node.Once we have those shortest paths:Node 1 gets it at $T=2$.Node 2 gets it at $T=5$.Node 3 gets it at $T=8$.The signal has reached all nodes only when the very last node (the one with the longest shortest path) receives it.
*/

// class Solution {
// public:
//     int dis[6005];
//     vector<pair<int, int>> adjList[6005];

//     void bfs(int src)
//     {   
//         priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> qu;
//         qu.push({0, src});
//         dis[src] = 0;

//         while(!qu.empty())
//         {
//             pair<int, int> par = qu.top();
//             qu.pop();
//             int parDis = par.first;
//             int parNode = par.second;

//             if(parDis < dis[parNode]) continue;

//             for(auto child : adjList[parNode])
//             {
//                 int childNode = child.first;
//                 int childDis = child.second;

//                 if(parDis + childDis < dis[childNode])
//                 {
//                     dis[childNode] = parDis + childDis;
//                     qu.push({dis[childNode], childNode});
//                 }
//             }
//         }
        

//     }

//     int networkDelayTime(vector<vector<int>>& times, int n, int k) {
//         for(auto time : times)
//         {
//             adjList[time[0]].push_back({time[1], time[2]});
//         }

//         for(int i = 1; i <= n; i++)
//             dis[i] = INT_MAX;

//         bfs(k);

//         int mx = 0;
//         for(int i = 0; i <= n; i++)
//         {
//             if(dis[i] == INT_MAX) return -1;
            
//             if(dis[i] > mx) mx = dis[i];
//         }

//         return mx;
//     }
// };