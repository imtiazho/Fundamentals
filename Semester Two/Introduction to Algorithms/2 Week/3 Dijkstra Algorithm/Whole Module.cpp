#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> adjList[105];
int dis[105];

int main()
{
    /*
        || Adjacency list for weighted graph
        int n, e;
        cin >> n >> e;
        vector<pair<int, int>> adjList[n];

        while (e--)
        {
            int a, b, c;
            cin >> a >> b >> c;
            adjList[a].push_back({b, c});
            adjList[b].push_back({a, c}); // for undirected
        }

        for (int i = 0; i < n; i++)
        {
            cout << i << " -> ";
            for (pair<int, int> p : adjList[i])
            {
                cout << p.first << " " << p.second << ", ";
            }

            cout << endl;
        }
    */

    /*
        || Dijkstra Naive Implementation
        .
        vector<pair<int, int>> adjList[105];
        int dis[105];

        void dijkstra(int src)
        {
            queue<pair<int, int>> qu;
            qu.push({src, 0});
            dis[src] = 0;

            while ((!qu.empty()))
            {
                pair<int, int> par = qu.front();
                qu.pop();
                int parNode = par.first;
                int parDis = par.second;

                // Children push kora
                for (auto child : adjList[parNode])
                {
                    int childNode = child.first;
                    int childDis = child.second;

                    if (parDis + childDis < dis[childNode])
                    {
                        dis[childNode] = parDis + childDis;
                        qu.push({childNode, dis[childNode]});
                    }
                }
            }
        }
        .
        int n, e;
        cin >> n >> e;

        while (e--)
        {
            int a, b, c;
            cin >> a >> b >> c;
            adjList[a].push_back({b, c});
            adjList[b].push_back({a, c}); // for undirected
        }

        for (int i = 0; i < n; i++)
            dis[i] = INT_MAX;

        dijkstra(0);

        for (int i = 0; i < n; i++)
            cout << i << " -> " << dis[i] << endl;
    */

   /*
        || Dijkstra Optimized :
        void dijkstra(int src)
        {
            priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> qu;
            qu.push({0, src});
            dis[src] = 0;

            while ((!qu.empty()))
            {
                pair<int, int> par = qu.top();
                qu.pop();
                int parDis = par.first;
                int parNode = par.second;

                // Children push kora
                for (auto child : adjList[parNode])
                {
                    int childNode = child.first;
                    int childDis = child.second;

                    if (parDis + childDis < dis[childNode])
                    {
                        dis[childNode] = parDis + childDis;
                        qu.push({dis[childNode], childNode});
                    }
                }
            }
        }
        .
        int n, e;
        cin >> n >> e;

        while (e--)
        {
            int a, b, c;
            cin >> a >> b >> c;
            adjList[a].push_back({b, c});
            adjList[b].push_back({a, c}); // for undirected
        }

        for (int i = 0; i < n; i++)
            dis[i] = INT_MAX;

        dijkstra(0);

        for (int i = 0; i < n; i++)
        cout << i << " -> " << dis[i] << endl;  
    */
   
    
    return 0;
}