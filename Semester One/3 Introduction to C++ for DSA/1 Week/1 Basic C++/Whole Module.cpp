#include <iostream>
#include <conio.h>
#include <iomanip>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    /*
        || About Basic Structure of CPP
    */

    /*
        || About Output

        cout << "Hello World from CPP!";
        .
        int a = 10;
        char b = 'A'; double c = 10.10;
        cout << a << " " << b << " " << c << endl;
        cout << "My favorite number is " << a << endl;
    */

    /*
        || About Input
        int x;
        char a;
        double b;
        cin >> x >> a >> b;
        cout << x << " " << a << endl << b << endl;

        || Kind of Typecasting
        char A = 'A';
        int asciiOfA = A;
        cout << asciiOfA;

        || Actual Typecasting
        char A = 'A';
        cout << (int)A;
        int A = 65;
        cout << (char)A;
    */

    /*
        || EOF : End Of File
        int x;
        while(cin >> x)
        {
                cout << x << endl;
        }

        || Setprecision
        double D = 23.45678;
        cout << fixed << setprecision(2) << D << endl;
    */

    /*
        || If else
        if (/condition)
        {
            code
        }
        else if (condition)
        {
            code
        }
        else if (condition)
        {
            code
        }
        else
        {
            code
        }

        || Ternary Operator : This is for only one condition
        // bool condition = true;
        // condition ? if condition is TRUE then print this block of code : if condition is FALSE then print this block of code
    */

    /*
        || Switch Case : Depend of a fixed value
        int day;
        cin >> day;
        switch (day)
        {
        case 1:
            cout << "Saturday";
            break;
        case 2:
            cout << "Sunday";
            break;
        case 3:
            cout << "Monday";
            break;
        case 4:
            cout << "Tuesday";
            break;
        case 5:
            cout << "Wednesday";
            break;
        case 6:
            cout << "Thursday";
            break;
        case 7:
            cout << "Friday";
            break;
        default:
            cout << "Invalid Input!";
        }

        ==

        int x;
        cin >> x;
        switch (x % 2)
        {
        case 0:
            cout << "Even";
            break;
        case 1:
            cout << "Odd";
            break;
        default:
            cout << "Invalid Input!";
        }
    */

    /*
        || Min
        int a, b;
        cin >> a >> b;
        int result = min(a, b); // It can find minimum number in many more numbers
        cout << result << endl;

        || Max
        int a, b;
        cin >> a >> b;
        int result = max(a, b); // It can find maximum number in many more numbers
        cout << result << endl;

        || Swap
        int a, b;
        cin >> a >> b;
        swap(a, b);
        cout << a << " " << b << endl;
    */

    /*
        || Normal string in C++
        int A;
        char S[100];
        cin >> A;
        // cin >> S; // It can't take a string with white space
        cin.getline(S, 100); // It can take a string with white space but it may rise problem sometimes. When you take one more input with cin and cin.getline() then after first input you hit a enter for the second input then it take this enter as a input. Then we cant use properly this method. Here is a soln for this problem that, we can use cin.ignore(). It ignore a input means ENTER.
        cout << A << endl << S;

        || BuiltIn string in C++
        string S;
        cin >> S;
        cout << S;
    */

    /*
        #include <bits/stdc++.h> => This header file include all the builtIn function and no need to others header file to use targeted builtIn function. Its like all in one(#include <bits/stdc++.h>).
    */

    getch();
    return 0;
}