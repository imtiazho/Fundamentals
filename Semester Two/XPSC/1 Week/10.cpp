/*
    || https://codeforces.com/problemset/problem/621/A
*/

#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    int n;
    cin >> n;
    vector<ll> V(n);
    ll sum = 0;
    for (ll &i : V)
    {
        cin >> i;
        sum += i;
    }

    sort(V.begin(), V.end());

    if (sum % 2 == 0)
        cout << sum << endl;
    else
    {
        for (ll x : V)
        {
            if (x % 2 != 0)
            {
                sum -= x;
                break;
            }
        }

        if (sum % 2 == 0)
        {
            cout << sum << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}

// ...