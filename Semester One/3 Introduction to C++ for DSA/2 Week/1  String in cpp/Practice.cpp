#include <bits/stdc++.h>

using namespace std;

int main()
{
    // 1. We can compare by directly with comparison operator. It increase string size willingly.
    // 2. We can use capacity function to specific operation
    string s = "Imtiaz Hossain Abdullah";
    
    for(string :: iterator it = s.begin(); it < s.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}