#include <bits/stdc++.h>

using namespace std;

char grid[105][105];
vector<int> adjList[1005];
bool vis[1005];
bool visTwoD[105][105];
vector<pair<int, int>> mov = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

int main()
{
    /*
        || DFS Traversal Implementation
        .
        vector<int> adjList[1005];
        bool vis[1005];

        void dfs(int src)
        {
            // Base Case
            // Auto off hoye jabee cause call korar agee amra check kore nicchi

            // Print kore dea
            cout << src << " ";
            vis[src] = true;

            // kaj kora
            for (int child : adjList[src])
            {
                if (vis[child] == false)
                {
                    dfs(child);
                }
            }
        }
        int n, e;
        cin >> n >> e;
        while (e--)
        {
            int a, b;
            cin >> a >> b;
            adjList[a].push_back(b);
            adjList[b].push_back(a);
        }
        memset(vis, false, sizeof(vis));

        dfs(0);
    */

    /*
        || DFS on 2D grid Implementation
        char grid[105][105];
        vector<int> adjList[1005];
        bool vis[1005];
        bool visTwoD[105][105];
        vector<pair<int, int>> mov = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

        void dfsFor2D(int si, int sj)
        {
            // Base Case
            // Auto off hoye jabee cause call korar agee amra check kore nicchi
        
            // Print kore dea
            cout << si << " ";
            visTwoD[si][sj] = true;
        
            // kaj kora
            for (int i = 0; i < 4; i++)
            {
                int ci, cj;
                ci = si + mov[i].first;
                cj = sj + mov[i].second;
                cout << ci << " " << cj << endl;
                // if (vis[child] == false)
                // {
                //     dfs(child);
                // }
            }
        }
        .
        .
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }
    
        int si, sj;
        cin >> si >> sj;
        dfsFor2D(si, sj);
    */
    

    return 0;
}
