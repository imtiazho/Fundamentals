#include <bits/stdc++.h>

using namespace std;

char grid[105][105];
bool visTwoD[105][105];
vector<pair<int, int>> mov = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n, m;

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
    {
        return false;
    }

    return true;
}

void dfsFor2D(int si, int sj)
{
    // Base Case
    // Auto off hoye jabee cause call korar agee amra check kore nicchi

    // Print kore dea
    cout << si << " ";
    visTwoD[si][sj] = true;

    // kaj kora
    for (int i = 0; i < 4; i++)
    {
        int ci, cj;
        ci = si + mov[i].first;
        cj = sj + mov[i].second;
        // cout << ci << " " << cj << endl; // PRINT FOR TESTING PURPOSE

        if (valid(ci, cj) == true && visTwoD[ci][cj] == false)
        {
            dfsFor2D(ci, cj);
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

    int si, sj;
    cin >> si >> sj;

    memset(visTwoD, false, sizeof(visTwoD));
    dfsFor2D(si, sj);
    return 0;
}