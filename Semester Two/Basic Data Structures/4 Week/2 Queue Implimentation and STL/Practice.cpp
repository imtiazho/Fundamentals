#include <bits/stdc++.h>

using namespace std;

class myQueue
{
public:
    list<int> l;

    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_front();
    }
    int front()
    {
        return l.front();
    }
    int back()
    {
        return l.back();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        return l.empty();
    }
};

int main()
{
    /*
        1. Push
        2. Pop
        3. Front
        4. Back
        5. Size
        6. Empty
    */

    myQueue q;

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
        cout << q.front() << endl;
        q.pop();
    }
    /*
        https://leetcode.com/problems/implement-stack-using-queues/description/

        https://leetcode.com/problems/implement-queue-using-stacks/description/
    */
    return 0;
}