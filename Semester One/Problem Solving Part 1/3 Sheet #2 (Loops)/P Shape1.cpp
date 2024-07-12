#include<iostream>
#include<string>


using namespace std;

int main()
{
    int N;
    cin >> N;
    string number;
    for(int i = 0; i <= N; i++)
    {
        cin >> number;
        for(int j = number.length() - 1; j >= 0; j--)
        {
            cout << number[j] << " ";
        }
    }

    return 0;
}
