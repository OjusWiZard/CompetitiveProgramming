#include <bits/stdc++.h>

using namespace std;

void solve()
{
	int h, c, t;
	cin >> h >> c >> t;

	if (h + c - 2 * t >= 0)
		cout << "2\n";
	else
	{
		long long k = (h - t) / (2 * t - h - c);
		if (abs((k * (h + c) + h) - t * (2 * k + 1)) * (2 * k + 3) <= abs(((k + 1) * (h + c) + h) - t * (2 * k + 3)) * (2 * k + 1))
			cout << 2*k + 1 << "\n";
		else
			cout << 2*k + 3 << "\n";
	}
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