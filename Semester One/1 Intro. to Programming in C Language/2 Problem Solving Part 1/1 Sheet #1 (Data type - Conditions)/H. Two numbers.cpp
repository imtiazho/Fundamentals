#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    double A, B;
    cin >> A >> B;

    double floored = floor(A / B);
    double ceiled = ceil(A / B);
    double rounded = round(A / B);

    cout << "floor " <<  A << " / " << B << " = " << floored << endl;
    cout << "ceil " <<  A << " / " << B << " = " << ceiled << endl;
    cout << "round " <<  A << " / " << B << " = " << rounded << endl;

    return 0;
}
