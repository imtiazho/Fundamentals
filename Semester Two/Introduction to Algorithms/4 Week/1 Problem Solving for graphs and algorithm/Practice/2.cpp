/*
    || https://codeforces.com/contest/25/problem/D
*/

#include <bits/stdc++.h>

using namespace std;

int parent[1005];
vector<pair<int, int>> edgeTobeRemove;

int find(int n)
{
    if (parent[n] == n)
        return n;
    return parent[n] = find(parent[n]);
}

void dsUnion(int node1, int node2)
{
    int leaderA = find(node1);
    int leaderB = find(node2);

    if (leaderA != leaderB)
        parent[leaderA] = leaderB;
    else
        edgeTobeRemove.push_back({node1, node2});
}

int main()
{
    int n;
    cin >> n;

    int m = n - 1;
    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
    }

    while (m--)
    {
        int a, b;
        cin >> a >> b;
        dsUnion(a, b);
    }

    vector<int> leaders;
    for (int i = 1; i <= n; i++)
        if (parent[i] == i)
            leaders.push_back(i);

    cout << leaders.size() - 1 << endl;
    for (int i = 0; i < leaders.size() - 1; i++)
    {
        cout << edgeTobeRemove[i].first << " " << edgeTobeRemove[i].second << " " << leaders[i] << " " << leaders[i + 1] << endl;
    }
    return 0;
}