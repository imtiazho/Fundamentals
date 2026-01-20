#include <bits/stdc++.h>

using namespace std;

vector<int> adjList[105];
bool vis[105];
bool flag = false;
bool pathVis[105];

void dfs(int src)
{
    vis[src] = true;
    pathVis[src] = true;

    for(int child : adjList[src])
    {
        if(vis[child] && pathVis[child]) flag = true;

        if(!vis[child])
        {
            dfs(child);
        }
    }

    pathVis[src] = false;
}

int main()
{
    int n, e;
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        adjList[a].push_back(b);
    }

    memset(vis, false, sizeof(vis));
    memset(pathVis, false, sizeof(pathVis));
    
    dfs(1);

    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}

/*
    || Check cycle or not in undirected graph with BFS method
    #include <bits/stdc++.h>

    using namespace std;

    vector<int> adjList[105];
    bool vis[105];
    int parent[105];
    bool flag = false;

    void bfs(int src)
    {
        queue<int> qu;
        qu.push(src);
        vis[src] = true;

        while (!qu.empty())
        {
            int current = qu.front();
            qu.pop();

            for (int child : adjList[current])
            {
                if (vis[child] && parent[current] != child)
                {
                    flag = true;
                }

                if (!vis[child])
                {
                    qu.push(child);
                    vis[child] = true;
                    parent[child] = current;
                }
            }
        }
    }

    int main()
    {
        int n, e;
        cin >> n >> e;
        for (int i = 0; i < e; i++)
        {
            int a, b;
            cin >> a >> b;
            adjList[a].push_back(b);
            adjList[b].push_back(a);
        }

        memset(vis, false, sizeof(vis));
        memset(parent, -1, sizeof(parent));
        bfs(1);

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        return 0;
    }
*/

/*
    || Cycle detection for undirected graph with DFS
    #include <bits/stdc++.h>

    using namespace std;

    vector<int> adjList[105];
    bool vis[105];
    int parent[105];
    bool flag = false;

    void dfs(int src)
    {
        vis[src] = true;

        for(int child : adjList[src])
        {
            if(vis[child] && parent[src] != child)
                flag = true;

            if(!vis[child])
            {
                parent[child] = src;
                dfs(child);
            }
        }
    }

    int main()
    {
        int n, e;
        cin >> n >> e;
        for (int i = 0; i < e; i++)
        {
            int a, b;
            cin >> a >> b;
            adjList[a].push_back(b);
            adjList[b].push_back(a);
        }

        memset(vis, false, sizeof(vis));
        memset(parent, -1, sizeof(parent));
        dfs(1);

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        return 0;
    }
*/

/*
    || Detect cycle in directed graph with DFS
    #include <bits/stdc++.h>

    using namespace std;

    vector<int> adjList[105];
    bool vis[105];
    bool flag = false;
    bool pathVis[105];

    void dfs(int src)
    {
        vis[src] = true;
        pathVis[src] = true;

        for(int child : adjList[src])
        {
            if(vis[child] && pathVis[child]) flag = true;

            if(!vis[child])
            {
                dfs(child);
            }
        }

        pathVis[src] = false;
    }

    int main()
    {
        int n, e;
        cin >> n >> e;
        for (int i = 0; i < e; i++)
        {
            int a, b;
            cin >> a >> b;
            adjList[a].push_back(b);
        }

        memset(vis, false, sizeof(vis));
        memset(pathVis, false, sizeof(pathVis));
        
        dfs(1);

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

        return 0;
    }
*/

