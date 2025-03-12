// https://docs.google.com/document/d/13LPOIQhY38KaGh8yqvWHn6Sf3t-KBckvbv750NWhtVA/edit?tab=t.0
#include <bits/stdc++.h>

using namespace std;

int main()
{
    /*
        || What is Graph? Difference?
    */

    /*
        || Types of Graph?
    */

    /*
        || Input graph
    */

    /*
        || Adjacency Matrix : Idea using 2D Array
    */

    /*
        || Adjacency Matrix Implementation : Undirected graph
        .
        int n, e;
        cin >> n >> e;
        int adj_mat[n][n];

        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         adj_mat[i][j] = 0;
        //     }
        // }
        // Short cut
        memset(adj_mat, 0, sizeof(adj_mat));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                {
                    adj_mat[i][j] = 1;
                }
            }
        }

        for (int i = 0; i < e; i++)
        {
            int a, b;
            cin >> a >> b;
            adj_mat[a][b] = 1;
            adj_mat[b][a] = 1; // remove this part for directrd graphs
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << adj_mat[i][j] << " ";
            }
            cout << endl;
        }
    */

    /*
        || Adjacency List
        int n, e;
        cin >> n >> e;
        vector<int> adj_list[n];

        while (e--)
        {
            int a, b;
            cin >> a >> b;
            adj_list[a].push_back(b);
            adj_list[b].push_back(a); // remove this part for directrd graphs
        }

        for (int i = 0; i < n; i++)
        {
            cout << i << " -> ";
            for(int x : adj_list[i])
            {
                cout << x << " ";
            }
            cout << endl;
        }
    */

    /*
        || Edge List
        int n, e;
        cin >> n >> e;
        vector<pair<int, int>> edList;
        while (e--)
        {
            int a, b;
            cin >> a >> b;
            edList.push_back({a, b});
        }
    
        for (pair<int, int> p : edList)
        {
            cout << p.first << " " << p.second << endl;
        }
    */

    return 0;
}