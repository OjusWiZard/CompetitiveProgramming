#include<bits/stdc++.h>

using namespace std;

void  solve()
{
	int n, s, t;
	cin>>n>>s>>t;
	int p[n];
	for (int i = 0; i<n; i++)
		cin>>p[i];

	int ans = 0;
	bool pos = true;
	while (s!=t)
	{
		s = p[s-1];
		if (ans>n)
		{
			cout<<-1;
			return;
		}
		ans++;
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