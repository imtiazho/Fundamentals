/*
    || https://atcoder.jp/contests/abc172/tasks/abc172_b
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // More shorter version
    string s1, s2;
    cin >> s1 >> s2;

    int cnt = 0;
    for (int i = 0; i < s1.length(); ++i)
        cnt += s1[i] != s2[i];
        
    cout << cnt << endl;

    return 0;
}

/*
    || First way
    #include <bits/stdc++.h>

    using namespace std;

    int main()
    {
        string S, T;
        cin >> S >> T;

        int counter = 0;
        for (int i = 0; i < S.length(); i++)
        {
            if (S[i] != T[i])
            {
                counter++;
            }
        }

        cout << counter << endl;
        return 0;
    }
*/

// ...