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

		string str1 = "", str2 = "";
		for (int i = 0; i < n; i++)
		{
			if (i % 2 == 0)
			{
				str1.push_back(s1[i]);
				str2.push_back(s2[i]);
			}
			else
			{
				str1.push_back(s2[i]);
				str2.push_back(s1[i]);
			}
		}

		int zero1 = 0, zero2 = 0;
		for (auto c : str1)
			if (c == '0')
				zero1++;

		for (auto c : str2)
			if (c == '0')
				zero2++;
			
		if(zero1 >= (int)ceil(str1.length() / 2.0) && zero2 >= (int)ceil(str2.length() / 2.0))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}