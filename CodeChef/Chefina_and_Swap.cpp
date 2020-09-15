#include <bits/stdc++.h>

using namespace std;

int mystery(long long n) // O(1)
{
	long long optimalM = (sqrt(1 + 2 * n * (n + 1)) - 1) / 2, ans = 0;
	for (long long i = 0, equal = n * (n + 1) / 4; i < 2; i++)
	{
		long long m = optimalM - i;
		long long sum = m * (m + 1) / 2;
		long long d = equal - sum;
		if (d < n && d > 0)
			ans += min({d, n - d, m, n - m});
	}
	return ans;
}

void solve()
{
	long long n;
	cin >> n;
	long long m = (sqrt(1 + 2 * n * (n + 1)) - 1) / 2;
	if (n % 4 == 1 || n % 4 == 2)
		cout << 0 << "\n";
	else if (m * (m + 1) == n * (n + 1) / 2)
		cout << m * (m - 1) / 2 + (n - m) * (n - m - 1) / 2 + mystery(n) << "\n";
	else
		cout << mystery(n) << "\n";
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