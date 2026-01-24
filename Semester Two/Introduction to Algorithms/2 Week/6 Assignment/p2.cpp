#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> mov = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
char grid[100][100];
bool vis[100][100];
int counter = 0;
int n, m;

bool valid(int i, int j)
{
    if(i < 0 || i >= n || j < 0 || j >= m) return false;
    return true;
}

void dfs(int si, int sj)
{
    vis[si][sj] = true;
    counter++;

    for (int i = 0; i < 4; i++)
    {
        int ci = si + mov[i].first;
        int cj = sj + mov[i].second;

        if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == '.')
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
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            counter = 0;
            if (!vis[i][j] && grid[i][j] == '.')
            {
                dfs(i, j);
                mini = min(mini, counter);
            }
        }


    cout << mini << endl;
    return 0;
}