#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;

    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp
{
public:
    bool operator()(Student l, Student r)
    {
        if (l.marks > r.marks)
            return true;
        else if (l.marks > r.marks)
            return false;
        else
            return l.roll > r.roll;
    }
};

int main()
{
    /*
        // Max
        // priority_queue<int> pq;
        // pq.push(10);
        // pq.push(5);
        // pq.push(30);

        // cout << pq.top() << endl;

        // pq.push(309);
        // cout << pq.top() << endl;

        // pq.pop();
        // cout << pq.top() << endl;

        // Min
        priority_queue<int, vector<int>, greater<int>> pq;
        pq.push(10);
        pq.push(5);
        pq.push(30);
        cout << pq.top() << endl;
    */

    /*
        || Custom compare class
        class Student
        {
        public:
            string name;
            int roll;
            int marks;

            Student(string name, int roll, int marks)
            {
                this->name = name;
                this->roll = roll;
                this->marks = marks;
            }
        };

        class cmp
        {
        public:
            bool operator()(Student l, Student r)
            {
                if (l.marks > r.marks)
                    return true;
                else if (l.marks > r.marks)
                    return false;
                else
                    return l.roll > r.roll;
            }
        };



        priority_queue<Student, vector<Student>, cmp> qu;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;

            Student obj(name, roll, marks);

            qu.push(obj);
        }

        while (!qu.empty())
        {
            cout << qu.top().roll << endl;
            qu.pop();
        }
    */

    /*
        || Limitations of frequency array
    */

    /*
        || STL Map
        map<string, int> mp;
        mp["tamim"] = 2;
        mp["samim"] = 3;
        mp["aamim"] = 3;
        mp["hamim"] = 0;

        // cout << mp["tamim"] << endl;

        // for (auto it = mp.begin(); it != mp.end(); it++)
        // {
        //     cout << it->first << " " << it->second << endl;
        // }

        // cout << mp["hamim"] << endl;

        cout << mp.count("lamim");
    */

    /*
        || Count words using map
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word;

        map<string, int> mp;

        while (ss >> word)
        {
            mp[word]++;
        }

        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            cout << it->first << " " << it->second << endl;
        }
    */

    /*
        || STL Set
    */
    set<int> s;
    int n;
    cin >> n;
    while (n--)
    {
        int val;
        cin >> val;
        s.insert(val);
    }

    // if we need decending then we assign all values in vector

    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << endl;
    }

    // Check existance
    cout << s.count(3) << endl;

    return 0;
}