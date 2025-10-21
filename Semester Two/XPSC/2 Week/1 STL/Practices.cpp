#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<int, int> mp;

    mp.insert({10, 20});
    // cout << mp[10] << endl;

    mp[30] = 40;
    // cout << mp[30] << endl;

    auto it = mp.find(444);
    if(it ==mp.end())
    {
        cout << "NO";
    }    
    else {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}