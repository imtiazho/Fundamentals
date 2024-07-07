#include <iostream>

using namespace std;

int main() {
    long long eye, mouth, body;
    cin >> eye >> mouth >> body;
    long long int doll = 0;
    while (body != 0)
    {
        if (eye != 0 && mouth != 0)
        {
            if (mouth <= eye && mouth <= body)
            {
                doll += mouth;
                body -= mouth;
                eye -= mouth;
                mouth = 0;
            }
            else if(eye <= mouth && eye <= body)
            {
                doll += eye;
                body -= eye;
                mouth -= eye;
                eye = 0;
            }
        }
        else
        {
            long long int setTwoEye = eye / 2;
            if (setTwoEye >= body)
            {
                doll += body;
            }
            else
            {
                doll += setTwoEye;
            }
            break;
        }
    }

    cout << doll;
    return 0;
}
