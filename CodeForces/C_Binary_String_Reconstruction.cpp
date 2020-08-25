#include <bits/stdc++.h>

using namespace std;

void solve()
{
	string s;
	int x;
	cin >> s;
	cin >> x;
	char ans[s.length()], verify[s.length()];

	for (int i = 0; i < s.length(); i++)
	{
		bool zero = false;
		if (i >= x)
			if (s[i - x] == '0')
				zero = true;
		if (i <= s.length() - 1 - x)
			if (s[i + x] == '0')
				zero = true;

		ans[i] = '1' - zero;
	}
	ans[s.length()] = '\0';

	for (int i = 0; i < s.length(); i++)
	{
		bool one = false;
		if (i >= x)
			if (ans[i - x] == '1')
				one = true;
		if (i <= s.length() - 1 - x)
			if (ans[i + x] == '1')
				one = true;

		verify[i] = '1' - (!one);
	}

	bool pos = true;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] != verify[i])
			pos = false;
	}

	if (pos)
		cout << ans;
	else
		cout << "-1";
	cout << "\n";
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}