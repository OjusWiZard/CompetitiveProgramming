#include<bits/stdc++.h>

using namespace std;

void  solve()
{
	int n;
	cin>>n;
	vector<pair<int, int>> p(n);
	for (int i = 0; i<n; i++)
		cin>>p[i].first>>p[i].second;

	int ans = n;
	while (n>5)
	{
		n /= 2;
		ans += n;
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