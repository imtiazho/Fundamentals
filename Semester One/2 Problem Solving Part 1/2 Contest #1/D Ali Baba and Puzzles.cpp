#include<iostream>

using namespace std;

bool solvePuzzle(long long a, long long b, long long c, long long d) {
    if (a * b - c == d) return true;
    else if(a * b + c == d) return true;

    else if(a + b * c == d) return true;
    else if(a + b - c == d) return true;

    else if(a - b * c == d) return true;
    else if(a - b + c == d) return true;

    else return false;
}

int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a < -1000000000 || a > 1000000000 || b < -1000000000 || b > 1000000000 || c < -1000000000 || c > 1000000000 || d < -1000000000000000000 || a > 1000000000000000000)
    {
        return 1;
    }
    if(solvePuzzle(a, b, c, d))
    {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}
