#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> mov = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
char grid[100][100];
bool vis[100][100];

void dfs(int si, int sj)
{
    vis[si][sj] = true;

    for (int i = 0; i < 4; i++)
    {
        int ci = si + mov[i].first;
        int cj = sj + mov[i].second;

        if (!vis[ci][cj] && grid[ci][cj] == '.')
        {
            dfs(ci, cj);
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }

    // for (int i = 0; i < n; i++)
    //     for (int j = 0; j < m; j++)
    //         dfs(i, j);

    int si, sj, di, dj;
    cin >> si >> sj >> di >> dj;
    dfs(si, sj);

    if (vis[di][dj])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}