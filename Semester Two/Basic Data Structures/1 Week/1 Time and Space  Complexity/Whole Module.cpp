/*
    https://docs.google.com/document/d/1i2zJTPCAImx0bPmCijqBeCP5-C_D-VVuJPdI68w-5RA/edit?usp=sharing
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    /*
        || Why we need to learn time complexity
        .
        int N, sum = 0;
        cin >> N;
        // Using Loop
        // for (int i = 1; i <= N; i++)
        // {
        //     sum += i;
        // }

        // Using formula
        // 1 + 2 + 3 +.....+ N
        // (N(N + 1)) / 2
        sum = (N * (N + 1)) / 2;
        cout << sum << endl;
        .

        // This Soln give TLE error. To prevent it, we need to learn time complexity.
        int N, Q;
        cin >> N >> Q;

        int Arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> Arr[i];
        }

        for (int i = 0; i < Q; i++)
        {
            int x;
            cin >> x;
            int flag = 0;
            for (int j = 0; j < N; j++)
            {
                if (Arr[j] == x)
                {
                    flag = 1;
                }
            }

            if(flag == 1)
            {
                cout << "Found" << endl;
            }
            else{
                cout << "Not Found" << endl;
            }
        }
    */

    /*
        || What is time complexity => It don't work with exact time. It work with operation times insted of exact time.
        int N;
        cin >> N;
        for (int i = 1; i < N; i++)
        {
            cout << "Hello World!" << endl;
        }
        // This code's complexity is O(N). Becasue it depend on N
    */

    /*
        ||  How to calculate time complexity
        .
        1. Always work with wrost case
        2. Ignore constant
    */

    /*
        || Linear Complexity O(N)
        int N;                             // O(1)
        cin >> N;                          // O(1)
        for (int i = 1; i < N + 5; i += 2) // O(N)
        {
            cout << i << " " << endl;
        }
        // Its total completxity is Order of N or O(N). We ignore the costant. Like O(N/2) => O(N) Or O(N + 5) => O(N)

        cout << endl; // O(1)
        for (int i = 1; i < N; i++) // O(N)
        {
            cout << i << " " << endl;
        }
        return 0; // O(1)

        // Its total completxity is Order of N or O(N). Cause we work with wrost case.
    */

    /*
        || Logarithmic Complexity O(logN)
        int N;
        cin >> N;
        for (int i = 1; i < N; i *= 2) // O(logN)
        {
            cout << i << " " << endl;
        }

        for (int i = N; i > 1; i /= 3) // O(logN)
        {
            cout << i << " " << endl;
        }

        int k = 2;
        for (int i = 1; i < N; i++) // O(logN) || O(logkN)
        {
            cout << i << " " << endl;
            i = i * k;
        }

        // its complexity is O(logN) cause i *= 2 significantly impact to N. Then we can not say O(N). How we understand its logaritnmic complexity? when we see a loop increase or decrease by * or / significantly then we can measure with O(logN). Use log calculator to check in practice.
    */

    /*
        || Sqrt complexity O(sqrt(N))
        // int N;
        // cin >> N;
        // for (int i = 1; i <= sqrt(N); i++)
        // {
        //     cout << i << endl;
        // }
        // Complexity: O(sqrt(N))

        int N;
        cin >> N;
        for (int i = 1; i <= sqrt(N); i++)
        {
            if (N % i == 0)
            {
                cout << i << " " << N / i << " ";
            }
        }
        // Complexity: O(sqrt(N))
        // We can write i*i <= N insted of i <= sqrt(N)
    */

    /*
        || Quadratic complexity O(N^2) : When two loop in nested structure then complexity is Order of N^2
        .
        int N, M;
        cin >> N >> M;
        for (int i = 1; i <= N; i++) // O(N)
        {
            for (int i = 1; i <= N; i++) // O(N)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        // This loop's complexity is Order of N or O(N)

        // Another
        for (int i = 1; i <= N; i++) // O(N)
        {
            for (int i = 1; i <= M; i++) // O(M)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        // This loop's complexity is Order of N*M or O(N*M)

        // Another
        for (int i = 1; i <= N; i++) // O(N)
        {
            for (int i = 1; i <= N; i++) // O(N)
            {
                for (int i = 1; i <= N; i++) // O(N)
                {
                    cout << i << " ";
                }
            }
        }
        // This complexity is Order of Queue or O(N^3)
    */

    /*
        || Linearithmic complexity O(NlogN)
        int N;
        cin >> N;
        for (int i = 1; i <= N; i++) // O(N)
        {
            for (int j = 1; j <= N; j *= 2) // O(logN)
            {
                cout << "Hello!" << " ";
            }
            cout << endl;
        }

        // Overall Complexity: O(N * logN) so, O(NlogN)
    */

    /*
        || Best to Worst Complexity
        // When N is 1000 then,
        .
        Constant:       O(1)        => 1
        Linear:         O(N)        => 1000
        Logarithmic:    O(logN)     => 10
        Square Root:    O(sqrt(N))  => 32
        Quadritic:      O(N*N)      => 1000000
        Linearithmic:   O(NlogN)    => 10000
        .
        || Best to Wrost serially
        Constant:       O(1)        => 1
        Logarithmic:    O(logN)     => 10
        Square Root:    O(sqrt(N))  => 32
        Linear:         O(N)        => 1000
        Linearithmic:   O(NlogN)    => 10000
        Quadritic:      O(N*N)      => 1000000
    */

    /*
         || Solving time complexity related problems.
         .
         Follow the list
    */

    /*
        || How to calculate time from time complexity : 1s => 10^7
    */

    /*
        || Space Complexity
        int N;
        cin >> N;

        int sum = 0;
        for (int i = 0; i < N; i++)
        {
            sum += i;
        }
        // Its space complxity O(1)
        .
        int N;
        cin >> N;

        int Arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> Arr[i];
        }
        // Its space complxity O(N)
        .
        int N;
        cin >> N;

        int Arr[N][N];
        for (int i = 0; i < N; i++)
        {
            cin >> Arr[i][i];
        }
        // Its space complxity O(N^2)
    */


    return 0;
}