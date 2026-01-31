#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;

        vector<pair<long long int, int>> V;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            V.push_back({x, i});
        }

        sort(V.begin(), V.end(), greater<pair<long long int, int>>());


        vector<long long int> indexArr;
        indexArr.push_back(V[0].second);
        indexArr.push_back(V[1].second);

        sort(indexArr.begin(), indexArr.end());
        for (int x : indexArr)
        {
            cout << x << " ";
        }
        
        cout << endl;
    }

    return 0;
}