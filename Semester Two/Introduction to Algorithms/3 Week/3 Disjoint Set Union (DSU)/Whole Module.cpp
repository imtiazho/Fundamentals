#include <bits/stdc++.h>

using namespace std;

int parent[1005];
int groupSize[1005];

int find(int node)
{
    cout << node << endl;
    if (parent[node] == -1)
    {
        return node;
    }

    int leader = find(parent[node]);
    parent[node] = leader;

    return leader;
}

void dsuUnion(int node1, int node2)
{
    int leder1 = find(node1);
    int leder2 = find(node2);

    if (groupSize[leder1] >= groupSize[leder2])
    {
        parent[leder2] = leder1;
        groupSize[leder1] += groupSize[leder2];
    }
    else
    {
        parent[leder1] = leder2;
        groupSize[leder2] += groupSize[leder1];
    }
}

int main()
{
    /*
        || Find operation implementation using loop
        .
        int parent[1005];
        int find(int node)
        {
            while (parent[node] != -1)
            {
                node = parent[node];
            }

            return node;
        }
        .
        memset(parent, -1, sizeof(parent));
        parent[0] = 1;
        parent[1] = -1;
        parent[2] = 1;
        parent[3] = 1;
        parent[4] = 5;
        parent[5] = 3;
        cout << find(4) << endl;

        || Find operation implementation using recursion
        int find(int node)
        {
            cout << node << endl;
            if (parent[node] == -1)
            {
                return node;
            }

            int leader = find(parent[node]);
            return leader;
        }
        .
        memset(parent, -1, sizeof(parent));
        parent[0] = 1;
        parent[1] = -1;
        parent[2] = 1;
        parent[3] = 1;
        parent[4] = 5;
        parent[5] = 3;

        cout << find(4) << endl;
    */

    /*
        || Find operation optimized || Only change in recursive function
        .
        int find(int node)
        {
            cout << node << endl;
            if (parent[node] == -1)
            {
                return node;
            }

            int leader = find(parent[node]);
            parent[node] = leader;

            return leader;
        }
    */

    /*
        || Union Operation on DSU
        int parent[1005];
        int groupSize[1005]
        
        void dsuUnion(int node1, int node2)
        {
            int leder1 = find(node1);
            int leder2 = find(node2);
        
            if (groupSize[leder1] >= groupSize[leder2])
            {
                parent[leder2] = leder1;
                groupSize[leder1] += groupSize[leder2];
            }
            else
            {
                parent[leder1] = leder2;
                groupSize[leder2] += groupSize[leder1];
            }
        }
    */

    /*
        || Detect cycle in undirected graph using DSU
    */

    memset(parent, -1, sizeof(parent));
    memset(groupSize, 1, sizeof(groupSize));

    int n, e;
    cin >> n >> e;

    bool cycle = false;
    while (e--)
    {
        int a, b;
        cin >> a >> b;

        int leaderA = find(a);
        int leaderB = find(b);
        if (leaderA == leaderB)
        {
            cycle = true;
        }
        else
        {
            dsuUnion(a, b);
        }
    }

    if (cycle)
        cout << "Cycle Detected" << endl;
    else
        cout << "No Cycle" << endl;

    return 0;
}
