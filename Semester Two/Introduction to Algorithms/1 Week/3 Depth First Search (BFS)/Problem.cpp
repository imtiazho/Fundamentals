// Count total numbers of components
#include <bits/stdc++.h>

using namespace std;

vector<int> adjList[1005];
bool vis[1005];

void dfs(int src)
{
    // Base Case
    // Auto off hoye jabee cause call korar agee amra check kore nicchi

    // Print kore dea
    vis[src] = true;

    // kaj kora
    for (int child : adjList[src])
    {
        if (vis[child] == false)
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
        if (vis[i] == false)
        {
            dfs(i);
            counter++;
        }
    }

    cout << counter << endl;
    return 0;
}