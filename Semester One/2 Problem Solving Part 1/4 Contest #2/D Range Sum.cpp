#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while(T--)
    {
        long long L, R;
        long long maximum, minimum;
        cin >> L >> R;
        maximum = max(L, R);
        minimum = min(L, R);
        minimum--;

        long long resultFirst = minimum*(minimum + 1) / 2;
        long long resultSecond = maximum*(maximum + 1) / 2;

        cout << resultSecond - resultFirst << endl;
    }
    return 0;
}
