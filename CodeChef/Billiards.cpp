#include <bits/stdc++.h>

using namespace std;

long long dp[(int)1e6 + 1];
long long score(int x)
{
	if (x < 2)
		return 0;
	else if (x == 2 || x == 3)
		return 1;
	else
		return ((dp[x - 2] == -1 ? dp[x - 2] = score(x - 2) : dp[x - 2]) + (dp[x - 3] == -1 ? dp[x - 3] = score(x - 3) : dp[x - 3])) % 1000000009;
}

void solve()
{
	int x;
	cin >> x;
	cout << score(x) << "\n";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	memset(dp, -1, sizeof(long long) * ((int)1e6 + 1));
	int t;
	cin >> t;
	while (t--)
		solve();
}