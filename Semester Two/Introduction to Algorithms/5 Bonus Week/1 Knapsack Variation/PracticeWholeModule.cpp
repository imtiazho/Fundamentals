#include <bits/stdc++.h>

using namespace std;

int val[105];

bool findSubsetSum(int i, int sum)
{
    if (i < 0)
    {
        return sum == 0;
    }

    if (val[i] <= sum)
    {
        return findSubsetSum(i - 1, sum - val[i]) || findSubsetSum(i - 1, sum);
    }
    else
    {
        return findSubsetSum(i - 1, sum);
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> val[i];

    int sum;
    cin >> sum;
    if (findSubsetSum(n - 1, sum))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    return 0;
}