// Question: Take a queue of size N as input. You need to copy those elements in another queue in reverse order. You might use stack here. You should use STL to solve this problem. After copying in another queue, print the elements of that queue.

#include <bits/stdc++.h>

using namespace std;

int main()
{
    queue<int> q;
    queue<int> q2;
    stack<int> st;

    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    while (!q.empty())
    {
        st.push(q.front());
        q.pop();
    }

    while (!st.empty())
    {   
        q2.push(st.top());
        st.pop();
    }

    while (!q2.empty())
    {   
        cout << q2.front() << " ";
        q2.pop();
    }

    return 0;
}