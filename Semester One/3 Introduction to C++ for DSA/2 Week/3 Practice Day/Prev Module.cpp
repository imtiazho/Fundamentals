// Previous Module Recap
/*
    1. We can assign value to a string after declaration like a variable. We can also compare twoby using noramlly == operator. It increase it size willingly.
*/
#include <bits/stdc++.h>

using namespace std;

class Cricketer{
    public:
    string name;
    Cricketer(string name)
    {
        this->name = name;
    }
};

int main()
{
    Cricketer *dhoni = new Cricketer("Dhoni");
    Cricketer *kholi = new Cricketer("Kholi");
    
    *kholi = *dhoni;

    delete dhoni;

    cout << kholi->name;

    return 0;
}