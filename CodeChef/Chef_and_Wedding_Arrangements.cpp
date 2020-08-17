#include<bits/stdc++.h>

using namespace std;

long long calcCost(vector<pair<int, bool>> &t, int k)
{
	long long cost = 0;
	int nOfTables = 0;
	unordered_map<int, int> freq;
	for (int i = 0; i<t.size(); i++)
	{
		freq[t[i].first]++;
		if (t[i].second)
		{
			nOfTables++;
			for (auto family:freq)
			{
				if (family.second>1)
					cost += family.second;
			}
			freq.clear();
		}
	}
	return cost+nOfTables*k;
}

void fork1(int n, int k = 1)
{
	int f[n];
	for (int i = 0; i<n; i++)
	{
		cin>>f[i];
	}
	vector<vector<unordered_multiset<int>>> tables(n, vector<unordered_multiset<int>>(1));
	tables[0][0].insert(f[0]);

	for (int i = 1; i<n; i++)
	{
		tables[i].resize(tables[i-1].size());
		for (int j = 0; j<tables[i].size(); j++)
		{
			tables[i][j] = tables[i-1][j];
		}

		int minCount = tables[i][tables[i].size()-1].count(f[i]);
		int minC = minCount>0 ? minCount+1 : 0;

		if (k<minC)
		{
			tables[i].push_back(unordered_multiset<int>());
			tables[i][tables[i].size()-1].insert(f[i]);
			minC = k;
		}
		else
		{
			tables[i][tables[i].size()-1].insert(f[i]);
		}
	}

	long long cost = k*tables[tables.size()-1].size();
	for (int i = 0; i<tables[tables.size()-1].size(); i++)
	{
		for (auto t:tables[tables.size()-1][i])
		{
			int count = tables[tables.size()-1][i].count(t);
			if (count>1)
				cost++;
		}
	}

	cout<<cost<<"\n";
}

void forkn(int n, int k)
{
	vector<pair<int, bool>> f(n);
	for (int i = 0; i<n; i++)
	{
		cin>>f[i].first;
	}
	f[n-1].second = true;

	long long cost = calcCost(f, k);
	while (true)
	{
		int favI = n-1, minCost = cost;
		for (int i = 0; i<n; i++)
		{
			vector<pair<int, bool>> tempF = f;
			if (tempF[i].second)
				continue;
			else
				tempF[i].second = true;
			long long tempCost = calcCost(tempF, k);
			if (tempCost<=minCost)
			{
				minCost = tempCost;
				favI = i;
			}
		}
		if (!f[favI].second)
		{
			f[favI].second = true;
			cost = minCost;
		}
		else
			break;
	}

	cout<<cost<<"\n";
}

void  solve()
{
	int n, k;
	cin>>n>>k;
	if (k==1)
		fork1(n);
	else
		forkn(n, k);
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