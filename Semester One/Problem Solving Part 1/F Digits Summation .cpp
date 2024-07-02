#include<iostream>
#include <cstring>


using namespace std;

int main()
{
    string N;
    string M; // 13 12 = 5
    cin >> N >> M;


    int nLastPosi = N.length() - 1;
    int mLastPosi = M.length() - 1;

    char nLast = N[nLastPosi] - '0';
    char mLast = M[mLastPosi] - '0';



    if(nLast < 0 || nLast > 1000000000000000000 || mLast < 0 || mLast > 1000000000000000000)
    {
        return 1;
    }

    cout << nLast + mLast;

    return 0;
}
