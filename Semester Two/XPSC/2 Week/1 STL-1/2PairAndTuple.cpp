#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
    /* 
    || Pair STL
    // pair<string, int> student = make_pair("Rahim", 10);
    pair<string, int> student = {"Rahim", 10};
    cout << student.first << " " << student.second << endl;

    // We can change data
    student.first = "Karim";

    // Another way to console out
    auto [name, roll] = student;
    cout << name << " " << roll << endl;

    // Array of pair be like
    int n;
    cin >> n;
    pair<string, int> students[n];
    for (int i = 0; i < 3; i++)
    {
        cin >> students[i].first >> students[i].second;
    }

    for (auto [x, y] : students)
    {
        cout << x << " " << y << endl;
    } */

    /* 
    || Tuple STL
    tuple<string, int, string> t = make_tuple("Raim", 10, "0171");
    tuple<string, int, string> t = {"Raim", 10, "017"};
    cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << endl;

    Another way to print
    auto [name, roll, phone] = t;
    cout << name << " " << roll << " " << phone << endl;

    // Make tuple array

    // How to take two more data by using pair
    pair<string, pair<int, string>> p = {"rahim", {10, "DCC"}};
    cout << p.first << " " << p.second.first << " " << p.second.second << endl; */

    return 0;
}