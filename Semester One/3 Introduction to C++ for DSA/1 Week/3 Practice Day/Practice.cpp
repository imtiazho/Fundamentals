// https://docs.google.com/document/d/1oHwyJVnvl6wFvXi-NAKLUab_I4rzrTkw/edit
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, M;
    cin >> N;

    int *ArrOne = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> ArrOne[i];
    }
    for (int i = 0; i < N; i++)
    {
        cout << ArrOne[i] << " ";
    }
    cout << endl;

    cin >> M;
    int *ArrTwo = new int[M];
    for (int i = 0; i < N; i++)
    {
        ArrTwo[i] = ArrOne[i];
    }
    delete[] ArrOne;

    for (int i = N; i < M; i++)
    {
        cin >> ArrTwo[i];
    }

    for (int i = 0; i < M; i++)
    {
        cout << ArrTwo[i] << " ";
    }

    return 0;
}

// int *get_array(int N)
// {
//     int *arr = new int[N];
//     for (int i = 0; i < N; i++)
//     {
//         cin >> arr[i];
//     }

//     return arr;
// }
// {
//     int N;
//     cin >> N;
//     int *Arr = get_array(N);

//     for (int i = 0; i < N; i++)
//     {
//         cout << Arr[i] << " ";
//     }
//     return 0;
// }

// int *ArrOne = new int[5];
// for (int i = 0; i < 5; i++)
// {
//     cin >> ArrOne[i];
// }
// for (int i = 0; i < 5; i++)
// {
//     cout << ArrOne[i] << " ";
// }
// cout << endl;

// int *ArrTwo = new int[7];
// for (int i = 0; i < 5; i++)
// {
//     ArrTwo[i] = ArrOne[i];
// }

// ArrTwo[5] = 6;
// ArrTwo[6] = 7;

// delete ArrOne;

// for (int i = 0; i < 7; i++)
// {
//     cout << ArrTwo[i] << " ";
// }