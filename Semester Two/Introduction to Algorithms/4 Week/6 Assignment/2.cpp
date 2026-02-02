#include <bits/stdc++.h>

using namespace std;

int dp[35];

int teranacci(int n)
{
    int tera[n + 5];
    tera[0] = 0;
    tera[1] = 1;
    tera[2] = 1;
    tera[3] = 2;

    for (int i = 4; i <= n; i++)
    {
        tera[i] = tera[i - 1] + tera[i - 2] + tera[i - 3] + tera[i - 4];
    }

    return tera[n];
}

int main()
{
    int n;
    cin >> n;

    memset(dp, -1, sizeof(dp));
    cout << teranacci(n) << endl;

    return 0;
}