#include <bits/stdc++.h>

using namespace std;

vector<int> adjList[1005];
bool vis[1005];
bool level[1005];
int parent[1005];

void bfs(int src)
{
    queue<int> qu;
    qu.push(src);
    vis[src] = true;
    level[src] = 0;

    while ((!qu.empty()))
    {
        // ber kore ana
        int par = qu.front();
        qu.pop();

        // Oree niye kaj koraa
        cout << par << " ";

        // Children push kora
        for (int child : adjList[par])
        {
            if (vis[child] == false)
            {
                qu.push(child);
                vis[child] = true;
                level[child] = par + 1;
                parent[child] = par;
            }
        }
    }
}

int main()
{
    /*
        Graph Visualization : Graphs Editor
    */

    /*
        || BFS Traversal theory + BFS traversal implimentation
        .
        vector<int> adjList[1005];
        bool vis[1005];

        void bfs(int src)
        {
            queue<int> qu;
            qu.push(src);
            vis[src] = true;

            while ((!qu.empty()))
            {
                // ber kore ana
                int par = qu.front();
                qu.pop();

                // Oree niye kaj koraa
                cout << par << " ";

                // Children push kora
                for (int child : adjList[par])
                {
                    if (vis[child] == false)
                    {
                        qu.push(child);
                        vis[child] = true;
                    }
                }
            }
        }
        .
        int n, e;
        cin >> n >> e;
        vector<int> adjList[n];

        while (e--)
        {
            int a, b;
            cin >> a >> b;
            adjList[a].push_back(b);
            adjList[b].push_back(a);
        }

        memset(vis, false, sizeof(vis));
        bfs(0);
    */

    /*
        Time Complexity is O(V + E)
        Space Complexity is O(V)

    */

    /*
        || Check if a node can be visited or not
        .
        vector<int> adjList[1005];
bool vis[1005];

void bfs(int src)
{
    queue<int> qu;
    qu.push(src);
    vis[src] = true;

    while ((!qu.empty()))
    {
        // ber kore ana
        int par = qu.front();
        qu.pop();

        // Oree niye kaj koraa
        cout << par << " ";

        // Children push kora
        for (int child : adjList[par])
        {
            if (vis[child] == false)
            {
                qu.push(child);
                vis[child] = true;
            }
        }
    }
}
.
        int n, e;
        cin >> n >> e;
        vector<int> adjList[n];

        while (e--)
        {
            int a, b;
            cin >> a >> b;
            adjList[a].push_back(b);
            adjList[b].push_back(a);
        }

        memset(vis, false, sizeof(vis));
        int src, dst;
        cin >> src >> dst;

        if(vis[dst])
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

        bfs(0);

    */

    /*
        || Single Source Shortest Distance using BFS
        .
        vector<int> adjList[1005];
        bool vis[1005];
        bool level[1005];

        void bfs(int src)
        {
            queue<int> qu;
            qu.push(src);
            vis[src] = true;
            level[src] = 0;

            while ((!qu.empty()))
            {
                // ber kore ana
                int par = qu.front();
                qu.pop();

                // Oree niye kaj koraa
                cout << par << " ";

                // Children push kora
                for (int child : adjList[par])
                {
                    if (vis[child] == false)
                    {
                        qu.push(child);
                        vis[child] = true;
                        level[child] = par + 1;
                    }
                }
            }
        }
        .
        int n, e;
        cin >> n >> e;
        vector<int> adjList[n];

        while (e--)
        {
            int a, b;
            cin >> a >> b;
            adjList[a].push_back(b);
            adjList[b].push_back(a);
        }

        memset(vis, false, sizeof(vis));
        memset(level, -1, sizeof(level));
        int src, dst;
        cin >> src >> dst;
        bfs(src);
        for (int i = 0; i < n; i++)
        {
            cout << i << " -> " << level[i] << endl;
        }
    */

    /*
        ||
    */

    int n, e;
    cin >> n >> e;
    vector<int> adjList[n];

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    memset(parent, -1, sizeof(parent));
    int src, dst;
    cin >> src >> dst;
    bfs(src);

    // for each parent
    // for (int i = 0; i < n; i++)
    // {
    //     cout << i << " -> " << level[i] << endl;
    // }

    vector<int> path;
    int node = dst;
    while (node == -1)
    {
        path.push_back(node);
        node = parent[node];
    }
    reverse(path.begin(), path.end());
    for (int x : path)
    {
        cout << x << " ";
    }

    return 0;
}