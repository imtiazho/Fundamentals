/*
    || There are a total of numCourses courses you have to take, labeled from 0 to numCourses - 1. You are given an array prerequisites where prerequisites[i] = [ai, bi] indicates that you must take course bi first if you want to take course ai. For example, the pair [0, 1], indicates that to take course 0 you have to first take course 1. Return true if you can finish all courses. Otherwise, return false.
*/

// class Solution {
// public:
//     vector<int> adjList[5005];
//     bool vis[5005];
//     bool flag;
//     bool pathVis[5005];

//     void dfs(int src)
//     {
//         vis[src] = true;
//         pathVis[src] = true;

//         for(int child : adjList[src])
//         {
//             if(vis[child] && pathVis[child])
//                 flag = true;
            
//             if(!vis[child])
//             {
//                 dfs(child);
//             }
//         }

//         pathVis[src] = false;
//     }

//     bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
//         for(auto child : prerequisites)
//         {
//             int a, b;
//             a = child[0];
//             b = child[1];

//             adjList[a].push_back(b);
//         }
        
//         memset(vis, false, sizeof(vis));
//         memset(pathVis, false, sizeof(pathVis));
//         flag = false;

//         for(int i = 0; i < numCourses; i++)
//         {   
//             if(!vis[i])
//             {
//                 dfs(i);
//                 if(flag) return false;
//             }
//         }

//         return true;
//     }
// };