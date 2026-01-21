/*
Problem Statement: In 2077, everything became fashionable among robots, even arrays...

We will call an array of integers a
 fashionable if min(a)+max(a)
 is divisible by 2
 without a remainder, where min(a)
 — the value of the minimum element of the array a
, and max(a)
 — the value of the maximum element of the array a
.

You are given an array of integers a1,a2,…,an
. In one operation, you can remove any element from this array. Your task is to determine the minimum number of operations required to make the array a
 fashionable.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤103
). The description of the test cases follows.

The first line of each test case contains one integer n
 (1≤n≤50
) — the size of the array a
.

The second line of each test case contains n
 integers a1,a2,…,an
 (1≤ai≤50
) — the elements of the array a
.

Output
For each test case, output one integer — the minimum number of operations required to make the array a
 fashionable.
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void CASES()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    int op = INT_MAX;
    vector<int> ops(4, 0);
    if ((v.front() + v.back()) % 2)
    {
        if (v.front() % 2 == 1)
        {
            int i = n - 1;
            while (i >= 0 && v[i] % 2 == 0)
            {
                ops[0]++;
                i--;
            }
            i = 0;
            while(i < n && v[i] % 2 == 1){
                ops[1]++;
                i++;
            }
        }
        else{
            int i = n-1;
            while (i >= 0 && v[i] % 2 == 1)
            {
                ops[2]++;
                i--;
            }
            i = 0;
            while(i < n && v[i] % 2 == 0){
                ops[3]++;
                i++;
            }
        }
    }
    // cout << ops[0] << ' ' << ops[1] << ' ' << ops[2] << ' ' << ops[3] << '\n';

    if(ops[0] > 0) op = min(op, ops[0]);
    if(ops[1] > 0) op = min(op, ops[1]);
    if(ops[2] > 0) op = min(op, ops[2]);
    if(ops[3] > 0) op = min(op, ops[3]);

    if(op < INT_MAX)cout << op << '\n';
    else cout << 0 << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        CASES();
    }
    return 0;
}