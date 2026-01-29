/*
    || Byteland has n cities, and m roads between them. The goal is to construct new roads so that there is a route between any two cities.
    Your task is to find out the minimum number of roads required, and also determine which roads should be built.
    Input
    The first input line has two integers n and m: the number of cities and roads. The cities are numbered 1,2,\dots,n.
    After that, there are m lines describing the roads. Each line has two integers a and b: there is a road between those cities.
    A road always connects two different cities, and there is at most one road between any two cities.
    Output
    First print an integer k: the number of required roads.
    Then, print k lines that describe the new roads. You can print any valid solution.
*/

#include <bits/stdc++.h>

using namespace std;

int parent[200005];
int groupSize[200005];

int find(int node)
{
    if (parent[node] == -1)
    {
        return node;
    }

    int leader = find(parent[node]);
    parent[node] = leader;

    return leader;
}

void dsunion(int a, int b)
{
    int leaderA = find(a);
    int leaderB = find(b);

    if (leaderA != leaderB)
    {
        if (groupSize[leaderA] >= groupSize[leaderB])
        {
            parent[leaderB] = leaderA;
            groupSize[leaderA] += groupSize[leaderB];
        }
        else
        {
            parent[leaderA] = leaderB;
            groupSize[leaderB] += groupSize[leaderA];
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        parent[i] = -1;
        groupSize[i] = 1;
    }

    while (m--)
    {
        int a, b;
        cin >> a >> b;
        dsunion(a, b);
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
        cout << leaders[i] << " " << leaders[i + 1] << endl;
    }

    return 0;
}