#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, q;
    cin >> n >> m >> q;
    long long int adjMatrix[n + 5][n + 5];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
                adjMatrix[i][j] = 0;
            else
                adjMatrix[i][j] = LLONG_MAX;
        }
    }

    while (m--)
    {
        long long int a, b, c;
        cin >> a >> b >> c;
        adjMatrix[a][b] = min(adjMatrix[a][b], c);
        adjMatrix[b][a] = min(adjMatrix[a][b], c);
    }

    // Main Floyd Warshall
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if ((adjMatrix[i][j] > adjMatrix[i][k] + adjMatrix[k][j]) && adjMatrix[i][k] != LLONG_MAX && adjMatrix[k][j] != LLONG_MAX)
                {
                    adjMatrix[i][j] = adjMatrix[i][k] + adjMatrix[k][j];
                }
            }
        }
    }

    while (q--)
    {
        int a, b;
        cin >> a >> b;
        if (adjMatrix[a][b] == LLONG_MAX)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << adjMatrix[a][b] << endl;
        }
    }
    
    return 0;
}