#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> mov = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
char grid[100][100];
bool vis[100][100];
pair<int, int> parent[100][100];
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

    while (!qu.empty())
    {
        pair<int, int> par = qu.front();
        qu.pop();
        int parI = par.first;
        int parJ = par.second;

        for (int i = 0; i < 4; i++)
        {
            int ci = parI + mov[i].first;
            int cj = parJ + mov[i].second;

            if (valid(ci, cj) && !vis[ci][cj] && (grid[ci][cj] == '.' || grid[ci][cj] == 'R' || grid[ci][cj] == 'D'))
            {
                vis[ci][cj] = true;
                qu.push({ci, cj});
                parent[ci][cj] = {parI, parJ};
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    int si, sj, di, dj;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'R')
            {
                si = i;
                sj = j;
            }
            if (grid[i][j] == 'D')
            {
                di = i;
                dj = j;
            }
        }
    }

    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));

    bfs(si, sj);
    if (!vis[di][dj])
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << grid[i][j];
            }
            cout << endl;
        }
        return 0;
    }
    else{
        // while(1)
        // {
        //     pair<int, int> par = parent[di][dj];
        //     int i = par.first;
        //     int j = par.second;

        //     if(grid[i][j] == 'R')
        //     {
        //         break;
        //     }


        // }


    }

    return 0;
}