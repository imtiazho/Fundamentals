/*
    || https://atcoder.jp/contests/abc209/tasks/abc209_a?lang=en
*/

#include <iostream>

using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    int num = -1;
    for (int i = A; i <= B; i++)
    {
        if (i % C == 0)
        {
            num = i;
            break;
        }
    }

    if (num != -1)
    {
        cout << num << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}