#include<iostream>

using namespace std;

int main()
{
    char C;
    cin >> C;
    int letterInInte = C;
    char nextLetter;

    if(letterInInte != 122)
    {
        int next = letterInInte + 1;
        nextLetter = next;
    }
    else if(letterInInte == 122)
    {
        nextLetter = 'a';
    }

    cout << nextLetter;
    return 0;
}
