/*
    || Problem Statement: Question: You will be given an undirected graph as input. Then you will be given a query Q. For each query, you will be given source S and destination D. You need to print the shortest distance between S and D. If there is no path from S to D, print -1.

*/

#include <bits/stdc++.h>

using namespace std;

vector<int> adjList[105];
bool vis[105];
int level[105];

void bfs(int src)
{
    queue<int> qu;
    qu.push(src);
    vis[src] = true;
    level[src] = 0;

    while (!qu.empty())
    {
        int par = qu.front();
        qu.pop();

        for (int child : adjList[par])
        {
            if (!vis[child])
            {
                qu.push(child);
                vis[child] = true;
                level[child] = level[par] + 1;
            }
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

    
    int q;
    cin >> q;
    while (q--)
    {
        int src, dst;
        cin >> src >> dst;
        memset(vis, false, sizeof(vis));
        memset(level, -1, sizeof(level));

        bfs(src);

        cout << level[dst] << endl;
    }

    return 0;
}