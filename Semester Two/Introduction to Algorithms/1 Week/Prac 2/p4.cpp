/*
    ||  You will be given an undirected graph as input. You need to tell the number of nodes in each component in ascending order.
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

    vector<int> numbs;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            counter = 0;
            bfs(i);
            numbs.push_back(counter);
        }
    }

    sort(numbs.begin(), numbs.end());
    for(int x : numbs)
    {
        cout << x << " ";
    }
    
    return 0;
}