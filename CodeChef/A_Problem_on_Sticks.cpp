#include <bits/stdc++.h>

using namespace std;

void solve()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];

	sort(a.begin(), a.end(), greater<>());
	int ans = a[0] > 0;
	for (int i = 1; i < n; i++)
	{
		if (a[i] != a[i - 1] && a[i] > 0)
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
}