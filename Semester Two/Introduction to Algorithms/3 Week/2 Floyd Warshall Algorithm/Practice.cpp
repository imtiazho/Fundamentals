#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    int adjMatrix[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                adjMatrix[i][j] = 0;
            }
            else
            {
                adjMatrix[i][j] = INT_MAX;
            }
        }

    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adjMatrix[a][b] = c;
        // adjMatrix[b][a] = c; // For bi directional
    }

    // Main Floyd Warshal
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (adjMatrix[i][k] != INT_MAX && adjMatrix[k][j] != INT_MAX && adjMatrix[i][j] > adjMatrix[i][k] + adjMatrix[k][j])
                {
                    adjMatrix[i][j] = adjMatrix[i][k] + adjMatrix[k][j];
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (adjMatrix[i][j] == INT_MAX)
            {
                cout << "I ";
            }
            else
            {
                cout << adjMatrix[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}