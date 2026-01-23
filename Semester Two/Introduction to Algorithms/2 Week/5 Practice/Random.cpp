#include <bits/stdc++.h>

using namespace std;

vector<int> adjList[105];
vector<bool> vis(105, false);
vector<int> ans;

void dfs(int src)
{
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
    for (int i = 1; i <= e; i++)
    {
        int a, b;
        cin >> a >> b;
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }

    for(int i = 1; i <= n; i++)
    {
        if(!vis[i])
        {
            ans.push_back(i);
            dfs(i);
        }
    }

    for(int i : ans)
    {
        cout << i << " ";
    }

    return 0;
}

/*
    class Solution {
public:
    int dis[105];
    vector<pair<int, int>> adjList[105];

    void dijkstra(int src)
    {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> qu;
        qu.push({0, src});
        dis[src] = 0;

        while(!qu.empty())
        {
            pair<int, int> par = qu.top();
            int parDis = par.first;
            int parNode = par.second;
            qu.pop();

            for(auto child : adjList[parNode])
            {
                int childNode = child.first;
                int childDis = child.second;
                
                if(parDis + childDis < dis[childNode])
                {
                    dis[childNode] = parDis + childDis;
                    qu.push({dis[childNode], childNode});
                }
            }
        }

    }

    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        for(auto time : times)
        {
            adjList[time[0]].push_back({time[1], time[2]});
        }

        for(int i = 1; i <= n; i++)
            dis[i] = INT_MAX;

        dijkstra(k);

        int mx = INT_MIN;
        for(int x : dis)
        {
            if(x == INT_MAX) return -1;

            if(x > mx)
            {
                mx = x;
            }
        }

        return mx;
    }
};
*/

/*
    class Solution {
public:
    vector<pair<int, int>> adjList[100005];
    bool vis[100005];
    int mini = INT_MAX;

    void dfs(int src)
    {
        vis[src] = true;

        for(auto child : adjList[src])
        {
            mini = min(mini, child.second);
            if(!vis[child.first])
            {
                dfs(child.first);
            }
        }
    }

    int minScore(int n, vector<vector<int>>& roads) {
        for(auto road : roads)
        {
            adjList[road[0]].push_back({road[1], road[2]});
            adjList[road[1]].push_back({road[0], road[2]});
        }

        memset(vis, false, sizeof(vis));
        dfs(1);

        return mini;
    }
};
*/

/*
    class Solution {
public:
    vector<pair<int, int>> mov = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    bool vis[1005][1005];
    int n, m;

    bool valid(int i, int j) {
        if (i < 0 || i >= n || j < 0 || j >= m)
            return false;
        return true;
    }

    void bfs(vector<vector<int>>& grid) {
        queue<pair<int, int>> qu;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    grid[i][j] = 0;
                    vis[i][j] = true;
                    qu.push({i, j});
                }
            }
        }

        while(!qu.empty())
        {
            pair<int, int> par = qu.front();
            int parI = par.first;
            int parJ = par.second;
            qu.pop();

            for(int i = 0; i < 4; i++)
            {
                int ci, cj;
                ci = parI + mov[i].first;
                cj = parJ + mov[i].second;

                if(valid(ci, cj) && !vis[ci][cj])
                {
                    qu.push({ci, cj});
                    grid[ci][cj] = grid[parI][parJ] + 1;
                    vis[ci][cj] = true; 
                }
            }
        }
    }

    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        n = isWater.size();
        m = isWater[0].size();

        memset(vis, false, sizeof(vis));
        bfs(isWater);

        return isWater;
    }
};
*/

/*
    class Solution {
public:
    vector<pair<int, int>> mov = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    int n, m;

    bool valid(int i, int j) {
        if (i < 0 || i >= n || j < 0 || j >= m)
            return false;
        return true;
    }

    void bfs(vector<vector<int>>& grid) {
        queue<pair<int, int>> qu;
        bool vis[n][m];
        memset(vis, false, sizeof(vis));

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 0) {
                    vis[i][j] = true;
                    qu.push({i, j});
                }
            }
        
        while(!qu.empty())
        {
            pair<int, int> par = qu.front();
            int parI = par.first;
            int parJ = par.second;
            qu.pop();

            for(int i = 0; i < 4; i++)
            {
                int ci, cj;
                ci = parI + mov[i].first;
                cj = parJ + mov[i].second;

                if(valid(ci, cj) && (!vis[ci][cj] || grid[ci][cj] > grid[parI][parJ] + 1))
                {
                    qu.push({ci, cj});
                    vis[ci][cj] = true;
                    grid[ci][cj] = grid[parI][parJ] + 1;
                }
            }
        }
    }

    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        n = mat.size();
        m = mat[0].size();
        bfs(mat);

        return mat;
    }
};
*/