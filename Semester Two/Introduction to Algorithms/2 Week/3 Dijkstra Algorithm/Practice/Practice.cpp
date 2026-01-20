#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> adjList[105];
int dis[105];

void dijkstra(int src)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> qu;
    qu.push({0, src});
    dis[src] = 0;

    while (!qu.empty())
    {
        pair<int, int> current = qu.top();
        qu.pop();

        int curDis = current.first;
        int curNode = current.second;

        for (auto child : adjList[curNode])
        {
            int childNode = child.first;
            int childDis = child.second;

            if (curDis + childDis < dis[childNode])
            {
                dis[childNode] = curDis + childDis;
                qu.push({dis[childNode], childNode});
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adjList[a].push_back({b, c});
        adjList[b].push_back({a, c});
    }

    for (int i = 0; i < n; i++)
        dis[i] = INT_MAX;

    dijkstra(0);
    
    for (int i = 0; i < n; i++)
        cout << dis[i] << " ";
}

/*
    || Adjacency list for weighted graph
*/

/*
    
*/

// ...