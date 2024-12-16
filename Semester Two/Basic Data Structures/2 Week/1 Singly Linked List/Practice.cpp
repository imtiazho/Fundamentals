/*
    || Practice List : https://docs.google.com/document/d/1mBmbTd2A0r2GYV50GkweULyN-TqKZSmx7UVM4-NX5cs/edit?tab=t.0
    .
    1. Why do you think linked-list requires more memory than an array when storing the same number of elements?
        A linked list generally requires more memory than an array to store the same number of elements because of the additional overhead associated with storing pointers or references.
    .
    2. Write down Three Limitations of the array which can be solved by the use of Linked List?
        i. Fixed Size
        ii. Expensive Insertions and Deletions
        iii. Inefficient Use of Memory for Sparse Data
    .
    3. What is the value of Head? in linked list?
        In a linked list, the Head is a reference (or pointer) to the first node of the list. Its value typically depends on the state of the list:
        i. When the Linked List Is Non-Empty: The Head contains the memory address (reference) of the first node in the linked list. This node serves as the entry point to traverse the entire list.
        ii. When the Linked List Is Empty: The Head is set to NULL (or nullptr in C++), indicating that there are no nodes in the list.
    .
    4. What will be the value of Sum following pseudocode snippets?
*/

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
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    (*head).next = a;
    a->next = b;

    // Node* temp = head;
    // while(temp != NULL)
    // {
    //     cout << temp->val << endl;
    //     temp = temp->next;
    // }

    // temp = head;
    // while(temp != NULL)
    // {
    //     cout << temp->val << endl;
    //     temp = temp->next;
    // }

    int Sum = 0;
    Node *Temp = head;
    while (Temp != NULL)
    {
        Sum += Temp->val;
        Temp = Temp->next;
    }

    Sum -= Temp->val;
    cout << Sum << "A" << endl;
    return 0;
}