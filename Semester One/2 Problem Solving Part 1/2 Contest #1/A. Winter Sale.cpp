#include<iostream>
#include <iomanip> // Required for fixed and setprecision

using namespace std;

int main()
{
    double X, P;
    cin >> X >> P;

    if(X < 1 || X > 99 || P < 1 || P > 40000)
    {
        return 1;
    }

    int restOfParcentage = 100 - X;
    double compute = P / restOfParcentage;
    double actualPrice = compute*100;
    cout << fixed << setprecision(2);
    cout << actualPrice;

    return 0;
}
