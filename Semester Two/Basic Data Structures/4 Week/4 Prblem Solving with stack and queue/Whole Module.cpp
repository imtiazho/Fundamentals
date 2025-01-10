// https://docs.google.com/document/d/1bjgJn3eVfTFpYyzUbqoUb4SVcNS_LCT4kGXzTihVmRI/edit?tab=t.0
#include <bits/stdc++.h>

using namespace std;

int getSum(stack<int> stk)
{
    int sum = 0;
    while (!stk.empty())
    {
        sum += stk.top();
        stk.pop();
    }

    return sum;
}

class Solution
{
public:
    // Class One
    bool isValid(string s)
    {
        stack<char> st;
        for (int c : s)
        {
            if (c == '(' || c == '{' || c == '[')
            {
                st.push(c);
            }
            else
            {
                if (st.empty())
                {
                    return false;
                }
                else
                {
                    if (c == ')' && st.top() == '(')
                    {
                        st.pop();
                    }
                    else if (c == '}' && st.top() == '{')
                    {
                        st.pop();
                    }
                    else if (c == ']' && st.top() == '[')
                    {
                        st.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
            }
        }
        if (st.empty())
            return true;
        else
            return false;
    }

    // Class Two
    bool backspaceCompare(string s, string t)
    {
        stack<char> st;
        for (int c : s)
        {
            if (c == '#')
            {
                if (!st.empty())
                {
                    st.pop();
                }
            }
            else
            {
                st.push(c);
            }
        }

        stack<char> st2;
        for (int c : t)
        {
            if (c == '#')
            {
                if (!st2.empty())
                {
                    st2.pop();
                }
            }
            else
            {
                st2.push(c);
            }
        }

        if (st == st2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    // Class Three
    stack<int> pushAtBottom(stack<int> &myStack, int x)
    {
        stack<int> newStack;
        while (!myStack.empty())
        {
            newStack.push(myStack.top());
            myStack.pop();
        }
        myStack.push(x);
        while (!newStack.empty())
        {
            myStack.push(newStack.top());
            newStack.pop();
        }

        return myStack;
    }

    // Class Four
    int maxSum(stack<int> &stk1, stack<int> &stk2, stack<int> &stk3)
    {
        int sum1 = getSum(stk1);
        int sum2 = getSum(stk2);
        int sum3 = getSum(stk3);

        while (true)
        {
            if (sum1 == sum2 && sum2 == sum3)
            {
                break;
            }
            if (sum1 >= sum2 && sum1 >= sum3)
            {
                sum1 -= stk1.top();
                stk1.pop();
            }
            if (sum2 >= sum1 && sum2 >= sum3)
            {
                sum2 -= stk2.top();
                stk2.pop();
            }
            else
            {
                sum3 -= stk3.top();
                stk3.pop();
            }
        }

        return sum1;
    }

    // Class Five
    queue<int> reverseQueue(queue<int> q)
    {
        stack<int> st;
        while (!q.empty())
        {
            st.push(q.front());
            q.pop();
        }

        while (!st.empty())
        {
            q.push(st.top());
            st.pop();
        }
        return q;
    }

    // Class Six
    void push(int val)
    {
    }
    void pop()
    {
    }
    int top()
    {
    }
    int getMin()
    {
    }
};

int main()
{
    Solution testObject;

    return 0;
}