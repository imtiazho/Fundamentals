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
    cout << endl;
}

int main()
{
    /*
        || Doubly linked list : Each node have double connection with others.
        .
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
        .
        Node *head = new Node(10);
        Node *a = new Node(11);
        Node *tail = new Node(12);

        head->next = a;

        a->prev = head;
        a->next = tail;

        tail->prev = a;
    */

    /*
        || Printing Doubly Linked list
        .
        void printForward(Node *head)
        {
            Node *temp = head;
            while (temp != NULL)
            {
                cout << temp->val << " ";
                temp = temp->next;
            }
            cout << endl;
        }

        void printBackWard(Node *tail)
        {
            Node *temp = tail;
            while (temp != NULL)
            {
                cout << temp->val << " ";
                temp = temp->prev;
            }
            cout << endl;
        }
        .
        Node *head = new Node(10);
        Node *a = new Node(11);
        Node *tail = new Node(12);

        head->next = a;

        a->prev = head;
        a->next = tail;

        tail->prev = a;

        printForward(head);
        printBackWard(tail);
    */

    /*
        || Insert at head
        .
        void insertAtHead(Node *&head, Node *&tail, int val)
        {
            Node *newNode = new Node(val);
            if(head == NULL)
            {
                head = newNode;
                tail = newNode;
            }
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        .
        Node *head = new Node(10);
        Node *a = new Node(20);
        Node *tail = new Node(30);

        head->next = a;

        a->prev = head;
        a->next = tail;

        tail->prev = a;

        insertAtHead(head, 100);

        printForward(head);
    */

    /*
        || Insert at tail
        .
        void insertAtTail(Node *&head, Node *&tail, int val)
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
        .
        // Node *head = new Node(10);
        // Node *a = new Node(20);
        // Node *tail = new Node(30);

        // Another approach
        Node *head = NULL;
        Node *tail = NULL;

        // head->next = a;

        // a->prev = head;
        // a->next = tail;

        // tail->prev = a;

        insertAtTail(head, tail, 100);
        insertAtTail(head, tail, 200);

        printForward(head);
    */

    /*
        || Insert at any position
        .
        void insertAtAnyPosition(Node *head, int val, int index)
        {
            Node *newNode = new Node(val);

            Node *temp = head;
            for(int i = 1; i < index; i++)
            {
                temp = temp->next;
            }

            // Connection
            newNode->next = temp->next;
            temp->next->prev = newNode;

            temp->next = newNode;
            newNode->prev = temp;

        }
        .
        Node *head = new Node(10);
        Node *a = new Node(20);
        Node *tail = new Node(30);

        head->next = a;

        a->prev = head;
        a->next = tail;

        tail->prev = a;

        insertAtAnyPosition(head, 100, 2);

        printForward(head);
    */

    /*
        || Delete at Head
        .
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
        .
        Node *head = new Node(10);
        Node *a = new Node(20);
        Node *tail = new Node(30);

        head->next = a;

        a->prev = head;
        a->next = tail;

        tail->prev = a;

        deleteAtHead(head, tail);
        printForward(head);
    */

    /*
        || Delete at tail
        .
         void deleteAtTail(Node *&head, Node *&tail)
        {
            Node *deleteNode = tail;
            tail = tail->prev;
            delete deleteNode;

            if(tail == NULL)
            {
                head == NULL;
                return;
            }
            tail->next = NULL;
        }
        .
        Node *head = new Node(10);
        Node *a = new Node(20);
        Node *tail = new Node(30);

        head->next = a;

        a->prev = head;
        a->next = tail;

        tail->prev = a;

        deleteAtTail(head, tail);
        printForward(head);
    */

    /*
        || Delete at any position
        .
        void deleteAtAnyPosition(Node *head, int index)
        {
            Node *temp = head;
            for (int i = 1; i < index; i++)
            {
                temp = temp->next;
            }

            Node *deleteNode = temp->next;
            temp->next = temp->next->next;
            temp->next->prev = temp;

            delete deleteNode;
        }
        .
        Node *head = new Node(10);
        Node *a = new Node(20);
        Node *tail = new Node(30);

        head->next = a;

        a->prev = head;
        a->next = tail;

        tail->prev = a;

        deleteAtAnyPosition(head, 1);
        printForward(head);
    */

   /*
        || Input Doubly linked list
        .
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
        .
        Node *head = NULL;
        Node *tail = NULL;


        int val;
        while(true)
        {
            cin >> val;
            if(val == -1)
            {
                break;
            }

            takeInput(head, tail, val);
        }

        printForward(head);
   */

    return 0;
}