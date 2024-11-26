/*
    || Important Links
    https://docs.google.com/document/d/1nxFrcoG_t-hMbeuAw6A5r_CV7I1lYvKLwEpupTQqkrM/edit?tab=t.0
    .
    https://docs.google.com/document/d/14sdQIgBZV29d8cSMPfMasotAc_jhZNgxaqRSOG_yR1c/edit?tab=t.0
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    /*
        || String in Cpp
        // string s = "Hello";
        // s = "Gelo";
        // cout << s << endl;

        // This approach for normal char array
        char a[10] = "Hello";
        char b[10] = "Hello";
        if (strcmp(a, b) == 0)
        {
            // Statement
        }
        else
        {
            // Statement
        }

        // This approach for builtIn string function
        string A = "Hello";
        string B = "Hello";
        if (A == B)
        {
            // Statement
        }
        else
        {
            // Statement
        }

        // Its increase its size by willingly
        string name = "Imtiaz Hossain";
        name = "Abdul Kuddus Bin Bokhtiar Khilji Hossain Muhammad Shanto";
        cout << name;

        // Read docs of string
    */

    /*
        || String Capacity Functions
        .
        // String Capacity Function
        string s = "Imtiaz Hossain";
        // cout << s.size() << endl;
        // cout << s.max_size() << endl;
        // cout << s.capacity() << endl;

        // s.clear();
        // cout << s << endl;

        // cout << s.empty() << endl; // True = 1 False = 0

        // s.resize(6);
        // s.resize(20, 'A');
        // cout << s << endl;
        .
        // String Element Access
        string s = "Imtiaz";
        // cout << s[0] << endl;
        // cout << s.at(0) << endl;
        // cout << s.front() << endl;
        // cout << s.back() << endl;
        .
        || String Modifiers Part I
        .
        string s = "Imtiaz";
        string s2 = " Hossain";
        // s[0] = 'h'; // Its limited to current to string memory
        // s += s2;
        // s.append(s2);
        // s.push_back('A');
        s.pop_back();
        cout << s << endl;
        .
        || String Modifiers Part II
        string s = "Imtiaz";
        string s2 = " Hossain";
        // s.assign("Hell"); // or
        // s.assign(s2);
        // s.erase(1, 3);
        // s.erase(3);
        // s.replace(3, 3, "XYZ");
        // s.insert(3, " Hos  "); // As like replace
        cout << s << endl;
        .
        || String Iterators
        string s = "Imtiaz";

        // cout << *s.begin() << endl;
        // cout << *(s.end() - 1) << endl;

        // for(string:: iterator it = s.begin(); it < s.end(); it++)
        // {
        //     cout << *it << endl;
        // }
        // for(auto it = s.begin(); it < s.end(); it++)
        // {
        //     cout << *it << endl;
        // }
    */

    /*
        || String input with spaces
        int x;
        string s;
        cin >> x;
        cin.ignore();
        getline(cin, s);
        cout << x << " " << s;
    */

    /*
        || Stringstream :: Ekta ekta kore word distribute koree
        string s;
        getline(cin, s);
        cout << s << endl;

        stringstream ss(s);
        string word;
        while (ss >> word)
        {
            cout << word << endl;
        }
    */

    return 0;
}