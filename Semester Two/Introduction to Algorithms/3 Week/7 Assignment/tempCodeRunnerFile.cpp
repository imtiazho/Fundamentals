for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (adjMatrix[i][j] == INF)
            {
                cout << " INF ";
            }
            else
            {
                cout << adjMatrix[i][j];
            }
        }
        cout << endl;
    }
