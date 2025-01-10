// Question: Take a stack of size N as input and copy those elements to another stack to get the values in the order they were inserted and print them. You should use STL to solve this problem.
#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> st1;
    stack<int> st2;

    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        st1.push(x);
    }

    while (!st1.empty())
    {
        st2.push(st1.top());
        st1.pop();
    }

    while (!st2.empty())
    {
        cout << st2.top() << " ";
        st2.pop();
    }

    return 0;
}