#include <bits/stdc++.h>

using namespace std;

int grid[1005][1005];
bool vis[1005][1005];

int main()
{
    int n, m;
    cin >> n >> m;

    memset(grid, 0, sizeof(grid));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j)
            {
                grid[i][j] = 1;
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        grid[a][b] = 1;
    }

    int Q;
    cin >> Q;
    while (Q--)
    {
        int a, b;
        cin >> a >> b;
        if (grid[a][b])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}

/*
    Problem - 01
    .
    #include <bits/stdc++.h>

    using namespace std;

    int grid[1005][1005];
    bool vis[1005][1005];

    int main()
    {
        int n, m;
        cin >> n >> m;

        memset(grid, 0, sizeof(grid));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i == j)
                {
                    grid[i][j] = 1;
                }
            }
        }

        for (int i = 0; i < m; i++)
        {
            int a, b;
            cin >> a >> b;
            grid[a][b] = 1;
        }

        int Q;
        cin >> Q;
        while (Q--)
        {
            int a, b;
            cin >> a >> b;
            if (grid[a][b])
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }

        return 0;
    }
*/