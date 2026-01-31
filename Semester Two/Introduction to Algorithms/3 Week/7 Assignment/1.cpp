#include <bits/stdc++.h>

using namespace std;

const int INF = 1e18;

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

int main()
{
    vector<Edge> edgeList;
    int n, m;
    cin >> n >> m;

    vector<int> dis(n + 5, INF);
    while (m--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        edgeList.push_back(Edge(a, b, c));
    }

    int s, t;
    cin >> s >> t;
    dis[s] = 0;
    for (int i = 1; i < n; i++)
    {
        for (auto edge : edgeList)
        {
            int a, b, c;
            a = edge.a;
            b = edge.b;
            c = edge.c;

            if (dis[a] + c < dis[b] && dis[a] != INF)
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

        if (dis[a] + c < dis[b] && dis[a] != INF)
        {
            cycle = true;
            break;
        }
    }

    if (cycle)
    {
        cout << "Negative Cycle Detected" << endl;
    }
    else
    {
        while (t--)
        {
            int d;
            cin >> d;

            if (dis[d] == INF)
            {
                cout << "Not Possible" << endl;
            }
            else
            {
                cout << dis[d] << endl;
            }
        }
    }

    return 0;
}