// https://docs.google.com/document/d/1d4y8Wvrpquz4vnHq348WiXNTQ7W4wk8GVA94NSnOE88/edit?usp=drivesdk

#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void createNewNode(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void printLinkedList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    /*
        || Delete at head
        .
        void createNewNode(Node *&head, Node *&tail, int val)
        {
            Node *newNode = new Node(val);
            if (head == NULL)
            {
                head = newNode;
                tail = newNode;
                return;
            }
            tail->next = newNode;
            tail = newNode;
        }

        void printLinkedList(Node *head)
        {
            Node *temp = head;
            while (temp != NULL)
            {
                cout << temp->val << " ";
                temp = temp->next;
            }
        }

        void deleteAtHead(Node *&head)
        {
            Node *deleteNode = head;
            head = head->next;
            delete deleteNode;
        }
        .
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
            createNewNode(head, tail, val);
        }

        deleteAtHead(head);

        printLinkedList(head);
    */

    /*
         || Delete at any position
         void deleteAtAnyPosition(Node *head, int index)
         {
             Node *temp = head;
             for(int i = 1; i < index; i++)
             {
                 temp = temp->next;
             }
             // now temp rn at before deleted element
             Node *deleteNode = temp->next;
             temp->next = temp->next.next;
             delete deleteNode;
         }
         .
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
             createNewNode(head, tail, val);
         }

         deleteAtAnyPosition(head, 2);

         printLinkedList(head);
    */

    /*
         || Delete at tail
         void deleteAtTail(Node *head, Node *&tail, int index)
        {
            Node *temp = head;
            for (int i = 1; i < index; i++)
            {
                temp = temp->next;
            }
            // now temp rn at before tail
            Node *deleteNode = temp->next;
            temp->next = temp->next->next;
            delete deleteNode;
            tail = temp;
        }
        .
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
            createNewNode(head, tail, val);
        }

        cout << tail->val << endl;
        deleteAtTail(head, tail, 3);
        printLinkedList(head);
        cout << tail->val << endl;
    */

    /*
        || Sorting an array with selection sort
        int N;
        cin >> N;
        int Arr[N];
        for(int i = 0; i < N; i++)
        {
            cin >> Arr[i];
        }

        for(int i = 0; i < N - 1; i++)
        {
            for(int j = i + 1; j < N; j++)
            {
                if(Arr[i] > Arr[j])
                {
                    swap(Arr[i], Arr[j]);
                }
            }
        }

        for(int i = 0; i < N; i++)
        {
            cout << Arr[i] << " ";
        }
    */

    /*
        || Sorting a linked list with selection sort
        void createNewNode(Node *&head, Node *&tail, int val)
        {
            Node *newNode = new Node(val);
            if (head == NULL)
            {
                head = newNode;
                tail = newNode;
                return;
            }
            tail->next = newNode;
            tail = newNode;
        }

        void sortLinkedList(Node *head)
        {
            for (Node *i = head; i->next != NULL; i = i->next)
            {
                for (Node *j = i->next; j != NULL; j = j->next)
                {
                    // Ascending Order
                    if (i->val > j->val)
                    {
                        swap(i->val, j->val);
                    }

                    // Decending Order
                    // if (i->val < j->val)
                    // {
                    //     swap(i->val, j->val);
                    // }
                }
            }
        }

        void printLinkedList(Node *head)
        {
            Node *temp = head;
            while (temp != NULL)
            {
                cout << temp->val << " ";
                temp = temp->next;
            }
            cout << endl;
        }
        .
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
            createNewNode(head, tail, val);
        }
        sortLinkedList(head);
        printLinkedList(head);
    */

    return 0;
}