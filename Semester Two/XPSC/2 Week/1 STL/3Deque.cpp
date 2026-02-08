#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    deque<int> dq;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        dq.push_back(x);
        // cin >> dq[i];
    }

    dq.push_front(3);
    dq.push_front(5);

    sort(dq.begin(), dq.end());

    for (auto value : dq)
    {
        cout << value << " ";
    }

    dq.pop_front();

    // pop_front(), pop_back(), push_front(), push_back(), back(), front()
    return 0;
}