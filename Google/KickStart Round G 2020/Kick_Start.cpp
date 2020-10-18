#include <bits/stdc++.h>

using namespace std;

void solve(int t)
{
	string s;
	vector<int> kicks, starts;
	cin >> s;
	starts.resize(s.length() + 1);

	int pos = s.find("KICK");
	while (pos != -1 && pos + 1 < s.length())
	{
		kicks.push_back(pos);
		pos = s.find("KICK", pos + 1);
	}

	pos = s.find("START");
	while (pos != -1 && pos + 1 < s.length())
	{
		starts[pos] = 1;
		pos = s.find("START", pos + 1);
	}

	for (int i = starts.size() - 2; i >= 0; i--)
		starts[i] += starts[i + 1];

	long long ans = 0;
	for (int i = 0; i < kicks.size(); i++)
		ans += starts[kicks[i]];

	cout << "Case #" << t << ": " << ans << '\n';
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
		solve(i + 1);
}