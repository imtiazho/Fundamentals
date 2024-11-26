#include <bits/stdc++.h>

using namespace std;

class Cricketer{
    public:
    string name;
    int jerseyNo;

    Cricketer(string name, int jerseyNo)
    {
        this->name = name;
        this->jerseyNo = jerseyNo;
    }
};

int main()
{
    Cricketer *dhoni = new Cricketer("Dhoni", 23);
    Cricketer *kholi = new Cricketer("Kholi", 22);
    
    *kholi = *dhoni;

    delete dhoni;

    cout << kholi->jerseyNo;
    return 0;
}