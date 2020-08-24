#include <bits/stdc++.h>

using namespace std;

void solve()
{
	int n, m;
	cin >> n >> m;
	unordered_set<int> joinable;
	for (int i = 0; i < n; i++)
		joinable.insert(i + 1);
	while (m--)
	{
		int a, b;
		cin >> a >> b;
		joinable.erase(a);
		joinable.erase(b);
	}

	int center = *joinable.begin();
	cout << n - 1 << "\n";
	for (int i = 0; i < n; i++)
	{
		if (1 + i != center)
			cout << center << " " << i + 1 << "\n";
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