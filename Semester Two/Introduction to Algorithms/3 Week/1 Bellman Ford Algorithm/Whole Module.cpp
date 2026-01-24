#include <bits/stdc++.h>

using namespace std;

class Edge
{
public:
    int a, b, c;
    Edge(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};
int dis[1005];
vector<Edge> edgeList;

void bellmanFord(int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (auto ed : edgeList)
        {
            int a, b, c;
            a = ed.a;
            b = ed.b;
            c = ed.c;

            if (dis[a] != INT_MAX && dis[a] + c < dis[b])
                dis[b] = dis[a] + c;
        }
    }

    bool cycle = false;
    for (auto ed : edgeList)
    {
        int a, b, c;
        a = ed.a;
        b = ed.b;
        c = ed.c;

        if (dis[a] != INT_MAX && dis[a] + c < dis[b])
            cycle = true;
    }
    if (cycle)
        cout << "Negative weighted cycle detected" << endl;
    else
    {
        // cout << "NOPE" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << i << " -> " << dis[i] << endl;
        }
    }
}

int main()
{
    /*
        || Bellman Ford
        .
        class Edge
        {
        public:
            int a, b, c;
            Edge(int a, int b, int c)
            {
                this->a = a;
                this->b = b;
                this->c = c;
            }
        };
        int dis[1005];
        vector<Edge> edgeList;

        void bellmanFord(int n)
        {
            for (int i = 0; i < n - 1; i++)
            {
                for (auto ed : edgeList)
                {
                    int a, b, c;
                    a = ed.a;
                    b = ed.b;
                    c = ed.c;

                    if (dis[a] != INT_MAX && dis[a] + c < dis[b])
                        dis[b] = dis[a] + c;
                }
            }
        }
        .
        int n, e;
        cin >> n >> e;

        while (e--)
        {
            int a, b, c;
            cin >> a >> b >> c;
            edgeList.push_back(Edge(a, b, c));
            edgeList.push_back(Edge(b, a, c)); // for undirected graph
        }

        for (int i = 0; i < n; i++)
        {
            dis[i] = INT_MAX;
        }
        dis[0] = 0;

        bellmanFord(n);

        for (int i = 0; i < n; i++)
        {
            cout << i << " -> " << dis[i] << endl;
        }
    */

    /*
        || Detect negative weighted cycle using Bellman-Ford :: In the operation we run this loop one more time of n - 1. If value continue to update then we can say it is a negative cycle otherwise NO.
        .
        class Edge
        {
        public:
            int a, b, c;
            Edge(int a, int b, int c)
            {
                this->a = a;
                this->b = b;
                this->c = c;
            }
        };
        int dis[1005];
        vector<Edge> edgeList;

        void bellmanFord(int n)
        {
            for (int i = 0; i < n - 1; i++)
            {
                for (auto ed : edgeList)
                {
                    int a, b, c;
                    a = ed.a;
                    b = ed.b;
                    c = ed.c;

                    if (dis[a] != INT_MAX && dis[a] + c < dis[b])
                        dis[b] = dis[a] + c;
                }
            }

            // Run loop on all edge list for one time
            bool cycle = false;
            for (auto ed : edgeList)
            {
                int a, b, c;
                a = ed.a;
                b = ed.b;
                c = ed.c;

                if (dis[a] != INT_MAX && dis[a] + c < dis[b])
                    cycle = true;
            }
            if (cycle)
                cout << "Negative weighted cycle detected" << endl;
            else
            {
                // cout << "NOPE" << endl;
                for (int i = 0; i < n; i++)
                {
                    cout << i << " -> " << dis[i] << endl;
                }
            }
        }
        .
        int n, e;
        cin >> n >> e;

        while (e--)
        {
            int a, b, c;
            cin >> a >> b >> c;
            edgeList.push_back(Edge(a, b, c));
        }

        for (int i = 0; i < n; i++)
        {
            dis[i] = INT_MAX;
        }
        dis[0] = 0;

        bellmanFord(n);
    */

    return 0;
}