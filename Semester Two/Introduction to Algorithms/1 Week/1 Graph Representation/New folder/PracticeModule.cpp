#include <bits/stdc++.h>

using namespace std;

int main()
{
    

    return 0;
}

/*
    Adjacency Matrix input for undirectional graph : This work for check if two nodes are connceted or not.
    int n, e;
    cin >> n >> e;
    int adjMatrix[n][n];
    memset(adjMatrix, 0, sizeof(adjMatrix));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                adjMatrix[i][j] = 1;
        }
    }

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;

        adjMatrix[a][b] = 1;
        adjMatrix[b][a] = 1; // For undirected graphs
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }

    Adjacency Matrix input for directional graph : This work for check if two nodes are connceted or not.
    int n, e;
    cin >> n >> e;
    int adjMatrix[n][n];
    memset(adjMatrix, 0, sizeof(adjMatrix));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                adjMatrix[i][j] = 1;
        }
    }

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;

        adjMatrix[a][b] = 1;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }
*/

/*
    Adjacency List || Undirectional List: This work for check how many nodes are connected with a node.
    int n, e;
    cin >> n >> e;
    vector<int> adjList[n];
    while(e--)
    {
        int a, b;
        cin >> a >> b;

        adjList[a].push_back(b);
        adjList[b].push_back(a); // For undirected graph
    }

    for(int i = 0; i < n; i++)
    {
        cout << i << " -> ";
        for(int x : adjList[i])
        {
            cout << x << " ";
        }
        cout << endl;
    }
    .
    Adjacency List || Directional List: This work for check how many nodes are connected with a node.
    int n, e;
    cin >> n >> e;
    vector<int> adjList[n];
    while(e--)
    {
        int a, b;
        cin >> a >> b;

        adjList[a].push_back(b);
    }

    for(int i = 0; i < n; i++)
    {
        cout << i << " -> ";
        for(int x : adjList[i])
        {
            cout << x << " ";
        }
        cout << endl;
    }
*/

/*
    Edges List : When we need to print just edges then use it.
    int n, e;
    cin >> n >> e;
    vector<pair<int, int>> edgeList;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        edgeList.push_back({a, b});
    }

    for (pair<int, int> p : edgeList)
    {
        cout << p.first << " " << p.second << endl;
    }
*/