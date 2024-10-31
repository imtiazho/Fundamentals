#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long long N, maximum = 0;
    cin >> N;
    vector<long long> divide;

    for(int i = 1; i <= N; i++)
    {
        long long num, divideCounter = 0;
        cin >> num;
        while(num > 0)
        {
            if(num % 2 == 0)
            {
                divideCounter++;
                num = num / 2;
            }
            else{
                break;
            }
        }
        divide.push_back(divideCounter);
    }

    for(long long element : divide)
    {
        if(element > maximum)
        {
            maximum = element;
        }
    }

    cout << maximum;
    return 0;
}
