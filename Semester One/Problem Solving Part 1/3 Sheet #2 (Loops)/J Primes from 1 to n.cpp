#include<iostream>
#include <cmath>


using namespace std;

bool isPrime(int num)
{
    if(num < 0)
    {
        return false;
    }
    if(num % 2 == 0 && num != 2)
    {
        return false;
    }

    for(int i = 3; i <= sqrt(num); i += 2)
    {
        if(num % i == 0)
        {
            return false;
        }
    }

    return true;
}


int main()
{
    int N;
    cin >> N;
    for(int i = 2; i <= N; i++)
    {
        if(isPrime(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}
