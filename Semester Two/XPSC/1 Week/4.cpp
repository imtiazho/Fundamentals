/*
    || https://atcoder.jp/contests/abc222/tasks/abc222_a?lang=en
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    string s = to_string(n);
    for(int i = 0; i < 4 - s.length(); i++)
    {
        cout << '0';
    }
    cout << s;

    return 0;
}