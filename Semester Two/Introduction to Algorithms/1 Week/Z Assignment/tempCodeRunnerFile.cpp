r (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j)
            {
                grid[i][j] = 1;
            }
        }
    }