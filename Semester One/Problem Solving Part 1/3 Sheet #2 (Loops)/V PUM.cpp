#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    int counter = 0;

    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= 4; j++)
        {
            counter++;
            if(counter % 4 == 0)
            {
                cout << "PUM";
            }
            else {
                cout << counter << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
