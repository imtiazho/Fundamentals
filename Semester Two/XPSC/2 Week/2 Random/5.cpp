// https://codeforces.com/problemset/problem/1790/C

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	bool resC = false;
	while (t--)
	{
		int n;
		cin >> n;
		int m = n;
		map<int, bool> mp;
		vector<int> v;
		while (m--)
		{
			for (int i = 0; i < n - 1; i++)
			{
				int x;
				cin >> x;
				if (!mp[x])
				{
					v.push_back(x);
					mp[x] = true;
				}
			}
		}

		if (resC)
		{
			sort(v.begin(), v.end());
			for (auto x : v)
				cout << x << " ";
			cout << endl;

			resC = false;
		}
		else{
			for (auto x : v)
				cout << x << " ";
			cout << endl;
			resC = true;
		}

	}
}
