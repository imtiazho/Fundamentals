#include<iostream>

using namespace std;

int main()
{
    double N;
    cin >> N;

    if(N < 0 || N > 1000)
    {
        return 1;
    }

    int Intvalue = N;
    if(N - Intvalue == 0)
    {
        cout << "int " << Intvalue;
    }

    double restDecimal = N - Intvalue;
    if(N - Intvalue != 0)
    {
        cout << "float " << Intvalue << " " << restDecimal;
    }

    return 0;
}
