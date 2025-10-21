#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    /*
        || What is STL => Contructed from three elements such that 1. Containers, 2. Algorithm, 3. Iterators
    */

    /*
        || All You Need to Know About Pair & Tuple
        .
        . || Pair
        // pair<string, int> student = make_pair("Rahim", 10);
        pair<string, int> student = {"Rahim", 10};
        // cout << student.first << " " << student.second << endl;

        // We can change data
        student.first = "Karim";

        // Another way to console out
        auto [name, roll] = student;
        cout << name << " " << roll << endl;

        // Array of pair be like
        pair<string, int> students[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> students[i].first >> students[i].second;
        }

        for (auto [x, y] : students)
        {
            cout << x << " " << y << endl;
        }
        .
        .
        .
        || Tuple
        .
        tuple<string, int, string> t = make_tuple("Raim", 10, "017");
        // tuple<string, int, string> t = {"Raim", 10, "017"};
        // cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << endl;

        // Another way to print
        auto [name, roll, phone] = t;
        cout << name << " " << roll << " " << phone << endl;
        
        // Make tuple array

        // How to take two more data by using pair
        pair<string, pair<int, string>> p = {"rahim", {10, "DCC"}};
        cout << p.first << " " << p.second.first << " " << p.second.second << endl;

        // Explore make_pair function for this
    */
    
    
    
    return 0;
}