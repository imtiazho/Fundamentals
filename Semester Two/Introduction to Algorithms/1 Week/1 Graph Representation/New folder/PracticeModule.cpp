#include <bits/stdc++.h>

using namespace std;

int main()
{
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


    return 0;
}

/*
    Adjacency Matrix input for undirectional graph
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

    Adjacency Matrix input for directional graph
    
*/