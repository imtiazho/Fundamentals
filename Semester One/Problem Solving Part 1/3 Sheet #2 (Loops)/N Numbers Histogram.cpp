#include<iostream>

using namespace std;


int main()
{
    char S;
    int N;
    cin >> S;
    cin >> N;
    int Ns[N];

    int nsIndex = 0;
    for(int i = 1; i <= N; i++)
    {
        cin >> Ns[nsIndex];
        nsIndex++;
    }

    for(int j = 0; j < nsIndex; j++)
    {
        for(int i = 0; i < Ns[j]; i++)
        {
            cout << S;
        }
        cout << endl;
    }

    return 0;
}
