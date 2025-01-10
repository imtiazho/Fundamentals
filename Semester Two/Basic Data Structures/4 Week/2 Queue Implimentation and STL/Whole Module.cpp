// https://docs.google.com/document/d/184KGhHMwwfxclCOGczYXjydFRvadXbUI/edit?usp=drivesdk&ouid=112433310488936743525&rtpof=true&sd=true

// Built-in Function - https://docs.google.com/document/d/1tiYAlnJZWbuamFGwLgR4tGm2TEm_FQe0hxF-rXy-9bU/edit?usp=drivesdk
#include <bits/stdc++.h>

using namespace std;

int main()
{
    /*
        || What is Queue => Abstruct DS, Higher Level DS, FIFO
    */

    /*
        || Implement Queue using Singly linked list
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

        class myQueue
        {
        public:
            int sz = 0;
            Node *head = NULL;
            Node *tail = NULL;

            void push(int val) // O(1)
            {
                sz++;
                Node *newNode = new Node(val);

                if (head == NULL)
                {
                    head = newNode;
                    tail = newNode;
                }
                tail->next = newNode;
                tail = newNode;
            }

            void pop() // O(1)
            {
                sz--;
                Node *deletNode = head;

                head = head->next;
                delete deletNode;
                if (head == NULL)
                {
                    tail = NULL;
                }
            }

            int front()
            {
                return head->val;
            }

            int back()
            {
                return tail->val;
            }

            int size()
            {
                return sz;
            }

            bool empty()
            {
                return head == NULL;
            }
        };
    */

    /*
        || Queue Input and Output
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

        class myQueue
        {
        public:
            int sz = 0;
            Node *head = NULL;
            Node *tail = NULL;

            void push(int val) // O(1)
            {
                sz++;
                Node *newNode = new Node(val);

                if (head == NULL)
                {
                    head = newNode;
                    tail = newNode;
                }
                tail->next = newNode;
                tail = newNode;
            }

            void pop() // O(1)
            {
                sz--;
                Node *deletNode = head;

                head = head->next;
                delete deletNode;
                if (head == NULL)
                {
                    tail = NULL;
                }
            }

            int front()
            {
                return head->val;
            }

            int back()
            {
                return tail->val;
            }

            int size()
            {
                return sz;
            }

            bool empty()
            {
                return head == NULL;
            }
        };
        .
        myQueue q;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            q.push(val);
        }

        // cout << q.front() << " " << q.back() << " " << q.size() << endl;

        while (!q.empty())
        {
            cout << q.front() << endl;
            q.pop();
        }
    */

    /*
        || Implement Queue using Doubly linked list
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

        class myQueue
        {
        public:
            int sz = 0;
            Node *head = NULL;
            Node *tail = NULL;

            void push(int val) // O(1)
            {
                sz++;
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

            void pop() // O(1)
            {
                sz--;
                Node *deletNode = head;

                head = head->next;
                delete deletNode;
                if (head == NULL)
                {
                    tail = NULL;
                    return;
                }
                head->prev = NULL;
            }

            int front()
            {
                return head->val;
            }

            int back()
            {
                return tail->val;
            }

            int size()
            {
                return sz;
            }

            bool empty()
            {
                return head == NULL;
            }
        };
        .
        myQueue q;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            q.push(val);
        }

        // cout << q.front() << " " << q.back() << " " << q.size() << endl;

        while (!q.empty())
        {
            cout << q.front() << endl;
            q.pop();
        }
    */

    /*
        || Implement Queue using STL list
         .
         class myQueue
         {
         public:
             list<int> l;

             void push(int val) // O(1)
             {
                 l.push_back(val);
             }

             void pop() // O(1)
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
         .
         myQueue q;
         int n;
         cin >> n;
         for (int i = 0; i < n; i++)
         {
             int val;
             cin >> val;
             q.push(val);
         }

         // cout << q.front() << " " << q.back() << " " << q.size() << endl;

         while (!q.empty())
         {
             cout << q.front() << endl;
             q.pop();
         }
    */

    /*
        || STL Queue
        queue<int> q;
        q.push(10);
        q.push(20);
        q.push(30);

        if (!q.empty())
        {
            q.pop();
            cout << q.front() << endl;
        }
    */


    /*
        https://leetcode.com/problems/implement-stack-using-queues/description/

        https://leetcode.com/problems/implement-queue-using-stacks/description/
    */

    return 0;
}