#include <iostream>

using namespace std;

int main() {
    int N, M;
    while(cin >> N >> M)
    {
        if(N <= 0 || M <= 0)
        {
            break;
        }

        int start = (M <= N) ? M : N;
        int ending = (M <= N) ? N : M;

        for(int i = start; i <= ending; i++)
        {
            cout << i << " ";
        }

        int sum = 0;
        for(int i = start; i <= ending; i++)
        {
            sum += i;
        }
        cout << "sum =" << sum << endl;
    }


    return 0;
}
