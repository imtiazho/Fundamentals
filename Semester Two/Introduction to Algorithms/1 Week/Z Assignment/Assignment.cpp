#include <bits/stdc++.h>

using namespace std;

char grid[1005][1005];
bool vis[1005][1005];
vector<pair<int, int>> mov = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n, m, counter = 0;
pair<int, int> A, B;

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void dfs(int si, int sj)
{
    counter++;
    vis[si][sj] = true;

    for (int i = 0; i < 4; i++)
    {
        int ci, cj;
        ci = si + mov[i].first;
        cj = sj + mov[i].second;

        if (!vis[ci][cj] && valid(ci, cj) && grid[ci][cj] == '.')
        {
            dfs(ci, cj);
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }

    memset(vis, false, sizeof(vis));

    vector<int> rooms;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == '.' && !vis[i][j])
            {
                counter = 0;
                dfs(i, j);
                rooms.push_back(counter);
            }
        }
    }

    sort(rooms.begin(), rooms.end());
    for (int x : rooms)
    {
        cout << x << " ";
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

/*
    || Problem Two
    .
    #include <bits/stdc++.h>

    using namespace std;

    vector<int> adjList[1005];
    bool vis[1005];

    int main()
    {
        int n, e;
        cin >> n >> e;

        while (e--)
        {
            int a, b;
            cin >> a >> b;
            adjList[a].push_back(b);
            adjList[b].push_back(a);
        }

        int Q;
        cin >> Q;
        while (Q--)
        {
            int x;
            cin >> x;
            vector<int> res;
            for (int a : adjList[x])
            {
                res.push_back(a);
            }
            sort(res.begin(), res.end(), greater<>());
            for(int i : res)
            {
                cout << i << " ";
            }
            cout << endl;
        }

        return 0;
    }
*/

/*
    || Can we go?
    #include <bits/stdc++.h>

    using namespace std;

    char grid[1005][1005];
    bool vis[1005][1005];
    vector<pair<int, int>> mov = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    int n, m;
    pair<int, int> A, B;

    bool valid(int i, int j)
    {
        if (i < 0 || i >= n || j < 0 || j >= m)
            return false;
        return true;
    }

    void dfs(int si, int sj)
    {
        vis[si][sj] = true;

        for (int i = 0; i < 4; i++)
        {
            int ci, cj;
            ci = si + mov[i].first;
            cj = sj + mov[i].second;

            if (!vis[ci][cj] && valid(ci, cj) && grid[ci][cj] != '#')
            {
                dfs(ci, cj);
            }
        }
    }

    int main()
    {
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
                if (grid[i][j] == 'A')
                {
                    A.first = i;
                    A.second = j;
                }
                if (grid[i][j] == 'B')
                {
                    B.first = i;
                    B.second = j;
                }
            }
        }

        memset(vis, false, sizeof(vis));
        dfs(A.first, A.second);

        if (vis[B.first][B.second])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

        return 0;
    }
*/

/*
    || Count Apartment
    #include <bits/stdc++.h>

    using namespace std;

    char grid[1005][1005];
    bool vis[1005][1005];
    vector<pair<int, int>> mov = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    int n, m, counter = 0;
    pair<int, int> A, B;

    bool valid(int i, int j)
    {
        if (i < 0 || i >= n || j < 0 || j >= m)
            return false;
        return true;
    }

    void dfs(int si, int sj)
    {
        vis[si][sj] = true;

        for (int i = 0; i < 4; i++)
        {
            int ci, cj;
            ci = si + mov[i].first;
            cj = sj + mov[i].second;

            if (!vis[ci][cj] && valid(ci, cj) && grid[ci][cj] == '.')
            {
                dfs(ci, cj);
            }
        }
    }

    int main()
    {
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }

        memset(vis, false, sizeof(vis));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == '.' && !vis[i][j])
                {
                    dfs(i, j);
                    counter++;
                }
            }
        }

        cout << counter << endl;
        return 0;
    }
*/

/*
    || Count rooms in apartment
    #include <bits/stdc++.h>

    using namespace std;

    char grid[1005][1005];
    bool vis[1005][1005];
    vector<pair<int, int>> mov = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    int n, m, counter = 0;
    pair<int, int> A, B;

    bool valid(int i, int j)
    {
        if (i < 0 || i >= n || j < 0 || j >= m)
            return false;
        return true;
    }

    void dfs(int si, int sj)
    {
        counter++;
        vis[si][sj] = true;

        for (int i = 0; i < 4; i++)
        {
            int ci, cj;
            ci = si + mov[i].first;
            cj = sj + mov[i].second;

            if (!vis[ci][cj] && valid(ci, cj) && grid[ci][cj] == '.')
            {
                dfs(ci, cj);
            }
        }
    }

    int main()
    {
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }

        memset(vis, false, sizeof(vis));

        vector<int> rooms;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == '.' && !vis[i][j])
                {
                    counter = 0;
                    dfs(i, j);
                    rooms.push_back(counter);
                }
            }
        }

        sort(rooms.begin(), rooms.end());
        for (int x : rooms)
        {
            cout << x << " ";
        }


        return 0;
    }
*/
// ..