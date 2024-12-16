#include <bits/stdc++.h>

using namespace std;

int main()
{
    /*
        || Time Complexity
        .
        O(1) => Constant Time Complexity. At this moment it do a fixed number of operation.
        .
        O(N) => Linear Time Complexity. At this moment it does N number of operation.
        .
        O(sqrt(n)) => Square Root Time Complexity. At this moment it does sqrt(N) number of operation.
        .
        O(logN) => Logarithmic Time Complexity. At this moment it does log(N) numbers of operation.
        .
        O(N^2) => N Square. At this moment it does N*N numbers of operation.
        .
        O(NlogN) => At this moment it does NlogN numbers of operation.
    */

    /*
        || Prime Number
        int t;
        cin >> t;
        for (int i = 1; i <= t; i++)
        {
            int n;
            cin >> n;
            int flag = 1;

            // Noraml System
            // for (int i = 2; i < n; i++)
            // {
            //     if (n % i == 0)
            //     {
            //         flag = 0;
            //         break;
            //     }
            // }
            if(n == 1)
            {
                flag = 0;
            }

            // Optimize System
            for (int i = 2; i <=  sqrt(n); i++)
            {
                if (n % i == 0)
                {
                    flag = 0;
                    break;
                }
            }

            if (flag == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    */

    /*
        || Vector
        .
        int t;
        cin >> t;
        while (t--)
        {
            int n;
            cin >> n;
            vector<int> divisors;
            for (int i = 1; i < sqrt(n); i++)
            {
                if (n % i == 0)
                {
                    divisors.push_back(i);
                    if (n / i != i)
                    {
                        divisors.push_back(n / i);
                    }
                }
            }

            sort(divisors.begin(), divisors.end());

            for (auto element : divisors)
            {
                cout << element << "";
            }
        }
        .
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int sereja = 0; // 1
        int dima = 0;   // 2

        int karPala = 1;

        while (v.empty())
        {
            if (karPala == 1)
            {
                if (v.front() < v.back())
                {
                    sereja += v.back();
                    v.pop_back();
                }
                else
                {
                    sereja += v.front();
                    v.erase(v.begin());
                }
                karPala = 2;
            }
            else if (karPala == 2)
            {
                if (v.front() < v.back())
                {
                    dima += v.back();
                    v.pop_back();
                }
                else
                {
                    dima += v.front();
                    v.erase(v.begin());
                }
                karPala = 1;
            }
        }

        cout << sereja << " " << dima << endl;
    */
    return 0;
}