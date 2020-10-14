#include <bits/stdc++.h>

using namespace std;

void solve()
{
	int n, X, p, k, x = -1, count = 0;
	bool foundX = false;
	cin >> n >> X >> p >> k;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] == X)
			foundX = true;
	}

	sort(a, a + n);
	p--;
	k--;

	if (!foundX)
	{
		a[k] = X;
		sort(a, a + n);
		count++;
	}

	for (int i = p; i < n && x == -1; i++)
		if (a[i] == X)
			x = i;
	for (int i = p; i >= 0 && x == -1; i--)
		if (a[i] == X)
			x = i;

	if (k <= p && p <= x || k >= p && p >= x)
		cout << count + abs(x - p) << '\n';
	else
		cout << "-1\n";
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