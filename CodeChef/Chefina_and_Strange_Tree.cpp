#include<bits/stdc++.h>

using namespace std;

struct city
{
	int a, b, index;
	unordered_set<city *> reachableCities;
};

void dfs(city *cit, city *i, city *j, city *parent, int *d, int day)
{
	j->b -= min(i->a, j->b);
	if (j->b==0&&d[j->index]==-1)
		d[j->index] = day;

	for (city *rc:j->reachableCities)
	{
		if (rc!=parent)
			dfs(cit, i, rc, j, d, day);
	}
}

void  solve()
{
	int n;
	cin>>n;
	city cit[n];
	for (int i = 0; i<n-1; i++)
	{
		int u, v;
		cin>>u>>v;

		cit[u-1].reachableCities.insert(&cit[v-1]);
		cit[v-1].reachableCities.insert(&cit[u-1]);
	}
	int p[n], d[n];
	for (int i = 0; i<n; i++)
	{
		cit[i].index = i;
		d[i] = -1;
		cin>>p[i];
		p[i]--;
	}
	for (int i = 0; i<n; i++)
		cin>>cit[i].a;
	for (int i = 0; i<n; i++)
		cin>>cit[i].b;

	for (int i = 0; i<n; i++)
	{
		dfs(cit, &cit[p[i]], &cit[p[i]], NULL, d, i+1);

		for (city *rc:cit[p[i]].reachableCities)
			rc->reachableCities.erase(&cit[p[i]]);

		cit[p[i]].reachableCities.clear();
	}

	for (int i = 0; i<n; i++)
	{
		cout<<d[i]<<" ";
	}
	cout<<"\n";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin>>t;
	while (t--)
		solve();
}