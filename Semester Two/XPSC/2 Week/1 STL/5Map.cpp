#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<int, int> mp; // Contain unique value. It work with key - value pair. It store value in sorted way basis on key.

    // Assign system
    // mp.insert({10, 20});
    // mp.insert({2, 10});
    // cout << mp[10] << endl;
    // cout << mp[2] << endl;

    // Another system of assign
    // mp[10] = 20;
    // mp[12] = 33;
    // mp[10] = 2;
    // mp[3] = 2; // Last value it hold and replace first value of same key to make it unique.
    // cout << mp[10] << endl;

    // Way to print
    // for(auto [key, value] : mp)
    // {
    //     cout << key << " -> " << value << endl;
    // }

    // another way to print
    // for(auto it : mp)
    // {
    //     cout << it.first << " -> " << it.second << endl;
    // }

    // FIND
    // auto it = mp.find(1033);
    // // cout << it->first << " " << it->second << endl; if item is not present in mp then it gives 0. Its a problem that it assign 0 to 222(target key). then it increase complexity

    // if(it==mp.end()){
    //     cout << "NO";
    // }
    // else{
    //     cout << it->first << " " << it->second << endl;
    // }

    // Another way to find out
    // cout << mp[222] << endl; // It gives 0 when item is not present in map. Its a problem that it assign 0 to 222(target key). then it increase complexity

    // Erase
    // mp.erase(3);
    // for(auto it : mp)
    // {
    //     cout << it.first << " -> " << it.second << endl;
    // }

    // auto it = mp.find(3);
    // if(it != mp.end())
    // {
    //     mp.erase(it);
    // }

    // // check
    // for(auto it : mp)
    // {
    //     cout << it.first << " -> " << it.second << endl;
    // }

    // Size and Empty
    // cout << mp.size() << endl;
    // cout << mp.empty() << endl;

    // Begin
    // auto it = mp.begin();
    // it++; // if we want to traverse whole map
    // cout << it->first << " " << it->second << endl;

    // Lower bound
    // for (auto it : mp)
    // {
    //     cout << it.first << " -> " << it.second << endl;
    // }

    // auto it = mp.lower_bound(6); // hold greater or equal of targeted
    // cout << it->first << " " << it->second << endl;

    // Upper Bound
    // auto it = mp.upper_bound(6); // hold greater or equal of targeted
    // cout << it->first << " " << it->second << endl;

    return 0;
}