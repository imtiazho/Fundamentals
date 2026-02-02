#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> grid;

    for (int i = 0; i < n; i++)
    {
        vector<int> temp(i + 1, 1);
        for (int j = 1; j < i; j++)
        {
            temp[j] = grid[i - 1][j - 1] + grid[i - 1][j]; 
        }
        grid.push_back(temp);
    }

    for (int i = 0; i < n; i++)
    {
        for (int x : grid[i])
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}