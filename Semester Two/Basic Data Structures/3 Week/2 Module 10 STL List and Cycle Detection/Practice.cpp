// https://docs.google.com/document/d/1IbS-qmFx6oRO-GyIG55yavdDUHpfHTNM/edit
#include <bits/stdc++.h>

using namespace std;

int main()
{
    /*
        // List constructor
        // list<int> l;
        // list<int> l(20);
        // list<int> l(10, 1);
        // list<int> l2(l);

        // int arr[] = {1, 2, 3, 4, 5};
        // list<int> l(arr, arr + 5);

        // vector<int> v = {1, 2, 3, 4, 5};
        // list<int> l(v.begin(), v.end());

        // for (int x : l)
        // {
        //     cout << x << " ";
        // }
    */

    /*
        // List Capacity functions
        list<int> l = {1, 2, 3, 4, 5};
        // cout << l.size();
        // cout << l.max_size();

        // l.clear();
        // cout << l.size();

        // cout << l.empty();

        // l.resize(10);
        // l.resize(10, 5);
        for (int x : l)
        {
            cout << x << " ";
        }
   */

    /*
        list<int> l = {1, 2, 3, 4, 5};
        list<int> l2;
        vector<int> v = {1, 2, 3, 4, 5};

        // l2 = l;
        // l2.assign(l.begin(), l.end());
        // l2.assign(l.begin(), l.end()); // We can assign whole value of vector

        // l.push_back(6);
        // l.push_front(0);

        // l.pop_front();
        // l.pop_back();

        // l.insert(next(l.begin(), 2), 100);
        // l.insert(next(l.begin(), 2), v.begin(), v.end()); // You can also insert an list to this list

        for (int x : l)
        {
            cout << x << " ";
        }
    */

    /*
         list<int> l = {1, 2, 3, 4, 4, 4, 5};

         // l.erase(next(l.begin(), 2));
         // l.erase(next(l.begin(), 2), next(l.begin(), 4)); // We can erase multiple data from list by use this

         // for (int x : l)
         // {
         //     cout << x << " ";
         // }

         auto it = find(l.begin(), l.end(), 4);

         if(it == l.end())
         {
             cout << "NOT FOUND";
         }
         else{
             cout << "FOUND";
         }
    */

    /*
         list<int> l = {1, 2, 3, 4, 1, 1, 2, 1, 3};

         // l.remove(1); // It remove all targetd value like one from list

         l.sort();
         // l.sort(greater<int>());

         // l.unique(); // it remove all duplicate and it has limitation like it doesnt work when list is unsorted


         for (int x : l)
         {
             cout << x << " ";
         }
    */

    /*
      list<int> l = {1, 2, 3, 4, 1, 1, 2, 1, 3};

      // cout << l.front();
      // cout << l.back();

      // cout << *(next(l.begin(), 2));
      cout << *l.begin();
    */

    /*
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
             if(temp->next == NULL)
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

    */

    /*
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
        Node *head = new Node(11);
        Node *a = new Node(12);
        Node *b = new Node(13);
        Node *c = new Node(14);
        Node *d = new Node(15);

        head->next = a;
        a->next = b;
        b->next = c;
        c->next = d;

        // Create Cycle
        d->next = a;

        Node *hare = head;
        Node *tortois = head;

        bool flag = false;
        while(hare != NULL && hare->next != NULL)
        {
            tortois = tortois->next;
            hare = hare->next->next;

            if(hare == tortois)
            {
                flag = true;
                break;
            }
        }

        if(flag)
        {
            cout << "Cycle detected";
        }
        else{
            cout << "No cycle";
        }
   */

    return 0;
}