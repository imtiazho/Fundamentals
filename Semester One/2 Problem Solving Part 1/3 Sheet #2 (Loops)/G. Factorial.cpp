#include <iostream>

using namespace std;

int main() {
    int T, N;
    long long int fact = 1;
    cin >> T;

    for(int i = 1; i <= T; i++)
    {
        cin >> N;
        if(N == 1 && N == 0)
        {
            return 1;
        }
        for(int j = 1; j <= N; j++)
        {
            fact *= j;
        }
        cout << fact << endl;
        fact = 1;
    }
    return 0;
}
