/*
    ||
*/
#include <bits/stdc++.h>

using namespace std;

#define ll long long int

vector<pair<ll, ll>> adjList[100005];
ll dis[100005];
ll parent[100005];

void dijkstra(ll src)
{
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> qu;
    dis[src] = 0;
    qu.push({0, src});

    while (!qu.empty())
    {
        pair<ll, ll> par = qu.top();
        ll parDis = par.first;
        ll parNode = par.second;
        qu.pop();

        if (parDis > dis[parNode])
            continue;

        for (auto child : adjList[parNode])
        {
            ll childNode = child.first;
            ll childDis = child.second;

            if (parDis + childDis < dis[childNode])
            {
                dis[childNode] = parDis + childDis;
                qu.push({dis[childNode], childNode});
                parent[childNode] = parNode;
            }
        }
    }
}

int main()
{
    ll n, m;
    cin >> n >> m;
    while (m--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        adjList[a].push_back({b, c});
        adjList[b].push_back({a, c});
    }

    for (ll i = 1; i <= n; i++)
    {
        dis[i] = LLONG_MAX;
        parent[i] = -1;
    }

    dijkstra(1);

    if (dis[n] == LLONG_MAX)
        cout << -1 << endl;
    else
    {
        vector<ll> path;
        ll node = n;
        while (node != -1)
        {
            path.push_back(node);
            node = parent[node];
        }

        reverse(path.begin(), path.end());
        for (int x : path)
        {
            cout << x << " ";
        }
    }

    return 0;
}