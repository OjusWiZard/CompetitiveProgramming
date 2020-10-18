#include <bits/stdc++.h>

using namespace std;

void solve(int t)
{
	long long ans = LONG_MAX;
	int w, n;
	cin >> w >> n;
	vector<int> x(w);
	for (int i = 0; i < w; i++)
		cin >> x[i];

	for (int j = 1; j <= n; j++)
	{
		long long sum = 0;
		for (int i = 0; i < w; i++)
			sum += min(abs(j - x[i]), abs(n - abs(j - x[i])));
		ans = min(ans, sum);
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