/*
    || Given a directed acyclic graph, with n vertices numbered from 0 to n-1, and an array edges where edges[i] = [fromi, toi] represents a directed edge from node fromi to node toi. Find the smallest set of vertices from which all nodes in the graph are reachable. It's guaranteed that a unique solution exists. Notice that you can return the vertices in any order.
*/

// class Solution {
// public:
//     bool hasParent[100005];
//     vector<int> ans;
//     vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
//         memset(hasParent, false, sizeof(hasParent));

//         for(auto child : edges)
//         {
//             hasParent[child[1]] = true;
//         }

//         for(int i = 0; i < n; i++)
//         {
//             if(!hasParent[i])
//             {
//                 ans.push_back(i);
//             }
//         }

//         return ans;
//     }
// };