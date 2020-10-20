#include <bits/stdc++.h>

using namespace std;

void solve()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];

	int l = 0, r = n - 1;
	while (a[l] == 0)
		l++;
	while (a[r] == 0)
		r--;

	int ans = 0;
	for (int i = l; i <= r; i++)
		if (a[i] == 0)
			ans++;
	cout << ans << '\n';
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