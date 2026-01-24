#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> mov = {{2, -1}, {1, -2}, {-1, -2}, {-2, -1}, {-2, 1}, {2, 1}, {1, 2}, {-1, 2}};
bool vis[100][100];
int level[100][100];
int n, m;

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> qu;
    qu.push({si, sj});
    vis[si][sj] = true;
    level[si][sj] = 0;

    while (!qu.empty())
    {
        pair<int, int> par = qu.front();
        int parI = par.first;
        int parJ = par.second;
        qu.pop();

        for (int i = 0; i < 8; i++)
        {
            int ci = parI + mov[i].first;
            int cj = parJ + mov[i].second;

            if (valid(ci, cj) && !vis[ci][cj])
            {
                qu.push({ci, cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[parI][parJ] + 1;
            }
        }
    }

    // vis[si][sj] = true;

    // for (int i = 0; i < 4; i++)
    // {
    //     int ci = si + mov[i].first;
    //     int cj = sj + mov[i].second;

    //     if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == '.')
    //     {
    //         dfs(ci, cj);
    //     }
    // }
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        cin >> n >> m;
        int si, sj, di, dj;
        cin >> si >> sj >> di >> dj;

        memset(level, -1, sizeof(level));
        memset(vis, false, sizeof(vis));

        bfs(si, sj);

        cout << level[di][dj] << endl;
    }
    return 0;
}