#include <bits/stdc++.h>

using namespace std;

int parent[100];
int groupSize[100];

int find(int node)
{
    if (parent[node] == -1)
        return node;

    int leader = find(parent[node]);
    parent[node] = leader; // By using it you can optimize this function. When function return ultimate leader among nodes then it save as leader in LEADER variable. Then for each return back to each node it save and keep track their leeader by parent[node] = leader; this line. When we union new value to the group then no need to check each node to find leader of them cause it already saved in first time.

    return leader;
}

void dsuUnion(int node1, int node2)
{
    int leader1 = find(node1);
    int leader2 = find(node2);

    if (groupSize[leader1] >= groupSize[leader2])
    {
        parent[leader2] = leader1;
        groupSize[leader1] += groupSize[leader2];
    }
    else
    {
        parent[leader1] = leader2;
        groupSize[leader2] += groupSize[leader1];
    }
}

int main()
{
    memset(parent, -1, sizeof(parent));
    memset(groupSize, 1, sizeof(groupSize));

    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int leaderA = find(a);
        int leaderB = find(b);

        if (leaderA == leaderB)
        {
            cout << "Cycle Detected" << endl;
        }
        else
        {
            dsuUnion(a, b);
        }
    }

    for (int i = 1; i <= 4; i++)
    {
        cout << i << " -> " << parent[i] << endl;
    }

    return 0;
}

/*
    || Normal Implimentation of DSU and find function using loop
    #include <bits/stdc++.h>

    using namespace std;

    int parent[100];

    int find(int node)
    {
        while(parent[node] != -1)
        {
            node = parent[node];
        }

        return node;
    }

    int main()
    {
        memset(parent, -1, sizeof(parent)); // If you set parent in manually then you can ignore this line
        parent[1] = -1;
        parent[2] = 1;
        parent[3] = 1;
        parent[4] = 5;
        parent[5] = 3;

        cout << find(4) << endl;

        return 0;
    }

*/

/*
    || Impliment find function using recursion
    #include <bits/stdc++.h>

    using namespace std;

    int parent[100];

    int find(int node)
    {
        if(parent[node] == -1)
            return node;

        int leader = find(parent[node]); // It call until base case return final node then we return leader to main function.
        return leader;
    }

    int main()
    {
        memset(parent, -1, sizeof(parent)); // If you set parent in manually then you can ignore this line
        parent[1] = -1;
        parent[2] = 1;
        parent[3] = 1;
        parent[4] = 5;
        parent[5] = 3;

        cout << find(4) << endl;

        return 0;
    }
*/

/*
    || Find function in recursion optimze version
    #include <bits/stdc++.h>

    using namespace std;

    int parent[100];

    int find(int node)
    {
        if (parent[node] == -1)
            return node;

        int leader = find(parent[node]);
        parent[node] = leader; // By using it you can optimize this function. When function return ultimate leader among nodes then it save as leader in LEADER variable. Then for each return back to each node it save and keep track their leeader by parent[node] = leader; this line. When we union new value to the group then no need to check each node to find leader of them cause it already saved in first time.

        return leader;
    }

    int main()
    {
        memset(parent, -1, sizeof(parent)); // If you set parent in manually then you can ignore this line
        parent[1] = -1;
        parent[2] = 1;
        parent[3] = 1;
        parent[4] = 5;
        parent[5] = 3;

        cout << find(4) << endl;

        return 0;
    }
*/

/*
    || Union Implimentation
    #include <bits/stdc++.h>

    using namespace std;

    int parent[100];
    int groupSize[100];

    int find(int node)
    {
        if (parent[node] == -1)
            return node;

        int leader = find(parent[node]);
        parent[node] = leader; // By using it you can optimize this function. When function return ultimate leader among nodes then it save as leader in LEADER variable. Then for each return back to each node it save and keep track their leeader by parent[node] = leader; this line. When we union new value to the group then no need to check each node to find leader of them cause it already saved in first time.

        return leader;
    }

    void dsuUnion(int node1, int node2)
    {
        int leader1 = find(node1);
        int leader2 = find(node2);

        if (groupSize[leader1] >= groupSize[leader2])
        {
            parent[leader2] = leader1;
            groupSize[leader1] += groupSize[leader2];
        }
        else
        {
            parent[leader1] = leader2;
            groupSize[leader2] += groupSize[leader1];
        }
    }

    int main()
    {
        memset(parent, -1, sizeof(parent));
        memset(groupSize, 1, sizeof(groupSize));

        dsuUnion(1, 3);
        dsuUnion(2, 3);
        dsuUnion(3, 4);

        for (int i = 1; i <= 4; i++)
        {
            cout << i << " -> " << parent[i] << endl;
        }

        return 0;
    }
*/

/*
    || DSU cycle detection
    #include <bits/stdc++.h>

    using namespace std;

    int parent[100];
    int groupSize[100];

    int find(int node)
    {
        if (parent[node] == -1)
            return node;

        int leader = find(parent[node]);
        parent[node] = leader; 

    return leader;
}

void dsuUnion(int node1, int node2)
{
    int leader1 = find(node1);
    int leader2 = find(node2);

    if (groupSize[leader1] >= groupSize[leader2])
    {
        parent[leader2] = leader1;
        groupSize[leader1] += groupSize[leader2];
    }
    else
    {
        parent[leader1] = leader2;
        groupSize[leader2] += groupSize[leader1];
    }
}

int main()
{
    memset(parent, -1, sizeof(parent));
    memset(groupSize, 1, sizeof(groupSize));

    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int leaderA = find(a);
        int leaderB = find(b);

        if (leaderA == leaderB)
        {
            cout << "Cycle Detected" << endl;
        }
        else
        {
            dsuUnion(a, b);
        }
    }

    for (int i = 1; i <= 4; i++)
    {
        cout << i << " -> " << parent[i] << endl;
    }

    return 0;
}
*/


// ..