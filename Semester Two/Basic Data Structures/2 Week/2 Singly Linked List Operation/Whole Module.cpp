// docs.google.com/document/d/1P9adF6lPRgQcQFZH0Bq4e8tPxa5pdiBlxuJlS7p8jXg/edit?usp=sharing


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
    tail = tail->next;
}

void printReverse(Node *temp)
{
    if(temp == NULL){
        return;
    }
    
    cout << temp->val << endl; // print in normal way
    printReverse(temp->next);
    cout << temp->val << endl; // print in reverse way
}

int main()
{
    /*
        || Reference of a pointer
        void fun(int *&p)
        {
            // cout << "In fun: " << *p << endl;
            // *p = 100;

            // int y = 200;
            // p = &y; // This is not possible
            // cout << "Address: " << &p << endl;

            p = NULL;
        }
        .
        int x = 10;
        int *p = &x;
        // fun(p);
        fun(p); // To change address or reference

        // cout << "In main " << *p << endl;
        // cout << x << endl;
        // cout << *p << endl;
        // cout << "Address: " << &p << endl;

        cout << "In Main: " << p << endl;
    */

    /*
        || Insert at head
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

        void insertAtHead(Node *&head, int val)
        {
            Node *newNode = new Node(val);
            newNode->next = head;
            head = newNode;
        }

        void printLinkedList(Node *head)
        {
            Node *temp = head;
            while(temp != NULL)
            {
                cout << temp->val << endl;
                temp = temp->next;
            }
        }
        .
        Node *head = new Node(10);
        Node *a = new Node(20);
        Node *b = new Node(30);

        head->next = a;
        a->next = b;

        insertAtHead(head, 100);
        insertAtHead(head, 200);
        insertAtHead(head, 300);
        insertAtHead(head, 400);
        printLinkedList(head);
    */

    /*
         || Insert at tail
         void insertAtTail(Node *&head, int val)
         {
             Node *newNode = new Node(val);
             Node *temp = head;
             while(temp->next != NULL)
             {
                 temp = temp->next;
             }
             // RN temp is at last node
             temp->next = newNode;
         }

         void printLinkedList(Node *head)
         {
             Node *temp = head;
             while(temp != NULL)
             {
                 cout << temp->val << endl;
                 temp = temp->next;
             }
         }
         .
         Node *head = new Node(10);
         Node *a = new Node(20);
         Node *tail = new Node(30);

         head->next = a;
         a->next = tail;

         insertAtTail(head, 100);
         insertAtTail(head, 200);
         insertAtTail(head, 300);
         insertAtTail(head, 400);
         printLinkedList(head);
         .
         // If list is empty then we have to make some condition for execution
         .
         void insertAtTail(Node *&head, int val)
         {
             Node *newNode = new Node(val);
             if(head == NULL)
             {
                 head = newNode;
                 return;
             }
             Node *temp = head;
             while(temp->next != NULL)
             {
                 temp = temp->next;
             }
             // RN temp is at last node
             temp->next = newNode;
         }

         void printLinkedList(Node *head)
         {
             Node *temp = head;
             while(temp != NULL)
             {
                 cout << temp->val << endl;
                 temp = temp->next;
             }
         }
         .
         Node *head = NULL;
         insertAtTail(head, 100);
         printLinkedList(head);
    */

    /*
        || Insert at any position
        .
        void insertAtAnyPosition(Node *&head, int index, int val)
        {
            Node *newNode = new Node(val);
            Node *temp = head;
            for (int i = 1; i < index; i++)
            {
                temp = temp->next;
            }
            
            if(index == 0){
                newNode->next = head;
                head = newNode;
            }
            else{
                newNode->next = temp->next;
                temp->next = newNode;
            }
        }
        .
        Node *head = new Node(10);
        Node *a = new Node(20);
        Node *b = new Node(30);

        head->next = a;
        a->next = b;

        insertAtAnyPosition(head, 2, 100);
        printLinkedList(head);
    */

    /*
         || Complexity analysis of insertion operations
         .
         1. insertAtHead => O(1)
         2. insertAtTail => O(N) N = Numbers of Node
         3. insertAtAnyPosition => O(N) index = N
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
                return;
            }

            tail->next = newNode;
            tail = tail->next;
        }
        .
        Node *head = new Node(10);
        Node *a = new Node(20);
        Node *tail = new Node(30);

        head->next = a;
        a->next = tail;

        insertAtTail(head, tail, 100);
        insertAtTail(head, tail, 200);
        insertAtTail(head, tail, 300);
        insertAtTail(head, tail, 400);
        printLinkedList(head);

        cout << "This tail: " << tail->val;
    */

    /*
        || Tail insertion optimized
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
            tail = tail->next;
            // tail = newNode; // both are same
        }
        .
        Node *head = new Node(10);
        Node *a = new Node(20);
        Node *tail = new Node(30);

        head->next = a;
        a->next = tail;

        insertAtTail(head, tail, 100);
        insertAtTail(head, tail, 200);
        insertAtTail(head, tail, 300);
        insertAtTail(head, tail, 400);
        printLinkedList(head);

        cout << "This tail: " << tail->val;
    */

    /*
        || Input a linked list
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
            tail = tail->next;
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
            insertAtTail(head, tail, val); 
        }
        printLinkedList(head);
    */

   /*
        || Linked list reverse printing
        .
        void printReverse(Node *temp)
        {
            if(temp == NULL){
                return;
            }
            
            cout << temp->val << endl; // print in normal way
            printReverse(temp->next);
            cout << temp->val << endl; // print in reverse way
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
            insertAtTail(head, tail, val); 
        }

        printReverse(head);
   */

    return 0;
}