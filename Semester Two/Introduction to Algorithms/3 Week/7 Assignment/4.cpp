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

        vector<int> V;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            V.push_back(x);
        }

        vector<int> V2 = V;
        sort(V2.begin(), V2.end(), greater<>());

        int leftIndexValue = V2[1];
        int rightIndexValue = V2[0];
        // int leftIndex;
        // int rightIndex;

        vector<int> indexArr;
        for (int i = 0; i < n; i++)
        {
            if (V[i] == leftIndexValue)
            {
                indexArr.push_back(i);
            }
            else if (V[i] == rightIndexValue)
            {
                indexArr.push_back(i);
            }
        }

        sort(indexArr.begin(), indexArr.end());
        for (int x : indexArr)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}