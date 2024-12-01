// https://docs.google.com/document/d/14sdQIgBZV29d8cSMPfMasotAc_jhZNgxaqRSOG_yR1c/edit?tab=t.0 = done

// https://docs.google.com/document/d/1P10bN99yHVTCJ-Pz3_PC-Ie_WESe5Hl_JEMvdiQl6do/edit?tab=t.0 = done

// https://docs.google.com/document/d/12efBIhlH8-L1pAXMmYqpPLnYVl2ZP7L4/edit = done

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int N, counter = 0;
        cin >> N;
        string S;
        cin >> S;

        string temp;

        for(char element : S)
        {
            if(temp.empty() || !(temp.find(element) >= 0 && temp.find(element) <= N - 1))
            {
                temp += element;
                counter += 2;
            }

            else if((temp.find(element) >= 0 && temp.find(element) <= N - 1))
            {
                temp += element;
                counter += 1;

            }
        }
        
        cout << counter << endl;
    }

    // string temp = "Imtiaz";
    // char a = 'z';
    // cout << temp.find(a);


    return 0;
}
