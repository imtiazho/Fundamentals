// https://docs.google.com/document/d/1HM9iYXSivsLWDgeb0l4pVm0ycr9T8gIPV-5scKjV3oc/edit?tab=t.0
#include <bits/stdc++.h>

using namespace std;

int parent[100005];
int groupSize[100005];
int cmp, mx;

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
    if(leder1 == leder2)
    {
        return;
    }
    if (groupSize[leder1] >= groupSize[leder2])
    {
        parent[leder2] = leder1;
        groupSize[leder1] += groupSize[leder2];
        mx = max(mx, groupSize[leder1]);
    }
    else
    {
        parent[leder1] = leder2;
        groupSize[leder2] += groupSize[leder1];
        mx = max(mx, groupSize[leder2]);
    }

    cmp--;
}

int main()
{

    int n, e;
    cin >> n >> e;
    cmp = n;
    mx = 1;

    for (int i = 1; i <= n; i++)
    {
        parent[i] = -1;
        groupSize[i] = 1;
    }

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        
        dsuUnion(a, b);
        cout << cmp << " " << mx << endl;
    }

    return 0;
}