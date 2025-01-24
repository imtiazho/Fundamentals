// https://docs.google.com/document/d/1HlhOqkYlEajgtr8_AF69KHqIWHJM5Kdm/edit

// https://docs.google.com/document/d/1QEUDBWXJZyDUk4aVZ1jhR9ux8TWXzdet-TSG9RhTKkk/edit?tab=t.0

/*
    || Is Node Present
    if(root == NULL)
    {
        return false;
    }

    if(root->data == x)
    {
        return true;
    }

    bool l = funName(root->left, x);
    bool r = funName(root->right, x);

    if(l == true || r == true)
        return true;
    else
        return false;
*/

/*
    || STL pair
    // // pair<int, int> p;
    // pair<string, int> p;
    // // p = make_pair(2, 3);
    // p = {"Hello", 3};
    // cout << p.first << endl;
    // cout << p.second << endl;

    vector<pair<int, int>> v(10);
    for (int i = 0; i < 3; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    for (int i = 0; i < 3; i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
*/

/*
    || Node level
    queue<pair<TreeNode<int> *, int>> q;
    if(root)
        q.push({root, 1});

    while(!q.empty())
    {
        pair<TreeNode<int> *, int> parent = q.front();
        q.pop();

        TreeNode<int> * node = parent.first;
        int level = parent.second;

        if(node->val == searchValue)
        {
            return level;
        }

        if(node->left)
            q.push({node->left, level + 1});
        if(node->right)
            q.push({node->right, level + 1});
    }
*/

/*
    || Left View of a Binary Tree
    vector<int> ans;
    bool freqp[3005] = {false} ;
    queue<pair<TreeNode<int> *, int>> q;
    if(root)
        q.push({root, 1});

    while(!q.empty())
    {
        pair<TreeNode<int> *, int> parent = q.front();
        q.pop();

        TreeNode<int> * node = parent.first;
        int level = parent.second;

        if(freq[level] == false)
        {
            ans.push_back(node->data);
            freq[level] = true;
        }


        if(node->left)
            q.push({node->left, level + 1});
        if(node->right)
            q.push({node->right, level + 1});
    }

    retutn ans;
*/

/*
    || Diameter of a Binary Tree
    int mx;
    int maxheight(Node *root)
    {
        if (root == NULL)
        {
            return 0;
        }

        if (root->left == NULL && root->right == NULL)
        {
            return 1;
        }

        int l = maxheight(root->left);
        int r = maxheight(root->right);

        int diameter = l + r;
        mx = max(mx, d);
        return max(l, r) + 1;
    }
    .
    // Inside targeted function
    mx = 0;
    int h = maxheight(root);
    return mx;
*/

/*
    || Special Binary Tree
    if(root == NULL)
    {
        return true;
    }
    if((root->left != NULL && root->right == NULL) || (root->left == NULL && root->right != NULL))
    {
        return false;
    }

    bool l = funName(root->left); 
    bool r = funName(root->right); 

    return l && r;
*/

/*
    || Reverse Level Order Traversal

     levelOrderTraversal(Node *root)
    {
        vector<int> v;
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
            v.push_back(root->val);

            // 3 Children push kora but check kore nitee hobee je child ache or not
            if (f->left)
                qu.push(f->left);
            if (f->right)
                qu.push(f->right);
        }

        reverse(v.begin(), v.end());
        return v;
    }
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{

    return 0;
}