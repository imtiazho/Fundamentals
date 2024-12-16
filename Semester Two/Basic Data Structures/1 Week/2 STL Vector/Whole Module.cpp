// https://docs.google.com/document/d/1nxpbS-5RKFSwcJ6mHv3P2Vru9HTqXOeB/edit

// Extra Problem:
// https://docs.google.com/document/d/1zCtGILmwz3TTS35Y9PPE3kqZ_O8NIPcov6Sz_QIB94c/edit?usp=drivesdk

#include <bits/stdc++.h>

using namespace std;

int main()
{
    /*
        || Vector initialization
        .
        // Type One
        // vector<type>v
        // vector<int> v;
        // cout << v.size() << endl;

        // Type Two
        // vector<int> v(10);
        // cout << v.size() << endl;

        // Type Three
        // vector<int> v(10, 1);
        // for (int i = 0; i < v.size(); i++)
        // {
        //     cout << v[i] << endl;
        // }

        // Type Four
        // vector<int> v2(v);
        // for (int i = 0; i < v2.size(); i++)
        // {
        //     cout << v2[i] << endl;
        // }

        // Type Five
        // int Arr[5] = {1, 2, 3, 4, 5};
        // vector<int>v(Arr, Arr + 5);
        // for (int i = 0; i < v.size(); i++)
        // {
        //     cout << v[i] << endl;
        // }

        // Type Six
        // vector<int> v = {1, 2, 3, 4, 5};
        // for (int i = 0; i < v.size(); i++)
        // {
        //     cout << v[i] << endl;
        // }
    */

    /*
        || Vector Capacity functions
        .
        vector<int> v;

        // cout << v.size() << endl;

        // cout << v.max_size() << endl;

        // cout << v.capacity() << endl;
        // v.push_back(10);
        // cout << v.capacity() << endl;
        // v.push_back(10);
        // cout << v.capacity() << endl;
        // v.push_back(10);
        // cout << v.capacity() << endl;
        // v.push_back(10);
        // cout << v.capacity() << endl;
        // v.push_back(10);
        // cout << v.capacity() << endl;

        // v.push_back(10);
        // v.push_back(20);
        // v.push_back(30);
        // cout << v.size() << endl;
        // v.clear();
        // cout << v.size() << endl;
        // cout << v[0];

        // cout << v.empty() << endl;

        v.push_back(10);
        v.push_back(20);
        v.push_back(30);
        // v.resize(7); // It can increase and decrese size of a vector
        v.resize(7, 50); // Another way
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << endl;
        }
    */

    /*
        || Vector Modifiers I
        .
        vector<int> V = {1, 2, 3, 4, 5};
        // vector<int> V2;

        // Assign a vector to another vector
        // V2 = V;
        // for (int i = 0; i < V2.size(); i++)
        // {
        //     cout << V2[i] << endl;
        // }
        // for (int x : V2)
        // {
        //     cout << x << endl;
        // }

        // push_back :: push an element back of the list

        // pop_back :: Remove an element from back of the list
        // V.pop_back();
        // for (int x : V)
        // {
        //     cout << x << endl;
        // }

        // Insert
        // V.insert(V.begin() + 2, 100);
        // Or
        // vector<int> v3 = {100, 200, 300};
        // V.insert(V.begin() + 2, v3.begin(), v3.end());
        // for (int x : V)
        // {
        //     cout << x << endl;
        // }

        // Delete or Erase
        // V.erase(V.begin() + 2);
        // V.erase(V.begin() + 1, V.begin() + 4);
        // for (int x : V)
        // {
        //     cout << x << endl;
        // }
    */

    /*
        || Vector Modifiers II
        .
        vector<int> V = {1, 2, 3, 4, 2};

        // Replace
        // replace(V.begin(), V.end(), 2, 100);
        // replace(V.begin(), V.end() - 1, 2, 100);
        // for (int x : V)
        // {
        //     cout << x << endl;
        // }

        // Find
        // vector<int>::iterator it = find(V.begin(), V.end(), 3);
        auto it = find(V.begin(), V.end(), 100); // Set end according to your range
        if(it == V.end())
        {
            cout << "Not Found";
        }
        else{
            cout << "Found";
        }
    */

    /*
        || Vector Element Access
        vector<int> V = {1, 2, 3, 4, 5};
        // cout << V[3] << endl;
        // cout << V.at(3) << endl;
        // cout << V.back() << endl;
        // cout << *(V.end() - 1) << endl;
        // cout << V[V.size() - 1] << endl;
        // cout << V.front() << endl;
    */

    /*
        || Vector Iterators
        vector<int> V = {1, 2, 3, 4, 5};
        for (vector<int>::iterator it = V.begin(); it < V.end(); it++)
        {
            cout << *it << endl;
        }
    */

    /*
        || Vector input and output
        .
        // Without define size
        int N;
        cin >> N;
        vector<int> V(N);
        for (int i = 0; i < N; i++)
        {
            cin >> V[i];
        }

        for (int i = 0; i < N; i++)
        {
            cout << V[i] << " ";
        }
        .
        // With define size
        int N;
        cin >> N;
        vector<int> V;
        for (int i = 0; i < N; i++)
        {
            int x;
            cin >> x;
            V.push_back(x);
        }

        for (int i = 0; i < N; i++)
        {
            cout << V[i] << " ";
        }
    */

    /*
        || Vector of String
        int N;
        cin >> N;
        cin.ignore();
        vector<string> V(N);

        for (int i = 0; i < N; i++)
        {
            // cin >> V[i];
            getline(cin, V[i]);
        }

        for(string s : V)
        {
            cout << s << endl;
        }
    */

    

    return 0;
}