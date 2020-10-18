#include <bits/stdc++.h>

using namespace std;

void solve(int t)
{
	int n;
	long long ans = 0;
	cin >> n;
	vector<vector<int>> mat(n, vector<int>(n));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> mat[i][j];

	for (int i = n - 1; i >= 0; i--)
	{
		vector<int> d;
		long long sum = 0;
		for (int j = 0; j < n && i + j < n; j++)
			sum += mat[i + j][j];
		ans = max(ans, sum);
	}
	for (int j = n - 1; j > 0; j--)
	{
		vector<int> d;
		long long sum = 0;
		for (int i = 0; i < n && i + j < n; i++)
			sum += mat[i][i + j];
		ans = max(ans, sum);
	}

	cout << "Case #" << t << ": " << ans << '\n';
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
		solve(i + 1);
}