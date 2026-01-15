#include <bits/stdc++.h>

using namespace std;

vector<int> adjList[1005];
bool vis[1005];

void dfs(int src)
{
    // cout << src << " ";
    vis[src] = true;

    for (int child : adjList[src])
    {
        if (!vis[child])
        {
            dfs(child);
        }
    }
}

int main()
{
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

    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
            counter++;
            // cout << endl;
        }
    }

    cout << counter << endl;
    return 0;
}

/*
    || DFS normal traversal method
    vector<int> adjList[1005];
    bool vis[1005];

    void dfs(int src)
    {
        // Base case

        // Work with node or like something
        cout << src << " ";
        vis[src] = true;

        // condition to function call itself
        for(int x : adjList[src])
        {
            if(!vis[x])
            {
                dfs(x);
            }
        }
    }
    .
    int n, e;
    cin >> n >> e;
    while(e--)
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
    || Run DFS in 2D grid
    int n, m;
    char grid[1005][1005];
    bool vis[1005][1005];
    vector<pair<int, int>> mov = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

    bool valid(int i, int j)
    {
        if (i < 0 || i >= n || j < 0 || j >= m)
            return false;

        return true;
    }

    void dfs(int si, int sj)
    {
        cout << si << " " << sj << endl;
        vis[si][sj] = true;

        for (int i = 0; i < 4; i++)
        {
            int ci, cj;
            ci = si + mov[i].first;
            cj = sj + mov[i].second;

            if (!vis[ci][cj] && valid(ci, cj))
            {
                dfs(ci, cj);
            }
        }
    }
    .
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }
    memset(vis, false, sizeof(vis));

    int si, sj;
    cin >> si >> sj;

    dfs(si, sj);
*/

/*
    || BFS traversal in 2D grid
    int n, m;
    char grid[1005][1005];
    bool vis[1005][1005];
    vector<pair<int, int>> mov = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

    bool valid(int i, int j)
    {
        if (i < 0 || i >= n || j < 0 || j >= m)
            return false;

        return true;
    }

    void bfs(int si, int sj)
    {
        queue<pair<int, int>> qu;
        qu.push({si, sj});
        vis[si][sj] = true;

        while (!qu.empty())
        {
            pair<int, int> par = qu.front();
            qu.pop();
            int parI = par.first;
            int parJ = par.second;

            cout << parI << " " << parJ << endl;

            for (int i = 0; i < 4; i++)
            {
                int ci, cj;
                ci = parI + mov[i].first;
                cj = parJ + mov[i].second;

                if(valid(ci, cj) && !vis[ci][cj])
                {
                    qu.push({ci, cj});
                    vis[ci][cj] = true;
                }
            }
        }
    }
    .
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }
    memset(vis, false, sizeof(vis));

    int si, sj;
    cin >> si >> sj;

    bfs(si, sj);
*/

/*
    || Find shortest path in 2D grid
    int n, m;
    char grid[1005][1005];
    bool vis[1005][1005];
    vector<pair<int, int>> mov = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    int level[1005][1005];

    bool valid(int i, int j)
    {
        if (i < 0 || i >= n || j < 0 || j >= m)
            return false;

        return true;
    }

    void bfs(int si, int sj)
    {
        queue<pair<int, int>> qu;
        qu.push({si, sj});
        vis[si][sj] = true;
        level[si][sj] = 0;

        while (!qu.empty())
        {
            pair<int, int> par = qu.front();
            qu.pop();
            int parI = par.first;
            int parJ = par.second;

            for (int i = 0; i < 4; i++)
            {
                int ci, cj;
                ci = parI + mov[i].first;
                cj = parJ + mov[i].second;

                if(valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == '.')
                {
                    qu.push({ci, cj});
                    vis[ci][cj] = true;
                    level[ci][cj] = level[parI][parJ] + 1;
                }
            }
        }
    }
    .
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));

    int si, sj, di, dj;
    cin >> si >> sj >> di >> dj;

    bfs(si, sj);
    cout << level[di][dj] << endl;
*/

/*
    || Check components
    vector<int> adjList[1005];
    bool vis[1005];

    void dfs(int src)
    {
        // cout << src << " ";
        vis[src] = true;

        for (int child : adjList[src])
        {
            if (!vis[child])
            {
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

    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
            counter++;
            // cout << endl;
        }
    }

    cout << counter << endl;
*/