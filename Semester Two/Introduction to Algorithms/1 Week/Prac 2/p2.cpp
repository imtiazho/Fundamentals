/*
    || Problem Statement:  You will be given an undirected graph as input. Then you will be given a node N. You need to tell the number of nodes that can be visited from node N.
*/
#include <bits/stdc++.h>

using namespace std;

vector<int> adjList[105];
bool vis[105];
int counter;

void bfs(int src)
{
    queue<int> qu;
    qu.push(src);
    vis[src] = true;

    while (!qu.empty())
    {
        int par = qu.front();
        qu.pop();

        counter++;

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
    counter = 0;
    int src;
    cin >> src;
    bfs(src);

    cout << counter << endl;
    return 0;
}