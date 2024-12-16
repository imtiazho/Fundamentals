// https://docs.google.com/document/d/1r6lYUJvkSxDbR59HMWJRAWCBIf7Gml4bdT71iz0thvI/edit?usp=sharing

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

int main()
{
    /*
        || Another limitation of array =>
            - Fixed Size
            - Sequential Memory Allocation // Its same for vector
        // int Arr[5] = {1, 2, 3, 4, 5};
        // cout << (int)&Arr[2] << " " << (int)&Arr[3];

        vector<int> V = {1, 2, 3, 4, 5};
        cout << (int)&V[2] << " " << (int)&V[3];
    */

    /*
        || Idea of a Linked list
            - Non Contiguous Manner
            - Data Field + Pointer Filed
    */

    /*
        || Creating a Node
        class Node{
            public:
            int val;
            Node* next;
        };
        .
        Node a, b, c;
        a.val = 10;
        b.val = 11;
        c.val = 12;

        // Address Pointing
        a.next = &b;
        b.next = &c;
        c.next = NULL;

        // cout << a.val << " " << b.val << " " << c.val << endl;
        cout << a.val << endl; // print a node's value with the help of address field

        cout << (*a.next).val << endl; // print b node's value with the help of a node
        cout << a.next->val << endl;

        cout << (*(*a.next).next).val << endl; // print c node's value with the help of a node
        cout << a.next->next->val << endl;
    */

    /*
        || Node with Constructor
        class Node
        {
        public:
            int val;
            Node *next;

            Node(int val){
                this->val = val;
                this->next = NULL;
            }
        };
        .
        Node a(10), b(11), c(12);

        // Address Pointing
        a.next = &b;
        b.next = &c;

        cout << a.val << " " << b.val << " " << c.val << endl;
    */

    /*
        || Dynamic Node
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
        .
        Node *head = new Node(10);
        Node *a = new Node(20);
        Node *b = new Node(30);

        (*head).next = a;
        // head->next = a;

        a->next = b;

        cout << head->val << endl;
        cout << head->next->val << endl;
        cout << head->next->next->val << endl;
    */

    /*
        || Printing Linked List
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
        .
        Node *head = new Node(10);
        Node *a = new Node(20);
        Node *b = new Node(30);
        Node *c = new Node(40);

        head->next = a;
        a->next = b;
        b->next = c;

        // while (head != NULL)
        // {
        //     cout << head->val << endl;
        //     head = head->next;
        // }

        // In this moment we cant print whole linked list again cause we have changed our head to NULL. To prevent this we can take a temp pointer to point head.
        // while (head != NULL)
        // {
        //     cout << head->val << endl;
        //     head = head->next;
        // }

        Node* temp = head;
        while (temp != NULL)
        {
            cout << temp->val << endl;
            temp = temp->next;
        }
        temp = head;
        while (temp != NULL)
        {
            cout << temp->val << endl;
            temp = temp->next;
        }
    */

    return 0;
}