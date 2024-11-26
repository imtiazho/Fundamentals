#include <bits/stdc++.h>

using namespace std;

class Student{
    public:
    char name[100];
    int roll;
    char section;
    int marks;
    int cls;

    Student(char n[100], int r, char s, int m, int c){
        strcpy(name, n);
        roll = r;
        section = s;
        marks = m;
        cls = c;
    }
};

int main()
{
    Student s1("Imtiaz", 12, 'A', 123, 9);
    Student s2("Hossain", 11, 'B', 13, 5);
    Student s3("Zubair", 13, 'C', 124, 7);

    Student maxStudent = s1;
    if(s2.marks > maxStudent.marks)
    {
        maxStudent = s2;
    }
    if(s3.marks > maxStudent.marks){
        maxStudent = s3;
    }

    cout << maxStudent.name << " " << maxStudent.roll << " " << maxStudent.section << " " << maxStudent.marks << " " << maxStudent.cls;
    return 0;
}
