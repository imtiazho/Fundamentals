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

int dis[100];
vector<Edge> edgeList;

void bellmanFord(int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (auto edge : edgeList)
        {
            int a, b, c;
            a = edge.a;
            b = edge.b;
            c = edge.c;

            if (dis[a] != INT_MAX && dis[a] + c < dis[b])
            {
                dis[b] = dis[a] + c;
            }
        }
    }

    bool cycle = false;
    for (auto edge : edgeList)
    {
        int a, b, c;
        a = edge.a;
        b = edge.b;
        c = edge.c;

        if (dis[a] != INT_MAX && dis[a] + c < dis[b])
        {
            cycle = true;
        }
    }

    if (cycle)
    {
        cout << "YES! Negative weight Cycle Detected!" << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << i << " -> " << dis[i] << endl;
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        edgeList.push_back(Edge(a, b, c));
    }

    for (int i = 0; i < n; i++)
        dis[i] = INT_MAX;
    dis[0] = 0;

    bellmanFord(n);

    return 0;
}

/*
    || Bellman-ford implimentation for undirected Graph
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

    int dis[100];
    vector<Edge> edgeList;

    void bellmanFord(int n)
    {
        for (int i = 0; i < n - 1; i++)
        {
            for (auto edge : edgeList)
            {
                int a, b, c;
                a = edge.a;
                b = edge.b;
                c = edge.c;

                if (dis[a] != INT_MAX && dis[a] + c < dis[b])
                {
                    dis[b] = dis[a] + c;
                }
            }
        }
    }

    int main()
    {
        int n, e;
        cin >> n >> e;
        while (e--)
        {
            int a, b, c;
            cin >> a >> b >> c;
            edgeList.push_back(Edge(a, b, c));
            edgeList.push_back(Edge(b, a, c)); // Bi - Directional
        }

        for (int i = 0; i < n; i++)
            dis[i] = INT_MAX;
        dis[0] = 0;

        bellmanFord(n);

        for (int i = 0; i < n; i++)
        {
            cout << i << " -> " << dis[i] << endl;
        }
        return 0;
    }
*/

/*
    || Bellman-ford implimentation for Directed Graph
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

    int dis[100];
    vector<Edge> edgeList;

    void bellmanFord(int n)
    {
        for (int i = 0; i < n - 1; i++)
        {
            for (auto edge : edgeList)
            {
                int a, b, c;
                a = edge.a;
                b = edge.b;
                c = edge.c;

                if (dis[a] != INT_MAX && dis[a] + c < dis[b])
                {
                    dis[b] = dis[a] + c;
                }
            }
        }
    }

    int main()
    {
        int n, e;
        cin >> n >> e;
        while (e--)
        {
            int a, b, c;
            cin >> a >> b >> c;
            edgeList.push_back(Edge(a, b, c));
        }

        for (int i = 0; i < n; i++)
            dis[i] = INT_MAX;
        dis[0] = 0;

        bellmanFord(n);

        for (int i = 0; i < n; i++)
        {
            cout << i << " -> " << dis[i] << endl;
        }
        return 0;
    }
*/

/*
    || Detect Negative weight cycle for  directed graph: Its like run loop one more time and if it update edges then we can say it has negative weight cycle.
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

    int dis[100];
    vector<Edge> edgeList;

    void bellmanFord(int n)
    {
        for (int i = 0; i < n - 1; i++)
        {
            for (auto edge : edgeList)
            {
                int a, b, c;
                a = edge.a;
                b = edge.b;
                c = edge.c;

                if (dis[a] != INT_MAX && dis[a] + c < dis[b])
                {
                    dis[b] = dis[a] + c;
                }
            }
        }

        bool cycle = false;
        for (auto edge : edgeList)
        {
            int a, b, c;
            a = edge.a;
            b = edge.b;
            c = edge.c;

            if (dis[a] != INT_MAX && dis[a] + c < dis[b])
            {
                cycle = true;
            }
        }

        if (cycle)
        {
            cout << "YES! Negative weight Cycle Detected!" << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                cout << i << " -> " << dis[i] << endl;
            }
        }
    }

    int main()
    {
        int n, e;
        cin >> n >> e;
        while (e--)
        {
            int a, b, c;
            cin >> a >> b >> c;
            edgeList.push_back(Edge(a, b, c));
        }

        for (int i = 0; i < n; i++)
            dis[i] = INT_MAX;
        dis[0] = 0;

        bellmanFord(n);

        return 0;
    }
*/
// ..