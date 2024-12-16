#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    string name;
    int marks;
    int roll;
};

bool cmp(Student left, Student right)
{
    return (left.marks == right.marks) ? left.roll < right.roll : left.marks > right.marks;
}

int main()
{
    int N;
    cin >> N;

    Student Arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> Arr[i].name >> Arr[i].marks >> Arr[i].roll;
    }

    sort(Arr, Arr + N, cmp);
    
    for(int i = 0; i < N; i++)
    {
        cout << Arr[i].name << " " << Arr[i].marks << " " << Arr[i].roll << endl;
    }

    /* 
        sakib 89 12
        rakib 67 8
        akib 45 10
    */

    return 0;
}