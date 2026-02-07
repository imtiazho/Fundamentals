/*
    || https://atcoder.jp/contests/abc209/tasks/abc209_a?lang=en
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int A, B, counter = 0;
    cin >> A >> B;
    for(int i = A; i <= B; i++)
        counter++;
        
    cout << counter << endl;

    return 0;
}