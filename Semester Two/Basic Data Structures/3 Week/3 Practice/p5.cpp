#include <bits/stdc++.h>

using namespace std;

list<int> takeInput()
{
    list<int> newList;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        newList.push_back(val);
    }

    return newList;
}

int main()
{
    list<int> linkedList = takeInput();

    linkedList.sort(greater<>());

    for(int x : linkedList)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << *linkedList.begin();

    return 0;
}