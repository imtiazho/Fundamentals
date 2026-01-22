/*
    || Problem Statement: Byteland has n cities, and m roads between them. The goal is to construct new roads so that there is a route between any two cities. Your task is to find out the minimum number of roads required, and also determine which roads should be built.
    Input
    The first input line has two integers n and m: the number of cities and roads. The cities are numbered 1,2,\dots,n.
    After that, there are m lines describing the roads. Each line has two integers a and b: there is a road between those cities.
    A road always connects two different cities, and there is at most one road between any two cities.
    Output
    First print an integer k: the number of required roads.
    Then, print k lines that describe the new roads. You can print any valid solution.
*/
#include <bits/stdc++.h>

using namespace std;

vector<int> adjList[200005];
vector<int> vis(200005, false);
vector<int> ans;

void dfs(int src)
{
    vis[src] = true;

    for (int child : adjList[src])
    {
        if (!vis[child])
            dfs(child);
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

    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            ans.push_back(i);
            dfs(i);
        }
    }

    cout << ans.size() - 1 << endl;
    for (int i = 0; i < ans.size() - 1; i++)
    {
        cout << ans[i] << " " << ans[i + 1] << endl;
    }
    
    return 0;
}