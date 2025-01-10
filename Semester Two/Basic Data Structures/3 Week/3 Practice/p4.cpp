#include <bits/stdc++.h>

using namespace std;

int main()
{
    list<int> linkedList;

    int T;
    cin >> T;
    while (T--)
    {
        int X, V;
        cin >> X >> V;
        if (X > linkedList.size())
        {
            cout << "Invalid" << endl;
        }
        else
        {
            linkedList.insert(next(linkedList.begin(), X), V);
            for (int x : linkedList)
            {
                cout << x << " ";
            }
            cout << endl;

            list<int> revList(linkedList);

            revList.reverse();
            for (int x : revList)
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }

    return 0;
}