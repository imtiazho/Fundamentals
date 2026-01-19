/*
    Problem Statement: You are given row x col grid representing a map where grid[i][j] = 1 represents land and grid[i][j] = 0 represents water. Grid cells are connected horizontally/vertically (not diagonally). The grid is completely surrounded by water, and there is exactly one island (i.e., one or more connected land cells). The island doesn't have "lakes", meaning the water inside isn't connected to the water around the island. One cell is a square with side length 1. The grid is rectangular, width and height don't exceed 100. Determine the perimeter of the island.


*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    class Solution
    {
    public:
        int counter = 0;
        bool vis[105][105];
        vector<pair<int, int>> mov = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        int n, m;

        bool valid(int i, int j)
        {
            if (i < 0 || i >= n || j < 0 || j >= m)
                return false;

            return true;
        }

        void dfs(int si, int sj, vector<vector<int>> &grid)
        {
            vis[si][sj] = true;

            for (int i = 0; i < 4; i++)
            {
                int ci, cj;
                ci = si + mov[i].first;
                cj = sj + mov[i].second;

                if (!valid(ci, cj) || valid(ci, cj) && grid[ci][cj] == 0)
                    counter++;

                else if (!vis[ci][sj] && valid(ci, cj) && grid[ci][cj] == 1)
                {
                    dfs(ci, cj, grid);
                }
            }
        }

        int islandPerimeter(vector<vector<int>> &grid)
        {
            n = grid.size();
            m = grid[0].size();
            memset(vis, false, sizeof(vis));

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if (grid[i][j] == 1 && !vis[i][j])
                    {
                        dfs(i, j, grid);
                    }
                }
            }

            // cout << counter << "End";
            return counter;
        }
    };

    return 0;
}