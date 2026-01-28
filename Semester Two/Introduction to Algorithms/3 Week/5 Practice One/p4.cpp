/*
    || Given a directed acyclic graph (DAG) of n nodes labeled from 0 to n - 1, find all possible paths from node 0 to node n - 1 and return them in any order.
    The graph is given as follows: graph[i] is a list of all nodes you can visit from node i (i.e., there is a directed edge from node i to node graph[i][j]).
*/

// class Solution {
// public:
//     vector<vector<int>> ans;
//     vector<int> tempAns;
//     int n;
//     void dfs(int src, vector<vector<int>>& graph)
//     {   
//         tempAns.push_back(src);
//         if(src == n - 1) ans.push_back(tempAns);

//         for(auto child : graph[src])
//             dfs(child, graph);

//         tempAns.pop_back();

//     }
//     vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
//         n = graph.size();
//         dfs(0, graph);

//         return ans;
//     }
// };