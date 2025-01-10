// https://docs.google.com/document/d/1IbS-qmFx6oRO-GyIG55yavdDUHpfHTNM/edit
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
        || List Constructors
        // list<int> l;
        // list<int> l = {1, 2, 3, 4, 5};

        // list<int> l(10);
        // cout << l.size();

        // list<int> l(10, 3);
        // cout << *(l.begin());
        // for(auto it = l.begin(); it != l.end(); it++)
        // {
        //     cout << *it << " ";
        // }
        // for(int x : l)
        // {
        //     cout << x << " ";
        // }

        // list<int> l2(l);
        // for (int x : l2)
        // {
        //     cout << x << " ";
        // }

        // int arr[] = {1, 2, 3};
        // list<int> l(arr, arr + 3);

        // vector<int> V = {1, 2, 3};
        // list<int> l(V.begin(), V.end());
    */

    /*
        || List Capacity functions
        .
        list<int> l = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

        // cout << l.size();

        // cout << l.max_size();

        // l.clear();
        // cout << l.size();

        // cout << l.empty();

        // l.resize(15);
        l.resize(15, 100);
        // cout << l.size();
        for (int x : l)
        {
            cout << x << " ";
        }
    */

    /*
        || List Modifiers functions
        list<int> l = {1, 2, 3, 4, 5};
        list<int> l2;
        list<int> l3 = {11, 22, 33};
        vector<int> V = {11, 22, 33};

        // l2 = l;
        // l2.assign(l.begin(), l.end());

        // l.push_back(6);
        // l.push_front(100);

        // l.pop_back();
        // l.pop_front();

        // l.insert(next(l.begin(), 2), 100);
        // l.insert(next(l.begin(), 2), l3.begin(), l3.end());
        l.insert(next(l.begin(), 2), V.begin(), V.end());

        for (int val : l)
        {
            cout << val << " ";
        }
    */

    /*
        || List Modifiers functions II
        list<int> l = {1, 2, 3, 4, 4, 4, 5};
        list<int> l2;

        // l.erase(next(l.begin(), 3));
        // l.erase(next(l.begin(), 2), next(l.begin(), 4));

        // replace(l.begin(), l.end(), 4, 100);

        // for (int val : l)
        // {
        //     cout << val << " ";
        // }


        auto it = find(l.begin(), l.end(), 200);

        if(it == l.end())
        {
            cout << "not found";
        }
    */

    /*
        || List operation functions
        list<int> l = {1, 2, 3, 4, 1, 1, 2, 1, 3};
        // l.remove(2);

        // l.sort(); // Acending
        // l.sort(greater<int>()); // Decending

        // l.unique(); // Its has a limitation that it work if the list is sorted

        // l.reverse();

        for (int x : l)
        {
            cout << x << " ";
        }
    */

    /*
        ||  List element access and iterators
        list<int> l = {1, 2, 3, 4, 1, 1, 2, 1, 3};

        // cout << l.front() << endl;

        // cout << l.back() << endl;

        // cout << *next(l.begin(), 2);

        cout << *l.begin() << endl;
        cout << *l.end(); // this is not work because end pointer thake after last element address
    */

    /*
        || Reverse singly linked list Implementation
        .
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

        void reverseLinkedList(Node *&head, Node *temp, Node *&tail)
        {
            if (temp->next == NULL)
            {
                head = temp;
                return;
            }
            reverseLinkedList(head, temp->next, tail);

            temp->next->next = temp;
            temp->next = NULL;
            tail = temp;
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
            insertAtTail(head, tail, val);
        }

        reverseLinkedList(head, head, tail);
        printLinkedList(head);
        // cout << head->val << " " << tail->val;
    */

    /*
         || Reverse Doubly linked list
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

         void reverseDoubly(Node *head, Node *tail)
         {
             for (Node *i = head, *j = tail; i != j && i->prev != j; i = i->next, j = j->prev)
             {
                 swap(i->val, j->val);
             }
         }

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

             takeInput(head, tail, val);
         }

         reverseDoubly(head, tail);
         printForward(head);
    */

    /*
        || Detect cycle implementation
        .
        Node *head = new Node(11);
        Node *a = new Node(12);
        Node *b = new Node(13);
        Node *c = new Node(14);
        Node *d = new Node(15);

        head->next = a;
        a->next = b;
        b->next = c;
        c->next = d;

        // Create cycle
        d->next = a;

        Node *tortois = head;
        Node *hare = head;

        bool flag = false;
        while (hare != NULL && hare->next != NULL)
        {
            tortois = tortois->next; // One step
            hare = hare->next->next; // Dubble step

            if (tortois == hare)
            {
                // Cycle Detected
                flag = true;
                break;
            }
        }

        if (flag)
        {
            cout << "Cycyle Detected" << endl;
        }
        else
        {
            cout << "No Cycle" << endl;
        }
    */


    return 0;
}