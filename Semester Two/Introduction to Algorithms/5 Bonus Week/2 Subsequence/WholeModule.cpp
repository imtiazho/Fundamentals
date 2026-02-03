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

/*
    || Largest count subsequence
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