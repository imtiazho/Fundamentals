// https://www.codechef.com/problems/CHANGE_PLZ
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		int x;
		cin >> x;
		cout << ((100 - x) / 10) * 10 << endl;
	}
}
