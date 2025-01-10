// Question: Take a stack of size N and a queue of size M as input. Then check if both of them are the same or not in the order of removing. You should use STL to solve this problem.
#include <bits/stdc++.h>

using namespace std;

void similar(stack<int> s, queue<int> q)
{
    if (s.size() != q.size())
    {
        cout << "NO" << endl;
        return;
    }

    bool flag = true;
    while (!s.empty())
    {
        if (s.top() != q.front())
        {
            flag = 0;
            break;
        }
        s.pop();
        q.pop();
    }

    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    stack<int> st;
    queue<int> qu;

    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    int M;
    cin >> M;
    for (int i = 0; i < M; i++)
    {
        int x;
        cin >> x;
        qu.push(x);
    }

    similar(st, qu);

    return 0;
}