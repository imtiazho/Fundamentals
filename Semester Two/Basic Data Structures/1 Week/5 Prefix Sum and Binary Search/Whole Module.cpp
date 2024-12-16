// Practice Problem Set: https://docs.google.com/document/d/1LMFyd4rQ5Gpyc48Ht5b9RFBc3A2ycqEP/edit?usp=drivesdk&ouid=112433310488936743525&rtpof=true&sd=true
#include <bits/stdc++.h>

using namespace std;

int main()
{
    /*
        || Range Sum Query Bruteforce solution + Idea of Prefix Sum + Range Sum Query prefix sum solution I + Range Sum Query prefix sum solution II == All this video is dedicated for range sum problem.
        .
        #include <bits/stdc++.h>

        using namespace std;

        int main()
        {
            int N, Q;
            cin >> N >> Q;

            vector<long long int> V(N + 1);
            for (int i = 1; i <= N; i++)
            {
                cin >> V[i];
            }

            vector<long long int> prefix(N + 1);
            prefix[1] = V[1];
            for (int i = 2; i <= N; i++)
            {
                prefix[i] = prefix[i - 1] + V[i];
            }

            while (Q--)
            {
                int l, r;
                cin >> l >> r;
                long long int sum;
                if (l == 1)
                {
                    sum = prefix[r];
                }
                else
                {
                    sum = prefix[r] - prefix[l - 1];
                }
                // for(int i = l; i <= r; i++)
                // {
                //     sum += V[i];
                // }
                cout << sum << endl;
            }

            return 0;
        }
    */

    /*
         || Binary Search in Example
         .
         #include <bits/stdc++.h>

         using namespace std;

         int main()
         {
             int N, Q;
             cin >> N >> Q;

             int Arr[N];
             for (int i = 0; i < N; i++)
             {
                 cin >> Arr[i];
             }

             sort(Arr, Arr + N);

             for (int i = 0; i < Q; i++)
             {
                 int x;
                 cin >> x;
                 int flag = 0;

                 int l = 0;
                 int r = N - 1;
                 while(l <= r)
                 {
                     int mid = (l+r)/2;
                     if(Arr[mid] == x)
                     {
                         flag = 1;
                         break;
                     }
                     else if(Arr[mid] > x){
                         r = mid - 1;
                     }
                     else{
                         l = mid + 1;
                     }
                 }

                 if (flag == 1)
                 {
                     cout << "found" << endl;
                 }
                 else
                 {
                     cout << "not found" << endl;
                 }
             }
             return 0;
         }
    */

    return 0;
}