// https://docs.google.com/document/d/1676YNr_Oi_Gylv94ClrpHYu-ac8P0aYQbO0wZw-N2Mw/edit?tab=t.0
#include <bits/stdc++.h>

using namespace std;

class myStack
{
public:
    list<int> l;

    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_back();
    }
    int top()
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
        || What is stack => Abstruct Data Structure, Higher Level data structure, LIFO,

    */

    /*
        || Stack Implementation using Array I + Stack Implementation using Array II
        .
        class myStack
        {
        public:
            vector<int> v;

            void push(int val)
            {
                v.push_back(val);
            }
            void pop()
            {
                v.pop_back();
            }
            int top()
            {
                return v.back();
            }
            int size()
            {
                return v.size();
            }
            bool empty()
            {
                return v.empty();
            }
        };
        myStack st;
        st.push(10);
        st.push(20);
        st.push(30);

        cout << st.top() << endl;

        st.pop();
        cout << st.top() << endl;

        // when you want to access top of a empty list or pop an empty list then it will give you an error. To prevent this you can check the list that is empty or not.
        if(!st.empty())
        {
            cout << st.top() << endl;
        }

    */

    /*
         || Stack Input and Output
         .
         myStack st;

         int N;
         cin >> N;
         for (int i = 0; i < N; i++)
         {
             int x;
             cin >> x;
             st.push(x);
         }

         while (!st.empty())
         {
             cout << st.top() << endl;
             st.pop();
         }
    */

    /*
        || Stack Implementation using list
        class myStack
        {
        public:
            list<int> l;

            void push(int val)
            {
                l.push_back(val);
            }
            void pop()
            {
                l.pop_back();
            }
            int top()
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
        myStack st;

        int N;
        cin >> N;
        for (int i = 0; i < N; i++)
        {
            int x;
            cin >> x;
            st.push(x);
        }

        while (!st.empty())
        {
            cout << st.top() << endl;
            st.pop();
        }
    */

    /*
        || Stack Implementation using Doubly linked list
        .
        Individual File in same folder
    */

    /*
        || STL stack
    */

    stack<int> st;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }

    while(!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}