/*
    https://codeforces.com/problemset/problem/20/C
*/


#include <bits/stdc++.h>

using namespace std;

#define ll long long int

vector<pair<ll, ll>> egdeList[100005];
ll parent[100005];
ll dis[100005];

void dijkstra(int src)
{
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> qu;
    qu.push({0, src});
    dis[src] = 0;

    while (!qu.empty())
    {
        auto par = qu.top();
        int parDis = par.first;
        int parNode = par.second;
        qu.pop();

        if (parDis > dis[parNode]) continue;

        for (auto child : egdeList[parNode])
        {
            int childNode = child.first;
            int childDis = child.second;

            if (parDis + childDis < dis[childNode])
            {
                dis[childNode] = parDis + childDis;
                qu.push({dis[childNode], childNode});
                parent[childNode] = parNode;
            }
        }
    }
}

void pathPrinting(ll n)
{
    if (dis[n] == LLONG_MAX)
    {
        cout << -1 << endl;
    }
    else{
        vector<ll> path;
        ll node = n;
        while(node != -1)
        {
            path.push_back(node);
            node = parent[node];
        }

        reverse(path.begin(), path.end());
        for(ll x : path)
        {
            cout << x << " ";
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
        egdeList[a].push_back({b, c});
        egdeList[b].push_back({a, c});
    }

    for (ll i = 1; i <= n; i++)
    {
        dis[i] = LLONG_MAX;
        parent[i] = -1;
    }

    dijkstra(1);
    pathPrinting(n);

    return 0;
}