/*
    || https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/W
*/

// Soln Break down: It basically work with true and false value. In recursive process it gives you true or false value in the result then basis on this you can move next or return.

#include <bits/stdc++.h>

using namespace std;

map<long long int, bool> dp;

bool canReach(long long int target, long long int current)
{
    if (current == target)
        return true;
    if (current > target)
        return false;

    if (dp.count(current))
    {
        return dp[current];
    }

    bool res = canReach(target, current * 10) || canReach(target, current * 20);
    dp[current] = res;

    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;

        dp.clear();
        if (canReach(n, 1))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}