// https://docs.google.com/document/d/1MioUnRGIA_F5-X7--OJAZ7aAd9pM1V156OMhxto7FHY/edit?tab=t.0
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

void postOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->val << " ";
}

int main()
{
    /*
        || What is Tree Data Structure => Hierarchy DS
    */

    /*
        || Why we need to learn Tree Data Structure
    */

    /*
        || What is Binary Tree => Max two child
    */

    /*
        || Creating a Binary Tree
        Node *root = new Node(10);
        Node *a = new Node(20);
        Node *b = new Node(30);
        Node *c = new Node(40);
        Node *d = new Node(50);
        Node *e = new Node(60);

        root->left = a;
        root->right = b;

        a->left = c;

        b->left = d;
        b->right = e;
    */

    /*
        || Printing Binary Tree :: Depth wise binary tree print. Inorder, Preorder, Postorder
    */

    /*
        || Preorder Traversal : root left right
    */

    /*
        || Preorder Traversal Implementation
        void preOrder(Node *root)
        {
            if (root == NULL)
            {
                return;
            }
            cout << root->val << " ";
            preOrder(root->left);
            preOrder(root->right);
        }
    */

    /*
        || Inorder Traversal : left root right
        void inOrder(Node *root)
        {
            if (root == NULL)
            {
                return;
            }
            inOrder(root->left);
            cout << root->val << " ";
            inOrder(root->right);
        }
    */

    /*
        || Postorder Traversal
    */

    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);

    root->left = a;
    root->right = b;

    a->left = c;

    b->left = d;
    b->right = e;

    postOrder(root);

    return 0;
}