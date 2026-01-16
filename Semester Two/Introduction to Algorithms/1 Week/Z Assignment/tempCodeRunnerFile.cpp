 (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (vis[i][j])
                cout << 'Y';
            else
                cout << 'N';
        }
        cout << endl;
    }