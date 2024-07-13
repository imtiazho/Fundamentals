#include<iostream>

using namespace std;

int generateFiboSeries(int n)
{
    int a, b;
    if(n <= 0)
    {
        return 1;
    }

    a = 0, b = 1;
    for(int i = 1; i <= n; i++)
    {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }

}

int main()
{
    int N;
    cin >> N;

    generateFiboSeries(N);
    return 0;
}
