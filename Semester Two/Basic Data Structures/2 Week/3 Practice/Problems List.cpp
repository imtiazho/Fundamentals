// https://docs.google.com/document/d/1KJAVqqr7pqeMR0z5ATAXmKbIQo2JazHf/edit?usp=drivesdk&ouid=112433310488936743525&rtpof=true&sd=true
#include <bits/stdc++.h>

using namespace std;

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

void createNewNode(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void isSorted(Node *head)
{
    bool flag = true;
    Node *temp = head;
    while (temp->next != NULL) // We terminate this loop before last node
    {
        if (temp->val > temp->next->val)
        {
            flag = false;
        }
        temp = temp->next;
    }

    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
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
        createNewNode(head, tail, val);
    }

    isSorted(head);

    return 0;
}

/*
|| Problem One:
.
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

void createNewNode(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void countSize(Node *head)
{
    int counter = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        counter++;
        temp = temp->next;
    }

    cout << counter << endl;
}

int main()
{
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
        createNewNode(head, tail, val);
    }

    countSize(head);
    return 0;
}
*/

/*
    || Problem Two:
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

void createNewNode(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int countSize(Node *head, int counter)
{
    Node *temp = head;
    while (temp != NULL)
    {
        counter++;
        temp = temp->next;
    }
    return counter;
}

void checkDuplicate(Node *head, int T)
{
    int freQ[105] = {0};

    Node *temp = head;
    while (T--)
    {
        freQ[temp->val]++;
        temp = temp->next;
    }

    int flag = 0;
    for (int i = 0; i < 105; i++)
    {
        if (freQ[i] > 1)
        {
            flag = 1;
        }
    }

    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    int counter = 0;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        createNewNode(head, tail, val);
    }

    int size = countSize(head, counter);
    checkDuplicate(head, size);

    return 0;
}
*/

/*
    || Problem Three:
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

void createNewNode(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int countSize(Node *head, int counter)
{
    Node *temp = head;
    while (temp != NULL)
    {
        counter++;
        temp = temp->next;
    }
    return counter;
}

void printOddMid(Node *head, int mid)
{
    Node *temp = head;
    for (int i = 0; i < mid; i++)
    {
        temp = temp->next;
    }
    // 0 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5 6
    cout << temp->val << endl;
}

void printEvenMid(Node *head, int mid)
{
    Node *temp = head;
    for (int i = 1; i < mid; i++)
    {
        temp = temp->next;
    }

    cout << temp->val << " " << temp->next->val << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    int counter = 0;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        createNewNode(head, tail, val);
    }

    int size = countSize(head, counter);

    if (size % 2 != 0)
    {
        int mid = size / 2;
        printOddMid(head, mid);
    }
    else
    {
        int mid = size / 2;
        printEvenMid(head, mid);
    }
    // 3 4 5 6 7 8
    return 0;
}
*/

/*
    || Problem Four:
#include <bits/stdc++.h>

using namespace std;

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

void createNewNode(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int countSize(Node *head, int counter)
{
    Node *temp = head;
    while (temp != NULL)
    {
        counter++;
        temp = temp->next;
    }
    return counter;
}

void insertNode(Node *&head, int index, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 1; i < index; i++)
    {
        temp = temp->next;
    }

    if (index == 0)
    {
        newNode->next = head;
        head = newNode;
    }
    else
    {
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void printList(Node *head)
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
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    int counter = 0;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        createNewNode(head, tail, val);
    }


    int index, tVal;
    while (cin >> index >> tVal)
    {
        int size = countSize(head, counter);
        if (size < index && size != index)
        {
            cout << "Invalid" << endl;
        }
        else
        {
            insertNode(head, index, tVal);
            printList(head);
        }
    }

    return 0;
}
*/

/*
    || Problem Five:
#include <bits/stdc++.h>

using namespace std;

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

void createNewNode(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void isSorted(Node *head)
{
    bool flag = true;
    Node *temp = head;
    while (temp->next != NULL) // We terminate this loop before last node
    {
        if (temp->val > temp->next->val)
        {
            flag = false;
        }
        temp = temp->next;
    }

    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
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
        createNewNode(head, tail, val);
    }

    isSorted(head);

    return 0;
}
*/
