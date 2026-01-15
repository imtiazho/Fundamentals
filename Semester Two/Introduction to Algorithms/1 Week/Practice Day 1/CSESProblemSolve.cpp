/*
    Problem Statement: Syrjälä's network has n computers and m connections. Your task is to find out if Uolevi can send a message to Maija, and if it is possible, what is the minimum number of computers on such a route.
    Input
    The first input line has two integers n and m: the number of computers and connections. The computers are numbered 1,2,\dots,n. Uolevi's computer is 1 and Maija's computer is n.
    Then, there are m lines describing the connections. Each line has two integers a and b: there is a connection between those computers.
    Every connection is between two different computers, and there is at most one connection between any two computers.
    Output
    If it is possible to send a message, first print k: the minimum number of computers on a valid route. After this, print an example of such a route. You can print any valid solution.
    If there are no routes, print "IMPOSSIBLE"
*/

#include <bits/stdc++.h>

using namespace std;

vector<int> adjList[100005];
bool vis[100005];
int level[100005];
int par[100005];

void bfs(int src)
{
    queue<int> qu;
    qu.push(src);
    vis[src] = true;
    level[src] = 1;

    while (!qu.empty())
    {
        int parent = qu.front();
        qu.pop();

        for (int child : adjList[parent])
        {
            if (!vis[child])
            {
                qu.push(child);
                vis[child] = true;
                level[child] = level[parent] + 1;
                par[child] = parent;
            }
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    memset(par, -1, sizeof(par));
    bfs(1);

    
    if (vis[n])
    {
        vector<int> path;
        int node = n;
        while (node != -1)
        {
            path.push_back(node);
            node = par[node];
        }
    
        reverse(path.begin(), path.end());
        cout << level[n] << endl;
        for (int x : path)
        {
            cout << x << " ";
        }
    }
    else
    {
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}