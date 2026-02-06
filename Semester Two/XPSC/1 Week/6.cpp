/*
    || https://atcoder.jp/contests/abc071/tasks/abc071_b?lang=en
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int freq[26] = {0};
    for (char c : s)
    {
        freq[c - 'a']++;
    }

    char res;
    bool flag = false;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] == 0)
        {
            res = i + 'a';
            flag = true;
            break;
        }
    }

    if (flag)
        cout << res << endl;
    else
        cout << "None" << endl;

    return 0;
}