#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;

    int Arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> Arr[i];
    }

    sort(Arr, Arr + N);

    for (int i = 0; i < Q; i++)
    {
        int x;
        cin >> x;
        int flag = 0;

        int l = 0;
        int r = N - 1;
        while(l <= r)
        {
            int mid = (l+r)/2;
            if(Arr[mid] == x)
            {
                flag = 1;
                break;
            }
            else if(Arr[mid] > x){
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }

        if (flag == 1)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }
    return 0;
}