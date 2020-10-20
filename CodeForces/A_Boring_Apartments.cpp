#include <bits/stdc++.h>

using namespace std;

void solve()
{
	string x;
	cin >> x;

	long long ans = 0;
	int fd = x[0] - '0';
	ans += (fd - 1) * 10;
	if (x.size() >= 1)
		ans++;
	if (x.size() >= 2)
		ans += 2;
	if (x.size() >= 3)
		ans += 3;
	if (x.size() >= 4)
		ans += 4;
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