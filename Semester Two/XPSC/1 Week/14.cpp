/*
    || https://codeforces.com/contest/1883/problem/B 
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int freq[26] = {0};
        for (int i = 0; i < n; i++)
        {
            freq[s[i] - 'a']++;
        }

        int oddCounter = 0;
        for (int i = 0; i < 26; i++)
        {
            oddCounter += freq[i] % 2;
        }

        cout << (oddCounter - 1 <= k ? "YES" : "NO") << endl;
    }

    return 0;
}