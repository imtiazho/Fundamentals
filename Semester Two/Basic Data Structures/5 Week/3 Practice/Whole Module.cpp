// https://docs.google.com/document/d/1vv9MccarlZeoF1WYHkhBBqG2iCENXE9M/edit
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

void levelOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        cout << "NO TREE";
        return;
    }
    queue<Node *> qu;
    qu.push(root);

    while (!qu.empty())
    {
        Node *f = qu.front();
        qu.pop();

        cout << f->val << " ";

        if (f->left)
            qu.push(f->left);
        if (f->right)
            qu.push(f->right);
    }
}

Node *takeInput()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> qu;
    if (root)
        qu.push(root);

    while (!qu.empty())
    {
        Node *p = qu.front();
        qu.pop();

        // 2 : P niye kaj
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

        p->left = myLeft;
        p->right = myRight;

        if (p->left)
            qu.push(p->left);
        if (p->right)
            qu.push(p->right);
    }

    return root;
}

int countNode(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int l = countNode(root->left);
    int r = countNode(root->right);

    return l + r + 1;
}

int countLeafNode(Node *root)
{
    if(root == NULL)
    {
        return 0;
    }

    if(root->left == NULL && root->right == NULL)
    {
        return 1;
    }

    int l = countLeafNode(root->left);
    int r = countLeafNode(root->right);

    return l + r;
}

int countMaxHeight(Node *root)
{
    if(root == NULL)
    {
        return 0;
    }

    if(root->left == NULL && root->right == NULL)
    {
        return 1;
    }

    int l = countMaxHeight(root->left);
    int r = countMaxHeight(root->right);

    return max(l, r) + 1;
}

int main()
{
    // 1 7 9 2 6 -1 9 -1 -1 5 11 5 -1 -1 -1 -1 -1 -1 -1
    Node *root = takeInput();
    // cout << countNode(root);
    // cout << countLeafNode(root);
    cout << countMaxHeight(root);


    return 0;
}