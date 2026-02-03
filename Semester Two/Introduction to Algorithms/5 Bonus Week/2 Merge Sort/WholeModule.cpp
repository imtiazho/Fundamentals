#include <bits/stdc++.h>

using namespace std;

void divide(int a[], int l, int r)
{
    // To check how divide work
    for (int i = l; i <= r; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    if (l >= r)
        return;
    
    int mid = (l + r) / 2;
    divide(a, l, mid);
    divide(a, mid + 1, r);
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    divide(a, 0, n - 1);

    return 0;
}

/*
    || Conquer Implimentations
    #include <bits/stdc++.h>

    using namespace std;

    int main()
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int m;
        cin >> m;
        int b[m];
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        int c[n + m];
        int i = 0, j = 0, curr = 0;
        while (i < n && j < m)
        {
            if (a[i] < b[j])
            {
                c[curr] = a[i];
                i++;
                curr++;
            }
            else
            {
                c[curr] = b[j];
                j++;
                curr++;
            }
        }

        while (i < n)
        {
            c[curr] = a[i];
            i++;
            curr++;
        }
        while (j < m)
        {
            c[curr] = b[j];
            j++;
            curr++;
        }

        for (int k = 0; k < n + m; k++)
        {
            cout << c[k] << " ";
        }



        return 0;
    }
*/

// ..