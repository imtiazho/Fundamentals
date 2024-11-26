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
    /*
        || String Constructor


        // string s = "Hello";

        // 1 no way
        // string s("Hello");

        // 2 no way
        // string s("Hello World", 4);

        // 3 no way
        // string s = "Hello World";
        // string t(s, 4);

        // 4 no way
        string s(5, 'A');
        cout << s << endl;
    */

    /*
        || Sort string using sort() function
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        cout << s;
    */

    /*
         || Range based for loop
        string s;
        cin >> s;
        for(char element : s) // Its work without index
        {
            cout << element << endl;
        }
    */

    /*
        || Reverse function in C++
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        reverse(a, a + n);
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        .
        string s = "Hello";
        reverse(s.begin(), s.end());
        cout << s << endl;
    */

    /*/
        || Reverse word codeforces solution
        string s = "I Love You";

        stringstream ss(s);
        string word;
        while (ss >> word)
        {
            reverse(word.begin(), word.end());
            cout << word << " ";
        }
    */

    /*
        || Function inside class
        class Student
        {
        public:
            string name;
            int roll;
            Student(string name, int roll)
            {
                this->name = name;
                this->roll = roll;
            }

            void greetings()
            {
                cout << "Hello from " << name << endl;
            }
        };
        .
        Student s1("Imtiaz Hossain", 23);
        cout << s1.name << " " << s1.roll << endl;
        s1.greetings();

        Student s2("Hossain", 25);
        s2.greetings();
    */

    /*
        || Dynamic Object Copy
        .
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
        .
        Cricketer *dhoni = new Cricketer(23, "Bindia");
        Cricketer *kholi = new Cricketer(1, "Randia");

        // kholi->country = dhoni->country;
        // kholi->jersey_no = dhoni->jersey_no;
        *kholi = *dhoni;

        delete dhoni;

        cout << kholi->jersey_no << " " << kholi->country << endl;
 */

    return 0;
}