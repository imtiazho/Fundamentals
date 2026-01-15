/*
    || Problem Statement: You will be given an undirected graph which will be connected as input. Then you will be given a level L. You need to print the node values at level L in descending order. The source will be 0 always.


*/

#include <bits/stdc++.h>

using namespace std;

vector<int> adjList[105];
bool vis[105];
int level[105];
vector<int> levelWiseData[105];

void bfs(int src)
{
    queue<int> qu;
    qu.push(src);
    vis[src] = true;
    level[src] = 0;
    levelWiseData[0].push_back(src);

    while (!qu.empty())
    {
        int par = qu.front();
        qu.pop();

        // cout << par << " ";

        for (int child : adjList[par])
        {
            if (!vis[child])
            {
                qu.push(child);
                vis[child] = true;
                level[child] = level[par] + 1;
                levelWiseData[level[child]].push_back(child);
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
    memset(level, -1, sizeof(level));

    bfs(0);

    vector<int> levelWiseStoring;
    int l;
    cin >> l;

    // Its a way i want more deep logic
    // for(int i = n; i > 0; i--)
    // {
    //     if(level[i] == l)
    //     {
    //         cout << i << " ";
    //     }
    // }

    // Its another way to solve this problem
    reverse(levelWiseData[l].begin(), levelWiseData[l].end());
    for (int i = 0; i < levelWiseData[l].size(); i++)
    {
        cout << levelWiseData[l][i] << " ";
    }

    return 0;
}