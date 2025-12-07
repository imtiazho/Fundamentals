#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> v(N);
    int totalSum = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
        totalSum += v[i];
    }
    sort(v.begin(), v.end());

    int T;
    cin >> T;
    while(T--)
    {
        int x;
        cin >> x;

        int l = 0;
        int r = N - 1;
        int mid = (l + r) / 2;
        bool flag = false;

        while(l <= r)
        {
            if(x == v[mid])
            {
                flag = true;
            }
            else if(x < v[mid])
            {
                r = mid - 1;
            }
            else if(x > v[mid])
            {
                l = mid + 1;
            }
        }

        if(flag)
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
