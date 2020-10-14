#include <bits/stdc++.h>

using namespace std;

void solve()
{
	int n;
	cin >> n;
	if (__builtin_popcount(n) == 1 && n != 1)
		cout << "-1";
	else
	{
		if (n == 1)
			cout << "1 ";
		else
			cout << "2 3 1 ";
		for (int i = 4; i <= n; i++)
		{
			if (__builtin_popcount(i) == 1)
				cout << i + 1 << ' ' << i++ << ' ';
			else
				cout << i << ' ';
		}
	}
	cout << '\n';
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	while (t--)
		solve();
}