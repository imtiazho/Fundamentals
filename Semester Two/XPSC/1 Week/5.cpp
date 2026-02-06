/*
    || https://atcoder.jp/contests/abc125/tasks/abc125_a?lang=en
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, t;
    cin >> a >> b >> t;

    int biscuits = 0;
    for (int i = 1, j = a; j <= t + 0.5; i++, j = i * a)
    {
        biscuits = i * b;
    }

    cout << biscuits << endl;

    return 0;
}

/*
    || Another Soln
    #include <bits/stdc++.h>

    using namespace std;

    int main()
    {
        int A, B, T, biscuits = 0;
        cin >> A >> B >> T;

        for (int i = 1; A * i <= T + 0.5; i++)
        {
            biscuits += B;
        }

        cout << biscuits;

        return 0;
    }
*/