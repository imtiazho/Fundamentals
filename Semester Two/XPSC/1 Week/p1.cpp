#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char cells[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> cells[i];
        }

        int l, r;
        for (int i = 1; i <= n; i++)
        {
            if (cells[i] == 'B')
            {
                l = i;
                break;
            }
        }

        for (int j = n; j >= 1; j--)
        {
            if (cells[j] == 'B')
            {
                r = j;
                break;
            }
        }

        int counter = 0;
        for (int i = l; i <= r; i++)
        {
            counter++;
        }

        cout << counter << endl;
    }

    return 0;
}