// https://docs.google.com/document/d/1bvnxY4f-Z2NOTm2v0FdYhB5hgdfW6G_FqX_-bd_mQ00/edit?usp=sharing
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
        // 1 Ber kore ana
        Node *f = qu.front();
        qu.pop();

        // 2 Oi node diye kaj kora
        cout << f->val << " ";

        // 3 Children push kora but check kore nitee hobee je child ache or not
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
        // 1 Ber kore ana
        Node *p = qu.front();
        qu.pop();

        // 2 Oi node niye kaj kora
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

        // 3 Children push kora
        if (p->left)
            qu.push(p->left);
        if (p->right)
            qu.push(p->right);
    }

    return root;
}

int countLeafNodes(Node *root)
{
    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL)
    {
        return 1;
    }

    int l = countLeafNodes(root->left);
    int r = countLeafNodes(root->right);
    return l + r;
}

int maxheight(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    if (root->left == NULL && root->right == NULL)
    {
        return 0;
    }

    int l = maxheight(root->left);
    int r = maxheight(root->right);

    return max(l, r) + 1;
}

int main()
{
    /*
        || Level order traversal Theory => Queue niye then tar moddhe root handcode e assign kori. Then queue theke node the ber kore ene kaj kori then tar child guloke ke assign kori.
    */

    /*
        || Level order traversal Implementation
        .
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

        levelOrderTraversal(root);
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

        void levelOrderTraversal(Node *root)
        {
            queue<Node *> qu;
            qu.push(root);

            while (!qu.empty())
            {
                // 1 Ber kore ana
                Node *f = qu.front();
                qu.pop();

                // 2 Oi node diye kaj kora
                cout << f->val << " ";

                // 3 Children push kora but check kore nitee hobee je child ache or not
                if (f->left)
                    qu.push(f->left);
                if (f->right)
                    qu.push(f->right);
            }
        }
    */

    /*
        || Binary tree input Theory => Queue niye then tar moddhe root handcode e assign kori. Then queue theke node the ber kore ene kaj kori then tar child gulote input nei. Input jodi thake tahole something or na thakle -1 diye dibo.
    */

    /*
         || Binary tree input Implementation
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
                 // 1 Ber kore ana
                 Node *f = qu.front();
                 qu.pop();

                 // 2 Oi node diye kaj kora
                 cout << f->val << " ";

                 // 3 Children push kora but check kore nitee hobee je child ache or not
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
            if(root) qu.push(root);

             while (!qu.empty())
             {
                 // 1 Ber kore ana
                 Node *p = qu.front();
                 qu.pop();

                 // 2 Oi node niye kaj kora
                 int l, r;
                 cin >> l >> r;
                 Node *myLeft, *myRight;

                 if(l == -1) myLeft = NULL;
                 else myLeft = new Node(l);

                 if(r == -1) myRight = NULL;
                 else myRight = new Node(r);

                 p->left = myLeft;
                 p->right = myRight;

                 // 3 Children push kora
                 if (p->left)
                     qu.push(p->left);
                 if (p->right)
                     qu.push(p->right);
             }

             return root;
         }
         .
         Node *root = takeInput();
         levelOrderTraversal(root);
    */

    /*
        || Count nodes in a binary tree
        .
        int countNodes(Node *root)
        {
            if (root == NULL)
                return 0;

            int l = countNodes(root->left);
            int r = countNodes(root->right);

            return l + r + 1;
        }
        .
        cout << countNodes(root);
    */

    /*
        || Count leaf nodes in a binary tree
        .
        int countLeafNodes(Node *root)
        {
            if (root == NULL)
                return 0;

            if(root->left == NULL && root->right == NULL)
            {
                return 1;
            }

            int l = countLeafNodes(root->left);
            int r = countLeafNodes(root->right);
            return l + r;
        }
        .
        cout << countLeafNodes(root);
    */

    /*
        || Height and Depth of a binary tree : Google Serach
    */

    /*
         || Get maximum height of a binary tree
         .
         int maxheight(Node *root)
         {
             if(root ==  NULL)
             {
                 return 0;
             }

             if(root->left == NULL && root->right == NULL)
             {
                 return 0;
             }

             int l = maxheight(root->left);
             int r = maxheight(root->right);

             return max(l, r) + 1;
         }
         .
         cout << maxheight(root);
    */

    // 1 7 9 2 6 -1 9 -1 -1 5 11 5 -1 -1 -1 -1 -1 -1 -1
    Node *root = takeInput();
    cout << maxheight(root);

    return 0;
}