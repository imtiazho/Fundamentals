/*
    || https://atcoder.jp/contests/abc191/tasks/abc191_b?lang=en
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{   
    // More shoter Version
    int n, x;
    cin >> n >> x;
    vector<int> V(n);
    while (n--)
    {
        int temp;
        cin >> temp;
        if (temp != x)
            cout << temp << " ";
    }

    return 0;
}

/*
    || One Approach
    #include <bits/stdc++.h>

    using namespace std;

    int main()
    {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int n, x;
        cin >> n >> x;
        vector<int> V(n);
        for(int i = 0; i < n; i++)
        {
            cin >> V[i];
        }

        vector<int> vPrime;
        for(int i = 0; i < n; i++)
        {
            if(V[i] != x)
            {
                vPrime.push_back(V[i]);
            }
        }

        for(int x : vPrime)
        {
            cout << x << " ";
        }

        return 0;
    }
*/

/*
    || Another Approach
    #include <bits/stdc++.h>

    using namespace std;

    int main()
    {
        int n, x;
        cin >> n >> x;
        vector<int> V(n);
        for (int &x : V)
            cin >> x;

        V.erase(remove(V.begin(), V.end(), x), V.end());

        for (int x : V)
        {
            cout << x << " ";
        }

        return 0;
    }
*/

// ...