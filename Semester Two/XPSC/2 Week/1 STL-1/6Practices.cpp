#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<int, int> mp;
    mp[10] = 20;
    mp[12] = 33;
    mp[13] = 2;
    mp[8] = 5;
    mp[7] = 4;
    auto it = mp.upper_bound(6); 
    cout << it->first << " " << it->second << endl;
    return 0;
}