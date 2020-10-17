#include <bits/stdc++.h>

using namespace std;

long long sumSeries(long long c, long long k)
{
	long long sum = 0, div = 1;
	while (c / div)
	{
		sum += c / div;
		div *= k;
	}
	return sum;
}

void solve()
{
	long long n, k;
	cin >> n >> k;

	int l = 1, r = n, ans;
	while (l <= r)
	{
		ans = l + (r - l) / 2;
		if (sumSeries(ans, k) < n)
			l = ans + 1;
		else if (sumSeries(ans, k) >= n)
			r = ans - 1;
		else
			break;
	}

	if (sumSeries(ans - 1, k) >= n)
		cout << ans - 1 << '\n';
	else if (sumSeries(ans, k) >= n)
		cout << ans << '\n';
	else
		cout << ans + 1 << '\n';
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