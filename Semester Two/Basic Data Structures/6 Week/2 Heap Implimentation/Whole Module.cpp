#include <bits/stdc++.h>

using namespace std;

void insertHeap(vector<int> &v, int val)
{
    v.push_back(val);
    int cur_index = v.size() - 1;
    while (cur_index != 0)
    {
        int parent = (cur_index - 1) / 2;
        if (v[parent] < v[cur_index])
            swap(v[parent], v[cur_index]);
        else
            break;
        cur_index = parent;
    }
}

void deleteHeap(vector<int> &v)
{
    v[0] = v.back();
    v.pop_back();
    int cur_index = 0;

    while (true)
    {
        int left_index = cur_index * 2 + 1;
        int right_index = cur_index * 2 + 2;

        int leftval = INT_MAX, rightVal = INT_MIN;
        if (left_index < v.size())
            leftval = v[left_index];

        if (right_index < v.size())
            rightVal = v[right_index];

        if (leftval > rightVal && leftval > v[cur_index])
        {
            swap(v[left_index], v[cur_index]);
            cur_index = left_index;
        }
        else if (rightVal > leftval && rightVal > v[cur_index])
        {
            swap(v[right_index], v[cur_index]);
            cur_index = right_index;
        }
        else
        {
            break;
        }
    }
}

int main()
{
    /*
        || What is Complete Binary Tree => A complete binary tree is a binary tree where all levels are filled, except possibly the last level, and all nodes in the last level are as far left as possible. Its height log(N).
    */

    /*
        || Array representation of complete binary tree :
        parent_index*2 + 1 = left_index,
        parent_index*2 + 2 = left_index,

        (child_index - 1) / 2 = parent_index
    */

    /*
        || What is heap? => A Heap is a complete binary tree data structure that satisfies the heap property: for every node, the value of its children is greater than or equal to its own value. Heaps are usually used to implement priority queues, where the smallest (or largest) element is always at the root of the tree.

        Min heap => In a Min-Heap the key present at the root node must be less than or equal among the keys present at all of its children.

        Max Heap => In a Max-Heap the key present at the root node must be greater than or equal among the keys present at all of its children.
    */

    /*
        || Insert in heap theory + Implementation?
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
            cin >> v[i];

        int val;
        cin >> val;

        v.push_back(val);
        int cur_index = v.size() - 1;
        while (cur_index != 0)
        {
            int parent = (cur_index - 1) / 2;
            if (v[parent] < v[cur_index])
                swap(v[parent], v[cur_index]);
            else
                break;
            cur_index = parent;
        }
    */

    /*
        || Complexity of insert in heap => O(logN)
    */

    /*
        || Delete from heap theory
    */
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    int val;
    cin >> val;
    insertHeap(v, val);
    deleteHeap(v);
    
    return 0;
}