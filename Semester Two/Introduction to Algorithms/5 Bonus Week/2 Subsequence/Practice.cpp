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

/*
    || LCS : The Longest Common Subsequence (LCS) is a classic computer science algorithm that finds the longest sequence of characters or elements that appear in the same relative order in two or more sequences, though not necessarily consecutively.
*/