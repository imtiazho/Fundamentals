#include <iostream>

using namespace std;

int main() {
    long long int eye, mouth, body;
    cin >> eye >> mouth >> body;
    long long int doll = 0;

    // This for filtering: One eye, one mouth, and one body.
    long long int oneSetForm = min(min(eye, mouth), body);
    doll += oneSetForm;
    eye -= oneSetForm;
    mouth -= oneSetForm;
    body -= oneSetForm;

    if(eye >= 2 && body > 0)
    {
        long long extraDoll = min((eye / 2), body);
        doll += extraDoll;
    }

    cout << doll;
    return 0;
}

