#include <bits/stdc++.h>

using namespace std;

char grid[105][105];
bool visTwoD[105][105];
vector<pair<int, int>> mov = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n, m;
int level[105][105];

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= n)
    {
        return false;
    }

    return true;
}

void bfsTwoD(int si, int sj)
{
    queue<pair<int, int>> qu;
    qu.push({si, sj});
    visTwoD[si][sj] = true;
    level[si][sj] = 0;

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

            if (!visTwoD[ci][cj] && valid(ci, cj) == true && grid[cj][cj] == '.')
            {
                qu.push({ci, cj});
                visTwoD[ci][cj] = true;
                level[ci][cj] = level[parI][parJ] + 1;
            }
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

    int si, sj, di, dj; // D for destination
    cin >> si >> sj >> di >> dj;
    memset(visTwoD, false, sizeof(visTwoD));
    memset(level, -1, sizeof(level));

    bfsTwoD(si, sj);
    cout << level[di][dj] << endl;
    return 0;
}