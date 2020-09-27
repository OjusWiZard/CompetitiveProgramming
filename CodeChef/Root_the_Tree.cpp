#include <bits/stdc++.h>

using namespace std;

void solve()
{
	int n, ans = 0;
	cin >> n;
	vector<vector<bool>> graph(n, vector<bool>(n, false));

	for (int i = 0; i < n - 1; i++)
	{
		int u, v;
		cin >> u >> v;
		graph[u - 1][v - 1] = true;
	}
	for (int j = 0; j < n; j++)
	{
		int ind = 0;
		for (int i = 0; i < n; i++)
			if (graph[i][j])
				ind++;
		ans += max(0, ind - 1);
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
}