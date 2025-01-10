// https://docs.google.com/document/d/1McYLCx7BcrMBsqTCuioWK2FnopEBgXzG1B35Hfwlfzk/edit?tab=t.0
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

void printForward(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void printBackWard(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
}

void insertAthead(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }

    newNode->next = head;
    head->prev = newNode;

    head = newNode;
}

void insertAtTail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }

    tail->next = newNode;
    newNode->prev = tail;

    tail = newNode;
}

void insertAtAnyPosition(Node *&head, int val, int index)
{
    Node *newNode = new Node(val);

    Node *temp = head;
    for (int i = 1; i < index; i++)
    {
        temp = temp->next;
    }
    // Rn temp in on index - 1 position

    newNode->next = temp->next;
    temp->next->prev = newNode;

    temp->next = newNode;
    newNode->prev = temp;
}

void deleteAtHead(Node *&head, Node *&tail)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;

    if (head == NULL)
    {
        tail = NULL;
        return;
    }

    head->prev = NULL;
}

void deleteAtTail(Node *&head, Node *&tail)
{
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

void deleteAtAnyPosition(Node *head, int index)
{
    Node *temp = head;
    for (int i = 1; i < index; i++)
    {
        temp = temp->next;
    }

    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    deleteNode->next->prev = temp;

    delete deleteNode;
}

void takeInput(Node *&head, Node *&tail, int val)
{
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

int main()
{
    // Node *head = new Node(10);
    // Node *a = new Node(11);
    // Node *tail = new Node(12);

    // head->next = a;

    // a->prev = head;
    // a->next = tail;

    // tail->prev = a;

    // printBackWard(tail);
    // printForward(head);
    // insertAthead(head, tail, 100);
    // insertAtTail(head, tail, 100);
    // insertAtAnyPosition(head, 100, 2);
    // deleteAtHead(head, tail);
    // deleteAtTail(head, tail);
    // deleteAtAnyPosition(head, 1);

    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }

        takeInput(head, tail, val);
    }

    printForward(head);

    return 0;
}