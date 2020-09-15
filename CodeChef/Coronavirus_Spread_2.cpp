#include <bits/stdc++.h>

using namespace std;

struct transmission
{
	int time, from, to;
	bool operator<(const transmission &b) const
	{
		return time < b.time;
	}
};

void solve()
{
	int n;
	cin >> n;
	int speed[n];
	multiset<transmission> timeline;
	for (int i = 0; i < n; i++)
		cin >> speed[i];

	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if ((speed[i] > speed[j] && i < j) || (speed[i] < speed[j] && i > j))
			{
				timeline.insert(transmission({100 * (j - i) / (speed[i] - speed[j]), i, j}));
				timeline.insert(transmission({100 * (j - i) / (speed[i] - speed[j]), j, i}));
			}

	int best = n, worst = 1;
	for (int initial = 0; initial < n; initial++)
	{
		unordered_set<int> infected;
		multiset<transmission> thistime;
		for (auto instnts : timeline)
			thistime.insert(instnts);
		infected.insert(initial);
		while (thistime.size() > 0)
		{
			transmission instant = *thistime.begin();
			thistime.erase(thistime.begin());
			if (infected.find(instant.from) != infected.end())
				infected.insert(instant.to);
		}
		best = min(best, (int)infected.size());
		worst = max(worst, (int)infected.size());
	}
	cout << best << " " << worst << "\n";
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