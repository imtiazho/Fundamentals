// https://docs.google.com/document/d/1686xqYvPYFUsck_9hNRvLV-m6hfIKeNoSxvNWrIZhXQ/edit?tab=t.0

// https://docs.google.com/document/d/11-8wWOLJcDZbLLU7UiRCyUZ3nXYPFDpd/edit?usp=sharing&ouid=112433310488936743525&rtpof=true&sd=true
#include <bits/stdc++.h>

using namespace std;

// class Solution
// {
// public:
//     int size(ListNode *head)
//     {
//         ListNode *temp = head;
//         int counter = 0;
//         while (temp != NULL)
//         {
//             counter++;
//             temp = temp->next;
//         }
//     }
//     ListNode *modduleNode(ListNode *head)
//     {
//         int sz = size(head);
//         ListNode *temp = head;
//         for (int i = 1; i <= sz / 2; i++)
//         {
//             temp = temp->next;
//         }
//         return temp;
//     }
// }

/*
    listNode *slow = head;
    listNode *fast = head;

    bool flag = flase;
    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        slow = slow->next->next;
        if(slow == fast)
        {
            flag = true;
            break;
        }
    }

    return flag;
*/

/*
    if(head == NULL)
    {
        return head;
    }
    ListNode *temp = head;
    while(temp->next != NULL)
    {
        if(temp->val == temp->next->val)
        {
            ListNode *temp = temp->next;
            temp->next = temp->next->next;
            delete ListNode
        }
        else{
            temp = temp->next;
        }
    }
    return head;
*/

/*
    void revserse(ListNode *&head, ListNode *temp)
    {
        if(temp->next == NULL)
        {
            head = temp;
            return;
        }
        reverse(head, temp->next);
        temp->next->next = temp;
        temp->next = NULL; 
    }
    .
    if(head == NULL)
    {
        return head;
    }
    revserse(head, head);
    return head;
*/

/*
    void insertAtTail(ListNode *&head, ListNode *&tail, int val)
    {
        ListNode *newNode = new ListNode(val);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }
    void revserse(ListNode *&head, ListNode *temp)
    {
        if(temp->next == NULL)
        {
            head = temp;
            return;
        }
        reverse(head, temp->next);
        temp->next->next = temp;
        temp->next = NULL; 
    }
    .
    ListNode *newHead = NULL;
    ListNode *newTail = NULL;

    ListNode *temp = head;
    while(temp != NULL)
    {
        insertAtTail(newHead, newTail, temp);
        temp = temp->next
    }

    reverse(newHead, newHead);
    temp = head;
    ListNode *tempTwo = newHead;
    while(temp != NULL)
    {
        if(temp->val != tempTwo->val)
        {
            return flase;
        }
        temp = temp->next;
        tempTwo = tempTwo->next;
    }

    return ture;
*/

/*
    node->val = node->next->val;
    node->next = node->next->next;
*/

main()
{

    return 0;
}