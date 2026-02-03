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
    // for (auto edge : edgeList)
    // {
    //     cout << edge.a << " " << edge.b << " " << edge.c << endl;
    // }

    return 0;
}

/*
    || Longest Common Subsequence with DP
    #include <bits/stdc++.h>

    using namespace std;

    int dp[1005][1005];

    string a, b;

    int lcs(int i, int j)
    {
        if (i < 0 || j < 0)
            return 0;

        if(dp[i][j] != -1) return dp[i][j];

        if (a[i] == b[j])
        {
            int op1 = lcs(i - 1, j - 1) + 1;
            return dp[i][j] = op1;
        }
        else
        {
            int op1 = lcs(i - 1, j);
            int op2 = lcs(i, j - 1);

            return dp[i][j] = max(op1, op2);
        }
    }

    int main()
    {
        memset(dp, -1, sizeof(dp));
        cin >> a >> b;
        int n = a.size();
        int m = b.size();

        cout << lcs(n - 1, m - 1) << endl;

        return 0;
    }
*/

/*
    || Minimum Spanning Tree : Krushkal's Algorithm

*/

/*
    || Unknow Code found in File
    #include <iostream>
    #include <string>
    #include <vector>

    using namespace std;

    int CountSubSeq(string &S, string &T) {
        int n = S.size(), m = T.size();
        vector<vector<long long>> dp(n + 1, vector<long long>(m + 1, 0));

        // Base case: If T is empty, there's always one subsequence (the empty subsequence)
        for (int i = 0; i <= n; i++) {
            dp[i][0] = 1;
        }

        // Iterate through the strings to populate the dp table
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                // Case 1: If the current characters don't match, the number of subsequences
                // of T in S[0...i-1] is the same as the number of subsequences of T
                // in S[0...i-2].
                dp[i][j] = dp[i - 1][j];

                // Case 2: If the current characters match, we have two options:
                //   a) Don't include S[i-1] in the subsequence. In this case, the number of
                //      subsequences is the same as dp[i-1][j].
                //   b) Include S[i-1] in the subsequence. In this case, we need to find the
                //      number of subsequences of T[0...j-2] in S[0...i-2], which is given
                //      by dp[i-1][j-1].
                if (S[i - 1] == T[j - 1]) {
                    dp[i][j] += dp[i - 1][j - 1];
                }
            }
        }

        // The final result is the number of subsequences of T in S
        return dp[n][m];
    }

    int main() {
        string S = "ababcc";
        string T = "abc";
        int count = CountSubSeq(S, T);
        cout << "Number of subsequences of '" << T << "' in '" << S << "': " << count << endl;

        string S2 = "rabbbit";
        string T2 = "rabbit";
        int count2 = CountSubSeq(S2, T2);
        cout << "Number of subsequences of '" << T2 << "' in '" << S2 << "': " << count2 << endl;

        string S3 = "banana";
        string T3 = "ban";
        int count3 = CountSubSeq(S3, T3);
        cout << "Number of subsequences of '" << T3 << "' in '" << S3 << "': " << count3 << endl;

        return 0;
    }
*/

// ...