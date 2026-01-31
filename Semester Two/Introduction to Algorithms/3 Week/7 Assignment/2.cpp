#include <bits/stdc++.h>

using namespace std;

const long long int INF = LLONG_MAX;

int main()
{
    int n, m;
    cin >> n >> m;

    long long int adjMatrix[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
                adjMatrix[i][j] = 0;
            else
                adjMatrix[i][j] = INF;
        }
    }

    while (m--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (adjMatrix[a][b] > c)
        {
            adjMatrix[a][b] = c;
        }
    }

    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (adjMatrix[i][j] > adjMatrix[i][k] + adjMatrix[k][j] && adjMatrix[i][k] != INF && adjMatrix[k][j] != INF)
                {
                    adjMatrix[i][j] = adjMatrix[i][k] + adjMatrix[k][j];
                }
            }
        }
    }

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         if (adjMatrix[i][j] == INF)
    //         {
    //             cout << "I ";
    //         }
    //         else
    //         {
    //             cout << adjMatrix[i][j] << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    int q;
    cin >> q;
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        if (adjMatrix[a][b] == INF)
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