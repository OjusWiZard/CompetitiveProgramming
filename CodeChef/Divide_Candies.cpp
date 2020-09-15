#include <bits/stdc++.h>

using namespace std;

void solve(int k)
{
	int n;
	cin >> n;
	set<int> s1, s2;
	long long g1 = 0, g2 = 0;
	for (int i = n; i > 0; i--)
	{
		if (g1 <= g2)
		{
			g1 += i;
			s1.insert(i);
		}
		else
		{
			g2 += i;
			s2.insert(i);
		}
	}

	cout << abs(g2 - g1) << "\n";
	for (int i = 1; i <= n; i++)
	{
		if (s1.find(i) != s1.end())
		{
			cout << '1';
			s1.erase(i);
		}
		else
		{
			cout << '0';
			s2.erase(i);
		}
	}
	cout << "\n";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int k, t;
	cin >> k >> t;
	while (t--)
		solve(k);
}