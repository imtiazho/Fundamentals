/*
    || https://codeforces.com/problemset/problem/1907/B
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        vector<pair<int, char>> cap, sam, ans;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != 'b' && s[i] != 'B')
            {
                if (islower(s[i]))
                    sam.push_back({i, s[i]});
                else
                    cap.push_back({i, s[i]});
            }
            else
            {
                if (s[i] == 'B' && !cap.empty())
                    cap.pop_back();
                else if (s[i] == 'b' && !cap.empty())
                    sam.pop_back();
            }
        }

        for (int i = 0; i < sam.size(); i++)
            ans.push_back(sam[i]);
        for (int i = 0; i < cap.size(); i++)
            ans.push_back(cap[i]);

        sort(ans.begin(), ans.end());

        for (int i = 0; i < ans.size(); i++)
            cout << ans[i].second;
        cout << endl;
    }

    return 0;
}