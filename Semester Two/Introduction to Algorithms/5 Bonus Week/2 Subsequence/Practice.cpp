#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Done Alhamdulillah
    return 0;
}

/*
    || LCS : The Longest Common Subsequence (LCS) is a classic computer science algorithm that finds the longest sequence of characters or elements that appear in the same relative order in two or more sequences, though not necessarily consecutively.

    #include <bits/stdc++.h>

    using namespace std;

    int dp[105][105];
    string a, b;

    int lcs(int i, int j)
    {
        if (i < 0 || j < 0)
            return 0;
        if (a[i] == b[j])
            return dp[i][j] = lcs(i - 1, j - 1) + 1;
        else
            return dp[i][j] = max(lcs(i - 1, j), lcs(i, j - 1));
    }

    int main()
    {
        cin >> a >> b;
        int n = a.size();
        int m = b.size();

        cout << lcs(n - 1, m - 1) << endl;
        return 0;
    }
*/

/*
    || Minimum Spanning Tree : It find minimum cost to reconstruct a tree again
    #include <bits/stdc++.h>

    using namespace std;

    int parent[100];
    int groupSize[100];

    int find(int node)
    {
        if (parent[node] == -1)
            return node;

        int leader = find(parent[node]);
        parent[node] = leader;

        return leader;
    }

    void dsuUnion(int node1, int node2)
    {
        int leader1 = find(node1);
        int leader2 = find(node2);

        if (groupSize[leader1] >= groupSize[leader2])
        {
            parent[leader2] = leader1;
            groupSize[leader1] += groupSize[leader2];
        }
        else
        {
            parent[leader1] = leader2;
            groupSize[leader2] += groupSize[leader1];
        }
    }

    class Edge
    {
    public:
        int a, b, c;

        Edge(int a, int b, int c)
        {
            this->a = a;
            this->b = b;
            this->c = c;
        }
    };

    bool cmp(Edge l, Edge r)
    {
        return l.c < r.c;
    }

    int main()
    {
        memset(parent, -1, sizeof(parent));
        memset(groupSize, 1, sizeof(groupSize));
        int n, e;
        cin >> n >> e;
        vector<Edge> edgeList;
        while (e--)
        {
            int a, b, c;
            cin >> a >> b >> c;
            edgeList.push_back(Edge(a, b, c));
        }

        sort(edgeList.begin(), edgeList.end(), cmp);

        int totalCost = 0;
        for (auto edge : edgeList)
        {
            int parA = find(edge.a);
            int parB = find(edge.b);

            if (parA != parB)
            {
                dsuUnion(edge.a, edge.b);
                totalCost += edge.c;
            }
        }

        cout << totalCost << endl;

        return 0;
    }
*/

// ..