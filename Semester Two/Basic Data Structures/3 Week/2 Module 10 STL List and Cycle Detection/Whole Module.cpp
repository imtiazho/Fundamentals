#include <bits/stdc++.h>

using namespace std;

int main()
{
    /*
        || List Constructors
        // list<int> l;
        // list<int> l = {1, 2, 3, 4, 5};

        // list<int> l(10);
        // cout << l.size();

        // list<int> l(10, 3);
        // cout << *(l.begin());
        // for(auto it = l.begin(); it != l.end(); it++)
        // {
        //     cout << *it << " ";
        // }
        // for(int x : l)
        // {
        //     cout << x << " ";
        // }

        // list<int> l2(l);
        // for (int x : l2)
        // {
        //     cout << x << " ";
        // }

        // int arr[] = {1, 2, 3};
        // list<int> l(arr, arr + 3);

        // vector<int> V = {1, 2, 3};
        // list<int> l(V.begin(), V.end());
    */

    /*
        || List Capacity functions
        .
        list<int> l = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

        // cout << l.size();

        // cout << l.max_size();

        // l.clear();
        // cout << l.size();

        // cout << l.empty();

        // l.resize(15);
        l.resize(15, 100);
        // cout << l.size();
        for (int x : l)
        {
            cout << x << " ";
        }
    */

    /*
        || List Modifiers functions
        list<int> l = {1, 2, 3, 4, 5};
        list<int> l2;
        list<int> l3 = {11, 22, 33};
        vector<int> V = {11, 22, 33};

        // l2 = l;
        // l2.assign(l.begin(), l.end());

        // l.push_back(6);
        // l.push_front(100);

        // l.pop_back();
        // l.pop_front();

        // l.insert(next(l.begin(), 2), 100);
        // l.insert(next(l.begin(), 2), l3.begin(), l3.end());
        l.insert(next(l.begin(), 2), V.begin(), V.end());

        for (int val : l)
        {
            cout << val << " ";
        }
    */

    /*
        || List Modifiers functions II
        list<int> l = {1, 2, 3, 4, 4, 4, 5};
        list<int> l2;

        // l.erase(next(l.begin(), 3));
        // l.erase(next(l.begin(), 2), next(l.begin(), 4));

        // replace(l.begin(), l.end(), 4, 100);

        // for (int val : l)
        // {
        //     cout << val << " ";
        // }


        auto it = find(l.begin(), l.end(), 200);

        if(it == l.end())
        {
            cout << "not found";
        }
    */



    return 0;
}