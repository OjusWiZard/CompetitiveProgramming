#include <bits/stdc++.h>

using namespace std;

void solve()
{
	int n;
	cin >> n;
	int m[n][n];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> m[i][j];

	int ans = 0;
	for (int l = n - 1; l > 0; l--)
	{
		if (ans % 2 == 0)
		{
			if (m[0][l] != l + 1)
				ans++;
		}
		else if (m[0][l] == l + 1)
			ans++;
	}
	cout << ans << "\n";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}