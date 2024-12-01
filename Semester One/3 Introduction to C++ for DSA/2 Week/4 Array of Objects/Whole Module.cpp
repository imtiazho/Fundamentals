#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    string name;
    int marks;
    int roll;
};

bool cmp(Student l, Student r)
{
    // if (l.marks > r.marks)
    // {
    //     return true;
    // }
    // else if (l.marks < r.marks)
    // {
    //     return false;
    // }
    // else
    // {
    //     if (l.roll < r.roll)
    //     {
    //         return true;
    //     }
    //     else
    //     {
    //         return false;
    //     }
    // }

    // Shortcut
    // if (l.marks == r.marks)
    // {
    //     return l.roll < r.roll;
    // }
    // else
    // {
    //     return l.roll < r.roll;
    // }

    // More shortcut
    return (l.marks == r.marks) ? l.roll < r.roll : l.roll < r.roll;
}

int main()
{
    /*
        || Array of objects
        class Student
        {
        public:
            string name;
            int marks;
            int roll;
        };
        .........
        int N;
        cin >> N;

        Student Arr[N];

        for (int i = 0; i < N; i++)
        {
            cin.ignore();
            getline(cin, Arr[i].name);
            cin >> Arr[i].marks >> Arr[i].roll;
        }

        for (int i = 0; i < N; i++)
        {
            cout << Arr[i].name << " " << Arr[i].marks << " " << Arr[i].roll << endl;
        }
    */

    /*
        || Min or Max from array of objects
        class Student
        {
        public:
            string name;
            int marks;
            int roll;
        };
        .
        int N;
        cin >> N;

        Student Arr[N];

        for (int i = 0; i < N; i++)
        {
            cin >> Arr[i].name >> Arr[i].marks >> Arr[i].roll;
        }

        // int minM = INT_MAX;
        // Student minimum = Arr[0];
        Student minimum;
        minimum.marks = INT_MAX;
        for (int i = 0; i < N; i++)
        {
            // cout << Arr[i].name << " " << Arr[i].marks << " " << Arr[i].roll << endl;
            // minimum = min(Arr[i].marks, minM);

            if(Arr[i].marks < minimum.marks)
            {
                minimum = Arr[i];
            }
        }

        // cout << minM << endl;
        cout << minimum.name << " " << minimum.marks << " " << minimum.roll << endl;
    */

    /*
        || Sort array of objects part I : Accending
         class Student
        {
        public:
            string name;
            int marks;
            int roll;
        };

        bool cmp(Student l, Student r)
        {
            if (l.marks < r.marks)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        .
        int N;
        cin >> N;

        Student Arr[N];

        for (int i = 0; i < N; i++)
        {
            cin >> Arr[i].name >> Arr[i].marks >> Arr[i].roll;
        }

        sort(Arr, Arr + N, cmp);

        for (int i = 0; i < N; i++)
        {
            cout << Arr[i].name << " " << Arr[i].marks << " " << Arr[i].roll << endl;
        }
    */

    /*
        || Sort array of objects part II :: How it works? => It require a custom compare function. That custom compare function compare left and right value. Sort function send two value randomly to compare function as left and right value.
    */

    /*
         || Sort array of objects part III
         .
         // Decending Order :: Just compare function < sign will be >
         bool cmp(Student l, Student r)
         {
             if (l.marks > r.marks)
             {
                 return true;
             }
             else
             {
                 return false;
             }
         }
         .
         // Roll wise sort : Just change the parameter
         bool cmp(Student l, Student r)
         {
             if (l.roll < r.roll)
             {
                 return true;
             }
             else
             {
                 return false;
             }
         }
         .
         // Shortcut for compare function
         bool cmp(Student l, Student r)
         {
             // Shortcut
             return l.roll < r.roll;
         }
         .
         // Again decending in shortcut term. Just change the sign.
         bool cmp(Student l, Student r)
         {
             // Shortcut
             return l.roll > r.roll;
         }
     */

    /*
        // Sort array of objects part IV :: Sortig with certain condition. If marks are same for multiple students then it will sorting with roll for those students
        .
        bool cmp(Student l, Student r)
        {
            // if (l.marks > r.marks)
            // {
            //     return true;
            // }
            // else if (l.marks < r.marks)
            // {
            //     return false;
            // }
            // else
            // {
            //     if (l.roll < r.roll)
            //     {
            //         return true;
            //     }
            //     else
            //     {
            //         return false;
            //     }
            // }

            // Shortcut
            // if (l.marks == r.marks)
            // {
            //     return l.roll < r.roll;
            // }
            // else
            // {
            //     return l.roll < r.roll;
            // }

            // More shortcut
            return (l.marks == r.marks) ? l.roll < r.roll : l.roll < r.roll;
        }
    */

    int N;
    cin >> N;

    Student Arr[N];

    for (int i = 0; i < N; i++)
    {
        cin >> Arr[i].name >> Arr[i].marks >> Arr[i].roll;
    }

    sort(Arr, Arr + N, cmp);

    for (int i = 0; i < N; i++)
    {
        cout << Arr[i].name << " " << Arr[i].marks << " " << Arr[i].roll << endl;
    }

    // sakib 89 12
    // rakib 67 8
    // akib 45 10

    return 0;
}