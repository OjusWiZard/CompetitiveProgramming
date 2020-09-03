#include <bits/stdc++.h>

using namespace std;

void solve()
{
	int n, prev;
	long long ans = 0, temp = 1;
	cin >> n >> prev;
	for (int i = 0, a; i < n - 1; i++)
	{
		cin >> a;
		if (a >= prev)
			temp++;
		else
		{
			ans += temp * (temp + 1) / 2;
			temp = 1;
		}
		prev = a;
	}
	ans += temp * (temp + 1) / 2;
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