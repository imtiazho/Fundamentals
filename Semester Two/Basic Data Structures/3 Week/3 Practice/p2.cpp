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

void checkPalindrome(list<int> list)
{
    for(int x : list)
    {
        cout << x << " ";
    }
}

int main()
{
    list<int> listOne;

    listOne = takeInput();
    listOne.reverse();
    
    checkPalindrome(listOne);
    
    return 0;
}