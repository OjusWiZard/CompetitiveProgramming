#include <bits/stdc++.h>

using namespace std;

void solve()
{
	string s;
	cin >> s;
	int m;
	cin >> m;

	int dp[s.length()];
	for (int i = 0, sum = 0; i < s.length() - 1; i++)
	{
		if (s[i] == s[i + 1])
			sum++;
		dp[i] = sum;
	}

	while (m--)
	{
		int l, r;
		cin >> l >> r;
		cout << dp[r - 2] - (l != 1 ? dp[l - 2] : 0) << "\n";
	}
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