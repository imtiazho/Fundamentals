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