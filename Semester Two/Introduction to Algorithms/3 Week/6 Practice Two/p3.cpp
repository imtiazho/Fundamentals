/*
    || https://codeforces.com/problemset/problem/25/D
*/

#include <bits/stdc++.h>

using namespace std;

int parent[1005];
vector<pair<int, int>> extraRoad;

int find(int node)
{
    if (parent[node] == -1)
        return node;

    int leader = find(parent[node]);
    parent[leader];

    return leader;
}

void unionds(int node1, int node2)
{
    int leaderA = find(node1);
    int leaderB = find(node2);

    if (leaderA != leaderB)
    {
        parent[leaderA] = leaderB;
    }
    else
    {
        extraRoad.push_back({node1, node2});
    }
}

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
        parent[i] = -1;

    int e = n - 1;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        unionds(a, b);
    }

    vector<int> leaders;
    for (int i = 1; i <= n; i++)
    {
        if (parent[i] == -1)
            leaders.push_back(i);
    }

    cout << leaders.size() - 1 << endl;
    for (int i = 0; i < leaders.size() - 1; i++)
    {
        cout << extraRoad[i].first << " " << extraRoad[i].second << " " << leaders[i] << " " << leaders[i + 1] << endl;
    }

    return 0;
}