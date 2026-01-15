/*
    || Problem Statement: You will be given an undirected graph as input. You need to tell the number of components in this graph.
*/
#include <bits/stdc++.h>

using namespace std;

vector<int> adjList[105];
bool vis[105];
int counter = 0;

void bfs(int src)
{
    queue<int> qu;
    qu.push(src);
    vis[src] = true;

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

    memset(vis, false, sizeof(vis));

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            bfs(i);
            counter++;
        }
    }

    cout << counter << endl;
    
    return 0;
}