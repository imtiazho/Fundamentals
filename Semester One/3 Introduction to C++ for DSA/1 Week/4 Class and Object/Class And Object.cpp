#include <bits/stdc++.h>

using namespace std;

int main()
{
    /*
        || What is Class and Object => Class is a template of creating an object. Object is an example of a class.
    */

    /*
         || How to declare class and create object
         .
         In Subprogram
         class Student{
             // Here Access modifier => Private, Protected, Public
             public:
             char name[100];
             int roll;
             char section;
             double gpa;
         };
         .
         In main Program
         Student s1, s2, s3, s4, s5;
    */

    /*
        || Work with class and object
        .
        In Upper section
        class Student
        {
            public:
                char name[100]; // 100 byte
                int roll;       // 4 byte
                double gpa;     // 8 byte
        };
        .
        In main Program:
        Student s1, s2;
        // We assign value by handcode
        // s1.roll = 10;
        // s1.gpa = 3.50;
        // s1.name = "Imtiaz"; // this is not valid cause we cant assign string in this moments. Only once we can assign value to an array in the delcaration time.

        // char temp[100] = "Imtiaz";
        // strcpy(s1.name, temp);

        // We assign value by take input
        cin.getline(s1.name, 100);
        cin >> s1.roll >> s1.gpa;

        cin.ignore();

        cin.getline(s2.name, 100);
        cin >> s2.roll >> s2.gpa;

        cout << s1.name << " " << s1.roll << " " << s1.gpa << endl;
        cout << s2.name << " " << s2.roll << " " << s2.gpa << endl;
    */

    /*
        || Constructor => It has no return type, it should be the same name of class, it held in the class. That'sy its a special function.
        .
        Inside SubProgram:
        class Student
        {
        public:
            char name[100];
            int roll;
            int cls;
            double gpa;

            Student(int r, int c, double g)
            {
                roll = r;
                cls = c;
                gpa = g;
            }
        };
        .
        In main program:
        // Without constructor
        Student random;
        cin >> random.roll >> random.cls >> random.gpa;

        // With Constructor
        int r, c;
        double g;
        cin >> r >> c >> g;
        Student rahid(r, c, g);

        Student jahid(2, 6, 5.00);

        cout << rahid.roll << " " << rahid.cls << " " << rahid.gpa << endl;
        cout << jahid.roll << " " << jahid.cls << " " << jahid.gpa << endl;
    */

    /*
        || This keyword and Arrow Sign : You can use this keyword for special reason. If we want to use same name as arguments of constructor then we have to use this keyword to point specific object field.

        class Student
        {
        public:
            char name[100];
            int roll;
            int cls;
            double gpa;

            Student(int roll, int cls, double gpa)
            {
                // this->roll = roll; // either
                (*this).roll = roll; // or
                (*this).cls = cls;
                (*this).gpa = gpa;
            }
        };

        Student rahid(2, 4, 1.34);
        Student jahid(2, 6, 5.01);

        cout << rahid.roll << " " << rahid.cls << " " << rahid.gpa << endl;
        cout << jahid.roll << " " << jahid.cls << " " << jahid.gpa << endl;
    */

    /*
        || Return object from function
        class Student
        {
        public:
            char name[100];
            int roll;
            int cls;
            double gpa;

            Student(int roll, int cls, double gpa)
            {
                // this->roll = roll; // either
                (*this).roll = roll; // or
                (*this).cls = cls;
                (*this).gpa = gpa;
            }
        };

        Student fun(){
            Student jahid(2, 6, 5.01);
            return jahid;
        }
        .
        Student obj = fun();
        cout << obj.roll << " " << obj.cls << " " << obj.gpa << endl;
    */

    /*
        || Why we need dynamic object : When we return an object from a function then we work with this as well but when we return an object's pointer to main function then its doesnt work cause its declare in stack memory.
        .
        class Student
        {
        public:
            char name[100];
            int roll;
            int cls;
            double gpa;

            Student(int roll, int cls, double gpa)
            {
                // this->roll = roll; // either
                (*this).roll = roll; // or
                (*this).cls = cls;
                (*this).gpa = gpa;
            }
        };

        Student *fun()
        {
            Student jahid(2, 6, 5.01);
            Student *p = &jahid;
            return p;
        }
        .
        Student *p = fun();
        cout << (*p).roll << " " << p->cls << " " << p->gpa << endl;
    */

    /*
        || Dynamic Object Create and return from function.
        .
        Delacration System =>
        class Student
        {
        public:
            char name[100];
            int roll;
            int cls;
            double gpa;

            Student(int roll, int cls, double gpa)
            {
                // this->roll = roll; // either
                (*this).roll = roll; // or
                (*this).cls = cls;
                (*this).gpa = gpa;
            }
        };
        .
        Student rahim(43, 4, 4.56);
        Student *karim = new Student(44, 5, 6.66);

        cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
        cout << karim->roll << " " << karim->cls << " " << karim->gpa << endl;
        .
        How to get object from a function with return of pointer by dynamically =>
        class Student
        {
        public:
            char name[100];
            int roll;
            int cls;
            double gpa;

            Student(int roll, int cls, double gpa)
            {
                // this->roll = roll; // either
                (*this).roll = roll; // or
                (*this).cls = cls;
                (*this).gpa = gpa;
            }
        };

        Student *fun()
        {
            Student *jahid = new Student(2, 6, 5.01);
            return jahid;
        }
        .
        Student *p = fun();
        cout << (*p).roll << " " << p->cls << " " << p->gpa << endl;
    */
    /*
         || Sort with sort() funcion in accending and decending order
         int N;
         cin >> N;
         int Arr[N];
         for (int i = 0; i < N; i++)
         {
            cin >> Arr[i];
         }
         // sort(Arr, Arr + N); // Accending
         sort(Arr, Arr + N, greater<int>()); // Decending
         for (int i = 0; i < N; i++)
         {
             cout << Arr[i] << " ";
         }
    */

    /*
     class Student
        {
        public:
            char name[100];
            int roll;
            int cls;
            double gpa;

            Student(int roll, int cls, double gpa)
            {
                // this->roll = roll; // either
                (*this).roll = roll; // or
                (*this).cls = cls;
                (*this).gpa = gpa;
            }
        };

        Student *fun()
        {
            Student *jahid = new Student(2, 6, 5.01);
            return jahid;
        }
    */

    return 0;
}