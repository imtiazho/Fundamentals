/*
    || https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/W
*/

#include <bits/stdc++.h>

using namespace std;

bool canReach(long long int target, long long int current)
{
    if (current == target)
        return true;
    if (current > target)
        return false;

    bool callForTen = canReach(target, current * 10);
    bool callForTwenty = canReach(target, current * 20);

    return callForTen || callForTwenty;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;

        if (canReach(n, 1))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}