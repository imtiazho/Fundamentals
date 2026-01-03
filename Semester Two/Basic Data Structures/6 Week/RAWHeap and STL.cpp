#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *takeInput()
{
    int val;
    cin >> val;

    queue<Node *> qu;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    if (root)
        qu.push(root);

    while (!qu.empty())
    {
        Node *node = qu.front();
        qu.pop();

        int l, r;
        cin >> l >> r;

        Node *myLeft, *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);

        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        node->left = myLeft;
        node->right = myRight;

        if (node->left)
            qu.push(node->left);
        if (node->right)
            qu.push(node->right);
    }

    return root;
}

void levelOrderTraversal(Node *root)
{
    if (!root)
    {
        cout << "NO TREE" << endl;
        return;
    }

    queue<Node *> qu;
    qu.push(root);

    while (!qu.empty())
    {
        Node *node = qu.front();
        qu.pop();

        cout << node->val << " ";

        if (node->left)
            qu.push(node->left);
        if (node->right)
            qu.push(node->right);
    }
}

bool searchInBinary(Node *root, int searchedValue)
{
    if (!root)
        return false;

    if (root->val == searchedValue)
        return true;

    if (root->val < searchedValue)
    {
        bool r = searchInBinary(root->right, searchedValue);
        return r;
    }
    else
    {
        bool l = searchInBinary(root->left, searchedValue);
        return l;
    }
}

void insertNodeInToBST(Node *root, int val)
{
    if (!root)
        root = new Node(val);

    if (root->val > val)
    {
        if (!root->left)
            root->left = new Node(val);
        else
            insertNodeInToBST(root->left, val);
    }
    else
    {
        if (!root->right)
            root->right = new Node(val);
        else
            insertNodeInToBST(root->right, val);
    }
}

Node *converArrayIntoTree(int Arr[], int N, int l, int r)
{
    if (l > r)
        return NULL;

    int mid = (l + r) / 2;
    Node *root = new Node(Arr[mid]);

    Node *leftRoot = converArrayIntoTree(Arr, N, l, mid - 1);
    Node *rightRoot = converArrayIntoTree(Arr, N, mid + 1, r);

    root->left = leftRoot;
    root->right = rightRoot;

    return root;
}

void insertHeap(vector<int> &V, int val)
{
    V.push_back(val);

    int currIndex = V.size() - 1;

    while (currIndex != 0)
    {
        int parentIndex = (currIndex - 1) / 2;

        if (V[parentIndex] < V[currIndex])
        {
            swap(V[parentIndex], V[currIndex]);
            currIndex = parentIndex;
        }
        else
            break;
    }
}

void deleteFromMaxHeap(vector<int> &V)
{
    V[0] = V.back();
    V.pop_back();
    int currIndex = 0;

    while (true)
    {
        int leftIndex = (currIndex * 2) - 1;
        int rightIndex = (currIndex * 2) + 2;

        int leftVal = INT_MIN, rightVal = INT_MIN;
        if (leftIndex < V.size())
        {
            leftVal = V[leftIndex];
        }
        if (rightIndex < V.size())
        {
            rightVal = V[rightIndex];
        }

        if (leftVal > rightVal && leftVal > V[currIndex])
        {
            swap(V[leftIndex], V[currIndex]);
            currIndex = leftIndex;
        }
        else if (rightVal > leftVal && rightVal > V[currIndex])
        {
            swap(V[rightIndex], V[currIndex]);
            currIndex = rightIndex;
        }
        else
        {
            break;
        }
    }
}

int main()
{
    int N;
    cin >> N;
    vector<int> V;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        V.push_back(x);
    }
    deleteFromMaxHeap(V);

    for (int x : V)
    {
        cout << x << " ";
    }
    return 0;
}
