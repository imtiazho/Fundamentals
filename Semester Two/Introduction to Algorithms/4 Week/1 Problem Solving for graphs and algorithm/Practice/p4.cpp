#include <bits/stdc++.h>

using namespace std;

char grid[35][35];
bool visTwoD[35][35];
vector<pair<int, int>> mov;
int n;
int dis[105][105];

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
    dis[si][sj] = 0;

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

            if (!visTwoD[ci][cj] && valid(ci, cj) == true && grid[cj][cj] != 'T')
            {
                qu.push({ci, cj});
                visTwoD[ci][cj] = true;
                dis[ci][cj] = dis[parI][parJ] + 1;
            }
        }
    }
}

int main()
{
    // This is only for older online judge. It cant understand dynamic initialization system in direction system. and it can recognize >> so we give them a space > > like this.
    mov.push_back({-1, 0});
    mov.push_back({1, 0});
    mov.push_back({0, -1});
    mov.push_back({0, 1});

    int si, sj, di, dj;
    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> grid[i][j];
                if (grid[i][j] == 'S')
                {
                    si = i;
                    sj = j;
                }
                else if (grid[i][j] == 'E')
                {
                    di = i;
                    dj = j;
                }
            }
        }

        memset(visTwoD, false, sizeof(visTwoD));
        memset(dis, -1, sizeof(dis));

        bfsTwoD(si, sj);
        cout << dis[di][dj] << endl;
    }
    return 0;
}