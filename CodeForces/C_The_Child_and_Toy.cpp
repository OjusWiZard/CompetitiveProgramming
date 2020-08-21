#include<bits/stdc++.h>

using namespace std;

struct part
{
	int v = 0;
	unordered_set<int> rope;

	bool operator < (const part &b)
	{
		return this->v>b.v;
	}
};

bool comp(pair<int, part> a, pair<int, part> b)
{
	return a.second.v>b.second.v;
}

void  solve()
{
	int n, m;
	cin>>n>>m;
	vector<part> parts(n);
	vector<pair<int, part>> pa(n);
	for (int i = 0; i<n; i++)
		cin>>parts[i].v;
	for (int i = 0; i<m; i++)
	{
		int a, b;
		cin>>a>>b;
		parts[a-1].rope.insert(b-1);
		parts[b-1].rope.insert(a-1);
	}

	for (int i = 0; i<n; i++)
	{
		pa[i].first = i;
		pa[i].second = parts[i];
	}
	sort(pa.begin(), pa.end(), comp);

	int ans = 0;
	for (int i = 0; i<n; i++)
	{
		for (int j : pa[i].second.rope)
		{
			if (parts[j].rope.count(pa[i].first))
				ans += parts[j].v;
			parts[j].rope.erase(pa[i].first);
		}
		parts[pa[i].first].rope.clear();
	}

	cout<<ans;
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