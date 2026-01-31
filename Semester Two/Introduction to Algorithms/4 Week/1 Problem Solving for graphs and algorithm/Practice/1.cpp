/*
    || https://cses.fi/problemset/task/1676/
*/

#include <bits/stdc++.h>

using namespace std;

int parent[100005];
int gs[100005];
int cmp, mxG;

int find(int n)
{
    if (parent[n] == n)
    {
        return n;
    }

    int leader = find(parent[n]);
    parent[n] = leader;

    return leader;
}

void dsUnion(int node1, int node2)
{
    int leaderA = find(node1);
    int leaderB = find(node2);
    if (leaderA != leaderB)
    {
        if (gs[leaderA] >= gs[leaderB])
        {
            parent[leaderB] = leaderA;
            gs[leaderA] += gs[leaderB];
            mxG = max(mxG, gs[leaderA]);
        }
        else
        {
            parent[leaderA] = leaderB;
            gs[leaderB] += gs[leaderA];
            mxG = max(mxG, gs[leaderB]);
        }

        cmp--;
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    cmp = n;
    mxG = 1;
    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
        gs[i] = 1;
    }

    while (m--)
    {
        int a, b;
        cin >> a >> b;
        dsUnion(a, b);

        cout << cmp << " " << mxG << endl;
    }

    return 0;
}