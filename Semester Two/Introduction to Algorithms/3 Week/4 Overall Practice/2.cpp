#include <bits/stdc++.h>

using namespace std;

int adjMatrix[100][100];

void floydWarshal(int n)
{
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (adjMatrix[i][j] > adjMatrix[i][k] + adjMatrix[k][j] && adjMatrix[i][k] != INT_MAX && adjMatrix[k][j] != INT_MAX)
                {
                    adjMatrix[i][j] = adjMatrix[i][k] + adjMatrix[k][j];
                }
            }
        }
    }
}

bool cycleDetector(int n)
{
    for (int i = 0; i < n; i++)
    {
        if (adjMatrix[i][i] < 0)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    int n, e;
    cin >> n >> e;

    for (int i = 0; i < n; i++)
    {
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
    }

    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adjMatrix[a][b] = c;
        // adjMatrix[b][a] = c;
    }

    floydWarshal(n);

    if (cycleDetector(n))
    {
        cout << "Negative weighted cycle detected" << endl;
    }
    else
    {

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
    }

    return 0;
}