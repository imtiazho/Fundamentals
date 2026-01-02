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

void countNode(Node *root)
{
    if (!root)
    {
        cout << "NO TREE" << endl;
        return;
    }

    int counter = 0;
    queue<Node *> qu;
    qu.push(root);

    while (!qu.empty())
    {
        Node *node = qu.front();
        qu.pop();

        counter++;

        if (node->left)
            qu.push(node->left);
        if (node->right)
            qu.push(node->right);
    }

    cout << counter << endl;
}

int countNodeInRecusion(Node *root)
{
    if (!root)
        return 0;

    int l = countNodeInRecusion(root->left);
    int r = countNodeInRecusion(root->right);

    return r + l + 1;
}

int countLeafNode(Node *root)
{
    if (!root)
        return 0;

    if (!root->left && !root->right)
        return 1;

    int l = countLeafNode(root->left);
    int r = countLeafNode(root->right);

    return l + r;
}

int countHeight(Node *root)
{
    if (!root)
        return 0;
    if (!root->left && !root->right)
        return 0;

    int l = countHeight(root->left);
    int r = countHeight(root->right);

    return max(l, r) + 1;
}

int countDepth(Node *root)
{
    if (!root)
        return 0;
    if (!root->left && !root->right)
        return 1;

    int l = countDepth(root->left);
    int r = countDepth(root->right);

    return max(l, r) + 1;
}

bool checkNode(Node *root, int x)
{
    if (!root)
        return false;
    if (root->val == x)
        return true;

    bool l = checkNode(root->left, x);
    bool r = checkNode(root->right, x);

    return l || r;
}

bool checkNodeByLevelOrderTraversal(Node *root, int x)
{
    if (!root)
    {
        return false;
    }
    queue<Node *> qu;
    qu.push(root);

    while (!qu.empty())
    {
        Node *parent = qu.front();
        qu.pop();

        if (parent->val == x)
            return true;

        if (parent->left)
            qu.push(parent->left);
        if (parent->right)
            qu.push(parent->right);
    }

    return false;
}

int checkLevelOfTargetedValue(Node *root, int x)
{
    // if(!root) return 0;
    queue<pair<Node *, int>> qu;
    if (root)
        qu.push({root, 1});

    while (!qu.empty())
    {
        pair<Node *, int> parent = qu.front();
        qu.pop();
        Node *node = parent.first;
        int level = parent.second;

        if (node->val == x)
        {
            return level;
        }

        if (node->left)
            qu.push({root->left, level + 1});
        if (node->right)
            qu.push({root->right, level + 1});
    }
}

void printLeftViewOfTree(Node *root)
{
    // Its want to print level's first node in tree.
    vector<int> ansVector;
    queue<pair<Node *, int>> qu;
    bool freQ[105] = {false};
    if (root)
        qu.push({root, 1});

    while (!qu.empty())
    {
        pair<Node *, int> parent = qu.front();
        qu.pop();
        Node *node = parent.first;
        int level = parent.second;

        if (freQ[level] == false)
        {
            ansVector.push_back(node->val);
            freQ[level] = true;
        }

        if (node->left)
            qu.push({node->left, level + 1});
        if (node->right)
            qu.push({node->right, level + 1});
    }

    for (int x : ansVector)
    {
        cout << x << " ";
    }
}

int diameter = 0;
int findDiameter(Node *root)
{
    if (!root)
        return 0;

    if (!root->left && !root->right)
        return 1;

    int l = findDiameter(root->left);
    int r = findDiameter(root->right);

    diameter = max(diameter, l + r);

    return max(l, r) + 1;
}

bool checkSpecialOrNot(Node *root)
{
    if (!root)
        return true;

    if (root->left && !root->right || !root->left && root->right)
        return false;

    bool l = checkSpecialOrNot(root->left);
    bool r = checkSpecialOrNot(root->right);

    return l && r;
}

void reverseLevelOrderTraversal(Node *root)
{
    vector<int> ans;
    if (!root)
    {
        return;
    }

    queue<Node *> qu;
    qu.push(root);

    while (!qu.empty())
    {
        Node *node = qu.front();
        qu.pop();

        ans.push_back(node->val);

        if (node->left)
            qu.push(node->left);
        if (node->right)
            qu.push(node->right);
    }

    reverse(ans.begin(), ans.end());
    for (int x : ans)
    {
        cout << x << " ";
    }
}

int sumOfLeftNode(Node *root)
{
    if (!root)
        return 0;

    int sum = 0;
    if (root->left && !root->left->left && !root->left->right)
    {
        sum += root->left->val;
    }

    sum += sumOfLeftNode(root->left);
    sum += sumOfLeftNode(root->right);

    return sum;
}

int sumOfLeftNodeByLevelOrderTra(Node *root)
{
    queue<Node *> qu;
    if (root)
        qu.push(root);

    int sum = 0;
    while (!qu.empty())
    {
        Node *node = qu.front();
        qu.pop();

        if (node->left && !node->left->left && !node->left->right)
        {
            sum += node->left->val;
        }

        if (node->left)
            qu.push(node->left);
        if (node->right)
            qu.push(node->right);
    }

    return sum;
}

vector<int> checkLeaves(Node *root)
{
    vector<int> leaves;
    if (!root)
        return leaves;

    if (!root->left && !root->right)
    {
        leaves.push_back(root->val);
        return leaves;
    }

    vector<int> leftLeaves = checkLeaves(root->left);
    vector<int> rightLeaves = checkLeaves(root->right);

    // Merge them
    leaves.insert(leaves.end(), leftLeaves.begin(), leftLeaves.end());
    leaves.insert(leaves.end(), rightLeaves.begin(), rightLeaves.end());

    return leaves;
}

bool sameOrNotTree(Node *root1, Node *root2)
{
    if (!root1 && root2 == NULL)
        return true;
    if (!root1)
        return false;
    if (!root2)
        return false;

    if (root1->val != root2->val)
        return false;

    bool l = sameOrNotTree(root1->left, root2->left);
    bool r = sameOrNotTree(root1->left, root2->left);

    return l && r;
}

vector<int> rightSideView(Node *root)
{
    vector<int> ansVector;
    queue<Node *> qu;
    if (root)
        qu.push(root);

    while (!qu.empty())
    {
        int sz = qu.size();
        vector<int> eachLevelNode;
        while (sz--)
        {
            Node *node = qu.front();
            qu.pop();

            eachLevelNode.push_back(node->val);

            if (node->left)
                qu.push(node->left);
            if (node->right)
                qu.push(node->right);
        }

        ansVector.push_back(eachLevelNode.back());
    }

    return ansVector;
}

int main()
{
    Node *rootOne = takeInput();
    Node *rootTwo = takeInput();

    if (sameOrNotTree(rootOne, rootTwo))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}