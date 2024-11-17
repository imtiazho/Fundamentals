#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;
    for(int i = 1; i <= T; i++)
    {
        int X, Y;
        cin >> X >> Y;

        int start = (X <= Y) ? X : Y;
        int ending = (X <= Y) ? Y : X;

        int sum = 0;
        for(int j = start + 1; j < ending; j++)
        {
            if(j % 2 != 0)
            {
                sum += j;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
