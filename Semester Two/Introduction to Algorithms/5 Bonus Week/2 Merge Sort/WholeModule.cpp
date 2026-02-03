#include <bits/stdc++.h>

using namespace std;

void conquer(int c[], int l, int mid, int r)
{
    int n = mid - l + 1; // mid - l + 1
    int a[n];
    int k = l; // to keep track of params array index
    for (int i = 0; i < n; i++, k++)
    {
        a[i] = c[k];
        // k++; // you can use increament in here or init section
    }

    int m = r - mid;
    int b[m];
    k = mid + 1; // to keep track of params array index
    for (int i = 0; i < m; i++, k++)
    {
        b[i] = c[k];
        // z++ // you can use increament in here or init section
    }

    int i = 0, j = 0, curr = l;
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
}

void divide(int a[], int l, int r)
{
    if (l >= r)
        return;

    int mid = (l + r) / 2;
    divide(a, l, mid);
    divide(a, mid + 1, r);

    // Call for conquer
    conquer(a, l, mid, r);
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

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}

/*
    || Conquer Implimentations of merge sort
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

/*
    || Divide Implimentations of merge sort
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
*/

/*
    || Total merge sort. Its total complexity is O(N*logN)
    #include <bits/stdc++.h>

    using namespace std;

    void conquer(int c[], int l, int mid, int r)
    {
        int n = mid - l + 1; // mid - l + 1
        int a[n];
        int k = l; // to keep track of params array index
        for (int i = 0; i < n; i++, k++)
        {
            a[i] = c[k];
            // k++; // you can use increament in here or init section
        }

        int m = r - mid;
        int b[m];
        k = mid + 1; // to keep track of params array index
        for (int i = 0; i < m; i++, k++)
        {
            b[i] = c[k];
            // z++ // you can use increament in here or init section
        }

        int i = 0, j = 0, curr = l;
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
    }

    void divide(int a[], int l, int r)
    {
        if (l >= r)
            return;

        int mid = (l + r) / 2;
        divide(a, l, mid);
        divide(a, mid + 1, r);

        // Call for conquer
        conquer(a, l, mid, r);
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

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }

        return 0;
    }
*/
// ..