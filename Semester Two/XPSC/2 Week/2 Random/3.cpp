// https://codeforces.com/problemset/problem/2055/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, a, b;
		cin >> n >> a >> b;

		int res = abs(a - b);
		if (res % 2 == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}
