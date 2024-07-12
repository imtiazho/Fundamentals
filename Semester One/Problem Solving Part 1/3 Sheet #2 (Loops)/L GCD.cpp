#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;
    int arr1[A];
    int arr2[B];
    int divisorCount = 0;
    int divisorCount2 = 0;
    int greatestDivisor = 0;

    for(int i = 1; i <= A; i++)
    {
        if(A % i == 0)
        {
            arr1[divisorCount] = i;
            divisorCount++;
        }
    }

    for(int i = 1; i <= B; i++)
    {
        if(B % i == 0)
        {
            arr2[divisorCount2] = i;
            divisorCount2++;
        }
    }


    for(int i = 0; i < divisorCount; i++)
    {
        for(int j = 0; j < divisorCount2; j++)
        {
            if(arr1[i] == arr2[j])
            {
                if(greatestDivisor < arr1[i])
                {
                    greatestDivisor = arr1[i];
                }
            }
        }
    }

    cout << greatestDivisor;

    return 0;
}
