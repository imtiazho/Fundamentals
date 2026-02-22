// https://codeforces.com/problemset/problem/2092/B

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		string s1, s2;
		cin >> s1 >> s2;

		int zero1 = 0, need1 = 0;
		int zero2 = 0, need2 = 0;

		for (int i = 0; i < n; i++)
		{
			if (i % 2 == 0)
			{
				if (s1[i] == '0')
					zero1++;
				need1++;

				if (s2[i] == '0')
					zero2++;
			}
			else
			{
				if (s2[i] == '0')
					zero1++;

				if (s1[i] == '0')
					zero2++;
				need2++;
			}
		}

		if (zero1 >= need1 && zero2 >= need2)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}