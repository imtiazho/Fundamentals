// Question: Take two stacks of size N and M as input and check if both of them are the same or not. Don’t use STL to solve this problem

#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int val;
    Node *prev;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }

        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    void pop()
    {
        if (tail == NULL)
        {
            return;
        }
        sz--;
        Node *deleteNode = tail;
        tail = tail->prev;
        delete deleteNode;
        if (tail == NULL)
        {
            head = NULL;
            return;
        }
        tail->next = NULL;
    }

    int top()
    {
        if (tail == NULL)
        {
            return -1;
        }
        return tail->val;
    }

    int getSize()
    {
        return sz;
    }

    int empty()
    {
        return head == NULL;
    }
};

void checkSimilar(myStack st1, myStack st2)
{
    if (st1.getSize() != st2.getSize())
    {
        cout << "NO" << endl;
        return;
    }

    int flag = 1;
    while (!st1.empty())
    {
        if (st1.top() != st2.top())
        {
            flag = 0;
        }
        st1.pop();
        st2.pop();
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
    myStack st1, st2;

    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        st1.push(x);
    }

    int M;
    cin >> M;
    for (int i = 0; i < M; i++)
    {
        int x;
        cin >> x;
        st2.push(x);
    }

    checkSimilar(st1, st2);
    return 0;
}