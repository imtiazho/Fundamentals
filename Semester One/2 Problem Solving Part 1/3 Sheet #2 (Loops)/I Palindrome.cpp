#include<iostream>

using namespace std;

int reversedNumber(int num)
{
    int reversed = 0;
    int original = num;

    int sign = 1;
    if(num < 0)
    {
        sign = -1;
        num = abs(num);
    }

    while(num > 0)
    {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }

    return reversed * sign;
}

int main()
{
    int N;
    cin >> N;
    int reversed = reversedNumber(N);
    if(N == reversed)
    {
        cout << reversed << endl << "YES";
    }
    else{
        cout << reversed << endl << "NO";
    }
    return 0;
}
