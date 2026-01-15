/*
    || Problem Statement: You will be given an undirected graph as input. Then you will be given a node N. You need to print the number of nodes that are directly connected to the node N.
*/

#include <bits/stdc++.h>

using namespace std;

vector<int> adjMatrix[105];

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adjMatrix[a].push_back(b);
        adjMatrix[b].push_back(a);
    }

    int N, counter = 0;
    cin >> N;
    for (int x : adjMatrix[N])
    {
        counter++;
    }
    cout << counter << endl;
    return 0;
}