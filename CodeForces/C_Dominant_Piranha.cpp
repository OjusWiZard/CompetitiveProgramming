#include <bits/stdc++.h>

using namespace std;

void solve()
{
	int n;
	cin >> n;
	long long a[n], max = 0, maxI = 0;
	for (int i = 0; i < n; i++)
		cin >> a[i];

	for (int i = 0, maxchangeable = -1; i < n; i++)
	{
		int changeable = 0;
		if (i > 0)
			if (a[i] > a[i - 1])
				changeable++;
		if (i < n - 1)
			if (a[i] > a[i + 1])
				changeable++;
		if (a[i] == max && changeable > maxchangeable || a[i] > max)
		{
			max = a[i];
			maxI = i;
			maxchangeable = changeable;
		}
	}

	int l = maxI, r = maxI;
	while (true)
	{
		bool changed = false;
		if (l > 0)
		{
			if (a[l] > a[l - 1])
			{
				l--;
				a[l] = a[r] = a[l + 1] + 1;
				changed = true;
			}
		}
		if (r < n - 1 && !changed)
			if (a[r] > a[r + 1])
			{
				r++;
				a[l] = a[r] = a[r - 1] + 1;
				changed = true;
			}

		if (!changed)
			break;
	}

	if (l == 0 && r == n - 1)
		cout << ++maxI << '\n';
	else
		cout << "-1\n";
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