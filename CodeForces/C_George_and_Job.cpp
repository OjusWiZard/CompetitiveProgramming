#include <bits/stdc++.h>

using namespace std;

void solve()
{
	int n, m, k;
	cin >> n >> m >> k;
	long long dp[k + 1][n + 1], sum[n - m + 1] = {0};
	int p[n];
	memset(dp, 0, sizeof dp);
	for (int i = 0; i < n; i++)
		cin >> p[i];

	for (int i = 0; i < m; i++)
		sum[0] += p[i];
	for (int i = 1; i < n - m + 1; i++)
		sum[i] = sum[i - 1] + p[m + i - 1] - p[i - 1];

	for (int i = 1; i <= k; i++)
		for (int j = i * m; j <= n; j++)
			dp[i][j] = max(dp[i][j - 1], dp[i - 1][j - m] + sum[j - m]);
	cout << dp[k][n] << "\n";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	t = 1;
	while (t--)
		solve();
}