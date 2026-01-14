r (int i = 0; i < n; i++)
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