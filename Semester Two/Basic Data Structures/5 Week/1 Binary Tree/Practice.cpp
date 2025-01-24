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



int main()
{
    /*
        What is TREE DATA STRUCTURE? => A tree data structure is a non-linear data structure that mimics a hierarchical tree structure, with nodes connected by edges. It's a fundamental concept in computer science, used to represent and organize data in a way that reflects relationships between elements
    */

    /*
        Why we need to learn Tree Data Structure? => Mainly for hierarchical structure File systems (directories and files), Organizational charts (employees and managers, Family trees (ancestors and descendants).
    */

    /*
         What is Binary Tree => Max two child :  a left child and a right child.
    */

    /*
        || Creating a Binary Tree
        .
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
        .
        Node *root = new Node(1);
        Node *a = new Node(7);
        Node *b = new Node(9);
        Node *c = new Node(2);
        Node *d = new Node(6);
        Node *e = new Node(5);
        Node *f = new Node(11);
        Node *g = new Node(9);
        Node *h = new Node(5);

        // Connection
        root->left = a;
        root->right = b;

        a->left = c;
        a->right = d;

        d->left = e;
        d->right = f;

        b->right = g;

        g->left = h;
    */

    /*
        || Printing Binary Tree :: Depth wise binary tree print. Inorder, Preorder, Postorder
    */

    /*
        || Preorder Traversal : Root then Left then Right
        .
        void preOrderPrint(Node *root)
        {
            if (root == NULL)
            {
                return;
            }
            cout << root->val << " ";
            preOrderPrint(root->left);
            preOrderPrint(root->right);
        }
    */

    /*
        || Inorder Traversal : left root right
        .
        void inOrderPrint(Node *root)
        {
            if (root == NULL)
            {
                return;
            }
            inOrderPrint(root->left);
            cout << root->val << " ";
            inOrderPrint(root->right);
        }
    */

    /*
        || Postorder Traversal
        .
        void postOrderPrint(Node *root)
        {
            if (root == NULL)
            {
                return;
            }
            postOrderPrint(root->left);
            postOrderPrint(root->right);
            cout << root->val << " ";
        }
    */

    Node *root = new Node(1);
    Node *a = new Node(7);
    Node *b = new Node(9);
    Node *c = new Node(2);
    Node *d = new Node(6);
    Node *e = new Node(5);
    Node *f = new Node(11);
    Node *g = new Node(9);
    Node *h = new Node(5);

    // Connection
    root->left = a;
    root->right = b;

    a->left = c;
    a->right = d;

    d->left = e;
    d->right = f;

    b->right = g;

    g->left = h;

    return 0;
}