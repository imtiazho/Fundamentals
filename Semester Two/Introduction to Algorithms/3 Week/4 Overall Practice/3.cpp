#include <bits/stdc++.h>

using namespace std;

int parent[100];
int groupSize[100];

int findLeader(int node)
{
    if (parent[node] == -1)
    {
        return node;
    }

    int leader = findLeader(parent[node]);

    return leader;
}

void dsu_union(int a, int b)
{
    int leaderA = findLeader(a);
    int leaderB = findLeader(b);

    if (groupSize[a] >= groupSize[b])
    {
        parent[b] = leaderA;
        groupSize[a] += groupSize[b];
    }
    else
    {
        parent[a] = leaderB;
        groupSize[b] += groupSize[a];
    }
}

int main()
{
    memset(parent, -1, sizeof(parent));
    memset(groupSize, 1, sizeof(groupSize));

    int n, e;
    cin >> n >> e;
    bool cycle = false;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int leaderA = findLeader(a);
        int leaderB = findLeader(b);

        if (leaderA == leaderB)
        {
            cycle = true;
        }
        else
        {
            dsu_union(a, b);
        }
    }

    if (cycle)
    {
        cout << "Cycle Detected" << endl;
    }
    else{
        for(int i = 0; i < n; i++)
        {
            cout << i << " -> " << parent[i] << endl;
        }
    }
    

    return 0;
}