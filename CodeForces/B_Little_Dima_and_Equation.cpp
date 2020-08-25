#include <bits/stdc++.h>

using namespace std;

int s(int x)
{
	int ans = 0;
	while (x > 0)
	{
		ans += x % 10;
		x /= 10;
	}
	return ans;
}

void solve()
{
	int a, b, c, ans = 0;
	queue<int> nums;
	cin >> a >> b >> c;

	for (int sx = 1; sx < 82; sx++)
	{
		long long rhs = pow(sx, a) * b + c;
		if (s(rhs) == sx && rhs < 1e9)
		{
			nums.push(rhs);
			ans++;
		}
	}
	cout << ans << "\n";
	while (!nums.empty())
	{
		cout << nums.front() << " ";
		nums.pop();
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