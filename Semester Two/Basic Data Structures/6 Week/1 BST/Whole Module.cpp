// https://docs.google.com/document/d/1eqBtMKpZg6j-32nKxeViq51SLK5bBtCdxG8QwVX99XM/edit?tab=t.0
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

bool serachInBinaryTree(Node *root, int val)
{
    if (root == NULL)
    {
        return false;
    }

    if (root->val == val)
    {
        return true;
    }

    if (root->val < val)
    {
        bool r = serachInBinaryTree(root->right, val);
        return r;
    }
    else
    {
        bool l = serachInBinaryTree(root->left, val);
        return l;
    }
}

void insertBST(Node *root, int val)
{
    if (root == NULL)
        root = new Node(val);

    if (root->val > val)
    {
        if (root->left == NULL)
        {
            root->left = new Node(val);
        }
        else
        {
            insertBST(root->left, val);
        }
    }
    else
    {
        if (root->right == NULL)
        {
            root->right = new Node(val);
        }
        else
        {
            insertBST(root->right, val);
        }
    }
}

Node *convertArrayToBST(int Arr[], int N, int l, int r)
{
    if(l > r)
    {
        return NULL;
    }

    int mid = (l + r) / 2;
    Node *root = new Node(Arr[mid]);

    Node *leftRoot = convertArrayToBST(Arr, N, l, mid - 1); 
    Node *rightRoot = convertArrayToBST(Arr, N, mid + 1, r);

    root->left = leftRoot;
    root->right = rightRoot;

    return root;
}

int main()
{
    /*
        || What is BST => Binary Seach + Binary Tree
        . 
        Conditions:
        1. All values of left sub tree < node->val
        2. All values of right sub tree > node->val
    */

    /*
        || How to handle duplicate in BST => Dont insert the equal value . Insted of insert it count the number of equal value.
    */

    /*
        || Searching in BST
        bool serachInBinaryTree(Node *root, int val)
        {
            if (root == NULL)
            {
                return false;
            }

            if (root->val == val)
            {
                return true;
            }

            if (root->val < val){
                bool r = serachInBinaryTree(root->right, val);
                return r;
            }
            else{
                bool l = serachInBinaryTree(root->left, val);
                return l;
            }
        }
        .
        Node *root = takeInput();
        int x;
        cin >> x;

        if(serachInBinaryTree(root, x))
        {
            cout << "YES";
        }
        else{
            cout << "NO";
        }
    */

    /*
         || Complexity of searching in BST => O(h). h for height. Binary tree ta jodi bhalo hoy tahole h hoye jaay logN e and jodi kharap hoy tahole h hoye jaay N e.
    */

    /*
        || Insert in BST
        void insertBST(Node *root, int val)
        {
            if (root == NULL)
                root = new Node(val);

            if(root->val > val)
            {
                if(root->left == NULL)
                {
                    root->left = new Node(val);
                }
                else{
                    insertBST(root->left, val);
                }
            }
            else{
                if(root->right == NULL)
                {
                    root->right = new Node(val);
                }
                else{
                    insertBST(root->right, val);
                }
            }
        }
        .
        Node *root = takeInput();
        int x;
        cin >> x;
        insertBST(root, x);
        levelOrderTraversal(root);
    */

    /*
        || Complexity of insert in BST : O(h) for single value. O(n*h) for n number of values.
    */

    /*
        || Idea of converting array to BST + Converting array to BST implementation
        .
        Node *convertArrayToBST(int Arr[], int N, int l, int r)
        {
            if(l > r)
            {
                return NULL;
            }

            int mid = (l + r) / 2;
            Node *root = new Node(Arr[mid]);

            Node *leftRoot = convertArrayToBST(Arr, N, l, mid - 1); 
            Node *rightRoot = convertArrayToBST(Arr, N, mid + 1, r);

            root->left = leftRoot;
            root->right = rightRoot;

            return root;
        }
        .
        int N;
        cin >> N;

        int Arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> Arr[i];
        }
        Node *root = convertArrayToBST(Arr, N, 0, N - 1);
        levelOrderTraversal(root);

    */


    return 0;
}