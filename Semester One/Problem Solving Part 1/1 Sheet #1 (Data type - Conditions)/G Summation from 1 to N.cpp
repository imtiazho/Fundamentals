#include<iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    if(N < 1 || N > 1000000000 || N < 1 || N > 1000000000)
    {
        return 1;
    }


    // N * (N + 1) / 2
    long long sum = (static_cast<long long>(N) * (N + 1)) / 2;
    cout << sum;

    return 0;
}
