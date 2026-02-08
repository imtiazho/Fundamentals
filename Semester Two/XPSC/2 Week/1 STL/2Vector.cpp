#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // vector<int> v(2);
    // vector<int> v;
    // for (int i = 0; i < 2; i++)
    // {
    //     // cin >> v[i];
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }

    // cout << v.size();
    // // v.pop_back();
    // cout << v.size();
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << endl;
    // }

    // Clear all the data
    // v.clear();

    // Check empty or not
    // cout << v.empty() << endl;

    // vector<int> v(10);
    // vector<int> v(10, 5);

    // vector<int> v;
    // v.assign(3, 5);

    // vector<int> v;
    // v.resize(3);
    // cout << v.size() << endl;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cin >> v[i];
    // }
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << endl;
    // }

    // vector<int> v;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cin >> v[i];
    // }
    // auto it = v.begin();
    // auto it = v.begin() + 1;
    // cout << *it << endl;
    // for (auto it = v.begin(); it != v.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    vector<int> v;
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    // auto lastElement = v.end();
    // lastElement--;
    // cout << *lastElement << endl;

    // reverse(v.begin(), v.end());
    // sort( v.begin(), v.end());
    auto mn = min_element(v.begin(), v.end());
    auto mx = max_element(v.begin(), v.end());

    // how to find max element positon by iterator
    int maxElementPosition = mx - v.begin();
    cout << maxElementPosition << endl;

    return 0;
}