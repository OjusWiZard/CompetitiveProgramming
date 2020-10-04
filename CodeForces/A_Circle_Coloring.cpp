#include <bits/stdc++.h>

using namespace std;

void solve()
{
	int n;
	cin >> n;
	int a[n], b[n], c[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
		cin >> b[i];
	for (int i = 0; i < n; i++)
		cin >> c[i];

	int prev = a[0];
	cout << a[0] << " ";
	for (int i = 1; i < n - 1; i++)
	{
		if (a[i] != prev)
			cout << (prev = a[i]) << " ";
		else if (b[i] != prev)
			cout << (prev = b[i]) << " ";
		else
			cout << (prev = c[i]) << " ";
	}
	if (a[n - 1] != a[0] && a[n - 1] != prev)
		cout << a[n - 1] << "\n";
	else if (b[n - 1] != a[0] && b[n - 1] != prev)
		cout << b[n - 1] << "\n";
	else
		cout << c[n - 1] << "\n";
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