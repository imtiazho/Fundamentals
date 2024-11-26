#include <bits/stdc++.h>

using namespace std;

int main()
{
    /*
        == Static Memory Vs Dynamic Memory ==
        1. Stack Memory
        2. Staic Memory
        3. Compile-time Memory
        4. Limited Memory
        5. It decrease his memory according to array. It cant increase array size.
        6. Automatic Memory Clear
        =
        1. Heap Memory
        2. Dynamic Memory
        3. Runtime Memory
        4. More Memory
        5. It do not decrease his memory according to array. It can increase array size.
        6. Dont Automatic Memory Clear. its kind of users isntructred
    */

    /*
        || Dynamic Variable
        new data_type;
        new int => it allocate memory in heap and return a address. We have to declare pointer to store that address.

        int *p = new int;
        *p = 10;
        cout << *p << endl;
        .
        Static variable delete data after return a function:
        In Sub Program:
        int *p;
        void fun()
        {
            int x = 10;
            p = &x;
            cout << "Fun " << *p << endl;

            return;
        }
        .
        In Main:
        fun();
        cout << "Fun " << *p << endl;
        .
        Dynamic variable hold value after return a function:
        In Sub Program:
        int *p;
        void fun()
        {
            int *x =  new int;
            *x = 10;
            p = x;
            cout << "Fun " << *p << endl;

            return;
        }
        In Main:
        fun();
        cout << "Fun " << *p << endl;
    */

    /*
        || Dynamic Array
        int *Arr = new int[5];
        for (int i = 0; i < 5; i++)
        {
            cin >> Arr[i];
        }
        for (int i = 0; i < 5; i++)
        {
            cout << Arr[i];
        }
    */

    /*
         || Dynamic Array Return From a function
         .
         In subprogram:
         int *fun()
         {
             int *Arr = new int[5];
             for(int i = 0; i < 5; i++)
             {
                 cin >> Arr[i];
             }

             return Arr;
         }
         .
         In Main Program:
         int *x = fun();

         for(int i = 0; i < 5; i++)
         {
             cout << x[i] << " ";
         }
    */

    /*
        || Incrase Size of Dynamic Array
        int *Arr = new int[3];
        for(int i = 0; i < 3; i++)
        {
            cin >> Arr[i];
        }

        int *ArrTwo = new int[5];
        for(int i = 0; i < 3; i++)
        {
            ArrTwo[i] = Arr[i];
        }

        ArrTwo[3] = 40;
        ArrTwo[4] = 50;

        // Delete Previous Array
        delete[] Arr;

        for(int i = 0; i < 5; i++)
        {
            cout << ArrTwo[i] << " ";
        }
    */

    

    return 0;
}