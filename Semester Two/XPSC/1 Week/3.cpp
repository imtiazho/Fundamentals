/*
    || https://atcoder.jp/contests/abc124/tasks/abc124_a
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    if (a > b)
        cout << a + (a - 1) << endl;
    else if (b > a)
        cout << b + (b - 1) << endl;
    else if (a == b)
        cout << a + b << endl;

    return 0;
}