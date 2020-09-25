#include <bits/stdc++.h>

using namespace std;

void solve()
{
	int n, p = 0;
	long long sum = 0;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] >= 0)
		{
			p++;
			sum += a[i];
		}
	}

	cout << sum << "\n";
	queue<int> ans;
	for (int i = 0; i < n; i++)
	{
		if (i < p)
		{
			if (a[i] < 0)
				ans.push(i + 1);
		}
		else if (a[i] >= 0)
			ans.push(i + 1);
	}

	cout << ans.size() << " ";
	while (ans.size())
	{
		cout << ans.front() << " ";
		ans.pop();
	}

	cout << "\n";
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