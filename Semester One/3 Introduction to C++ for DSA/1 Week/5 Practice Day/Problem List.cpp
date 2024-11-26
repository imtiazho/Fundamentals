#include <bits/stdc++.h>

using namespace std;

class Cricketer
{
public:
    int jersey_no;
    string country;

    Cricketer(int jn, string c)
    {
        jersey_no = jn;
        country = c;
    }
};

int main()
{
    Cricketer *dhoni = new Cricketer(23, "Bindia");
    Cricketer *kholi = new Cricketer(1, "Randia");

    // kholi->country = dhoni->country;
    // kholi->jersey_no = dhoni->jersey_no;
    *kholi = *dhoni;

    delete dhoni;

    cout << kholi->jersey_no << " " << kholi->country << endl;
    return 0;
}
