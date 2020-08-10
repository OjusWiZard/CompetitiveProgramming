#include<bits/stdc++.h>

using namespace std;

void  solve()
{
	int n, m;
	cin>>n>>m;
	char belt[n][m];
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<m; j++)
		{
			cin>>belt[i][j];
		}
	}

	int ans = 0;
	for (int i = 0; i<n; i++)
	{
		if (belt[i][m-1]=='R')
			ans++;
	}
	for (int i = 0; i<m; i++)
	{
		if (belt[n-1][i]=='D')
			ans++;
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