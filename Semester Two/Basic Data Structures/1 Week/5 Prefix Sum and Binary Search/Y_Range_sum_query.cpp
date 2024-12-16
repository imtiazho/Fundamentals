#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;

    vector<long long int> V(N + 1);
    for (int i = 1; i <= N; i++)
    {
        cin >> V[i];
    }

    vector<long long int> prefix(N + 1);
    prefix[1] = V[1];
    for (int i = 2; i <= N; i++)
    {
        prefix[i] = prefix[i - 1] + V[i];
    }

    while (Q--)
    {
        int l, r;
        cin >> l >> r;
        long long int sum;
        if (l == 1)
        {
            sum = prefix[r];
        }
        else
        {
            sum = prefix[r] - prefix[l - 1];
        }
        // for(int i = l; i <= r; i++)
        // {
        //     sum += V[i];
        // } 
        cout << sum << endl;
    }

    return 0;
}