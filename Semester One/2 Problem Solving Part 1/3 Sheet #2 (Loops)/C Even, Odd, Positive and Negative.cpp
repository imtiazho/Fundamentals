#include <iostream>
using namespace std;

int main() {
    int N, X, Even = 0, Odd = 0, Positive = 0, Negative = 0;
    cin >> N;
    for(int i = 1; i <= N; i++)
    {
        cin >> X;
        if(X % 2 == 0)
        {
            Even++;
        }
        if(X % 2 != 0)
        {
            Odd++;
        }
        if(X > 0)
        {
            Positive++;
        }
        if(X < 0) {
            Negative++;
        }
    }

    cout << "Even: " << Even << endl << "Odd: " << Odd << endl << "Positive: " << Positive << endl << "Negative: " << Negative;
    return 0;
}
