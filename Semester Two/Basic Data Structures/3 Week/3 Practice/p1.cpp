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

void checkSimilar(list<int> listOne, list<int> listTwo)
{
    if (listOne.size() != listTwo.size())
    {
        cout << "NO" << endl;
    }
    else
    {
        list<int>::iterator itOne = listOne.begin();
        list<int>::iterator itTwo = listTwo.begin();

        bool flag = true;
        while (itOne != listOne.end())
        {
            if (*itOne != *itTwo)
            {
                flag = false;
                break;
            }
            itOne++;
            itTwo++;
        }
        if (flag)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
}

int main()
{
    list<int> listOne, listTwo;

    listOne = takeInput();
    listTwo = takeInput();


    checkSimilar(listOne, listTwo);

    return 0;
}