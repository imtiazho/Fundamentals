#include <bits/stdc++.h>

using namespace std;

int find(int node, int parent[])
{
    if (parent[node] == node)
        return node;

    int leader = find(parent[node], parent);
    parent[node] = leader;

    return leader;
}

void dsUnion(int node1, int node2, int parent[], int &cyclePathCounter)
{
    int leaderA = find(node1, parent);
    int leaderB = find(node2, parent);

    if (leaderA != leaderB)
    {
        parent[leaderB] = leaderA;
    }
    else
    {
        cyclePathCounter++;
    }
}

int main()
{
    int n, m, cyclePathCounter = 0;
    cin >> n >> m;
    int parent[n + 5];

    for (int i = 1; i <= n; i++)
        parent[i] = i;

    while (m--)
    {
        int a, b;
        cin >> a >> b;
        dsUnion(a, b, parent, cyclePathCounter);
    }

    cout << cyclePathCounter << endl;
    
    return 0;
}