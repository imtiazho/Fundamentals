// https://codeforces.com/problemset/problem/1790/C

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
		vector<vector<int>> v(n, vector<int>(n - 1));
		map<int, int> mp;

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n - 1; j++)
			{
				cin >> v[i][j];
			}
			mp[v[i][0]]++;
		}

		int firstEle = 0;
		for (auto [num, freq] : mp)
		{
			if (freq == n - 1)
				firstEle = num;
		}

		cout << firstEle << " ";
		for (int i = 0; i < n; i++)
		{
			if (v[i][0] != firstEle)
			{
				for (auto x : v[i])
				{
					cout << x << " ";
				}
			}
		}
		cout << endl;
	}
}