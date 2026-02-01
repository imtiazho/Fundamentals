#include <bits/stdc++.h>

using namespace std;

#define ll long long int

void printNumbers(ll n)
{
    if (n == 0)
        return;

    printNumbers(n / 10);
    cout << n % 10 << " ";
}

int main()
{
    ll n;
    cin >> n;
    while (n--)
    {
        ll x;
        cin >> x;

        // Its for corner case that wasnt mention in problem
        if (x == 0)
        {
            cout << "0";
        }

        printNumbers(x);
        cout << endl;
    }

    return 0;
}