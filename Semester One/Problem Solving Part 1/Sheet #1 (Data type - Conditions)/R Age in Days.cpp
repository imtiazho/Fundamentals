#include<iostream>

using namespace std;

int main()
{
    long long days;
    cin >> days;
    int years = 0, month = 0, restDays = days;

    if(days < 0 || days  > 1000000)
    {
        return 1;
    }
    if(days >= 365)
    {
        years = days / 365;
        restDays = days % 365;
    }
    if(restDays >= 30)
    {
        month = restDays / 30;
        restDays = restDays % 30;
    }
    cout << years << " years" << endl << month << " months" << endl << restDays << " days";
    return 0;
}
