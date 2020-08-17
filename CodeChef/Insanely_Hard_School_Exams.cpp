#include <bits/stdc++.h>

using namespace std;

void  solve()
{
	int n, c, k, v;
	cin>>n>>c>>k;
	vector<int> line(c);

	for (int i = 0; i<n; i++)
	{
		int a, b, c;
		cin>>a>>b>>c;
		line[c-1]++;
	}
	for (int i = 0; i<c; i++)
	{
		cin>>v;
		if (v==0)
			line[i] = 0;
	}

	multiset<int, greater<int>> l;
	for (int i = 0; i<c; i++)
	{
		l.insert(line[i]);
	}

	while (k>=v&&v>0)
	{
		k -= v;
		if (*l.begin()<3)
			break;
		int li = *l.begin();
		l.erase(l.begin());
		li--;
		l.insert(li);
	}

	uint64_t ans = 0;
	for (auto i:l)
	{
		if (i>2)
			ans += (uint64_t)i*(i-1)*(i-2)/6;
	}
	cout<<ans<<"\n";
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