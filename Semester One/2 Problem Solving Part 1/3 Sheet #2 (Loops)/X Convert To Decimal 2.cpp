#include<iostream>
#include<string>
#include<bitset>

using namespace std;

string binaryToDecimal(int n)
{
    string binary;

    while(n > 0)
    {

        int division = n / 2;
        int reminder = n % 2;
        n = division;
        char binaryInchar =  '0' + reminder;
        binary += binaryInchar;
    }

    return binary;
}

int main()
{
    int T;
    cin >> T;
    for(int j = 1; j <= T; j++)
    {
        int N;
        cin >> N;
        string binray = binaryToDecimal(N);
        string oneCounter;
        for(int i = 0; i < binray.length(); i++)
        {
            if(binray[i] == '1')
            {
                oneCounter += binray[i];
            }
        }
        int decimal = stoi(oneCounter, nullptr, 2);
        cout << decimal << endl;
    }

    return 0;
}
