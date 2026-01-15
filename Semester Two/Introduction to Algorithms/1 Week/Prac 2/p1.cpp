/*
    || Problem Statement: You are given a map of a building, and your task is to count the number of its rooms. The size of the map is n \ times m squares, and each square is either floor or wall. You can walk left, right, up, and down through the floor squares.
    Input
    The first input line has two integers n and m: the height and width of the map.
    Then there are n lines of m characters describing the map. Each character is either . (floor) or # (wall).
    Output
    Print one integer: the number of rooms.

*/
#include <bits/stdc++.h>

using namespace std;

char grid[1005][1005];
bool vis[1005][1005];
vector<pair<int, int>> mov = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n, m;

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

    int counter = 0;
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