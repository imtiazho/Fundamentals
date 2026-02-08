#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    deque<int> cards(n);
    for (int i = 0; i < n; i++)
    {
        cin >> cards[i];
    }

    int counter = 1, theraja = 0, dima = 0;
    while (!cards.empty())
    {
        int mx = max(cards.front(), cards.back());
        counter % 2 != 0 ? theraja += mx : dima += mx;

        mx == cards.front() ? cards.pop_front() : cards.pop_back();
        
        counter++;
    }

    cout << theraja << " " << dima << endl;
    return 0;
}

/*
    || First Noob Soln
    #include <bits/stdc++.h>

    using namespace std;

    int main()
    {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int n;
        cin >> n;
        vector<int> cards(n);
        for (int i = 0; i < n; i++)
        {
            cin >> cards[i];
        }

        bool thTurn = true, dimTrun = false;
        int theraja = 0, dima = 0;
        for (int i = 0; i < n; i++)
        {
            if (thTurn)
            {
                int left = cards.front();
                int right = cards.back();

                int mx = max(left, right);
                theraja += mx;

                if (mx == left)
                {
                    if (!cards.empty())
                    {
                        cards.erase(cards.begin());
                    }
                }
                else
                {
                    cards.pop_back();
                }

                thTurn = false;
                dimTrun = true;
            }
            else
            {
                int left = cards.front();
                int right = cards.back();

                int mx = max(left, right);
                dima += mx;

                if (mx == left)
                {
                    if (!cards.empty())
                    {
                        cards.erase(cards.begin());
                    }
                }
                else
                {
                    cards.pop_back();
                }

                thTurn = true;
                dimTrun = false;
            }
        }

        cout << theraja << " " << dima << endl;

        return 0;
    }
*/