#include <bits/stdc++.h>

using namespace std;

bool vis[105];
bool pathVis[105];
vector<int> adjList[105];
bool cycle;

void dfs(int src)
{
    vis[src] = true;
    pathVis[src] = true;

    for (int child : adjList[src])
    {

        if (vis[child] && pathVis[child])
        {
            cycle = true;
        }

        if (!vis[child])
        {
            dfs(child);
        }
    }

    pathVis[src] = false;
}

int main()
{
    /*
        || Detect cycle in undirected graph using BFS
        .
        bool vis[105];
        vector<int> adjList[105];
        int parent[105];
        bool cycle;

        void bfs(int src)
        {
            queue<int> q;
            q.push(src);
            vis[src] = true;

            while (!q.empty())
            {
                int par = q.front();
                q.pop();

                for (int child : adjList[src])
                {
                    if (vis[child] && parent[par] != child)
                    {
                        cycle = true;
                    }
                    if (!vis[child])
                    {
                        q.push(child);
                        vis[child] = true;
                        parent[child] = par;
                    }
                }
            }
        }
        .
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
        memset(parent, -1, sizeof(parent));
        cycle = false;

        for (int i = 0; i < n; i++)
        {
            if (!vis[i])
            {
                bfs(i);
            }
        }

        if(cycle)
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    */

    /*
        || Detect cycle in undirected graph using DFS
        .
        bool vis[105];
        vector<int> adjList[105];
        int parent[105];
        bool cycle;

        void dfs(int src)
        {
            vis[src] = true;

            for (int child : adjList[src])
            {

                if (vis[child] && parent[src] != child)
                {
                    cycle = true;
                }
                if (!vis[child])
                {
                    parent[child] = src;
                    dfs(child);
                }
            }
        }
        .
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
        memset(parent, -1, sizeof(parent));
        cycle = false;

        for (int i = 0; i < n; i++)
        {
            if (!vis[i])
            {
                dfs(i);
            }
        }

        if (cycle)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    */

    /*
        || Detect cycle in directed graph
        .
        bool vis[105];
        bool pathVis[105];
        vector<int> adjList[105];
        bool cycle;

        void dfs(int src)
        {
            vis[src] = true;
            pathVis[src] = true;

            for (int child : adjList[src])
            {

                if (vis[child] && pathVis[child])
                {
                    cycle = true;
                }

                if (!vis[child])
                {
                    dfs(child);
                }
            }

            pathVis[src] = false;
        }
        .
        int n, e;
        cin >> n >> e;
     
        while (e--)
        {
            int a, b;
            cin >> a >> b;
     
            adjList[a].push_back(b);
        }
     
        memset(vis, false, sizeof(vis));
        memset(pathVis, false, sizeof(pathVis));
        cycle = false;
     
        for (int i = 0; i < n; i++)
        {
            if (!vis[i])
            {
                dfs(i);
            }
        }
     
        if (cycle)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    */


    return 0;
}