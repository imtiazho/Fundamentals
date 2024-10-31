#include<iostream>
#include <algorithm>

using namespace std;

int main()
{

    /**
        Example 1:
        Input: 1 15 5 27
        start = max(1, 5) = 5
        end = min(15, 27) = 15
        Since 5 <= 15, we print 5 15.

        Example 2:
        Input: 2 5 6 12
        start = max(2, 6) = 6
        end = min(5, 12) = 5
        Since 6 > 5, we print -1.
    */
    long long L1, R1, L2, R2;
    cin >> L1 >> R1 >> L2 >> R2;


    if(L1 < 0 || L1 >1000000000 || L2 < 0 || L2 >1000000000 || R1 < 0 || R1 >1000000000 || R2 < 0 || R2 >1000000000 || L1 > R1 || R2 < L2)
    {
        return 1;
    }

    long long start = max(L1, L2);
    long long ending = min(R1, R2);
    if(start <= ending)
    {
        cout << start << " " << ending;
    }
    else if(start > ending)
    {
        cout << -1;
    }

    return 0;
}
