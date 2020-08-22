#include<bits/stdc++.h>

using namespace std;

void  solve()
{
	int n, m;
	cin>>n>>m;
	int a[n];
	for (int i = 0; i<n; i++)
		cin>>a[i];

	long long totalY = 0;
	while (m--)
	{
		int t;
		cin>>t;
		switch (t)
		{
		case 1:
			int v, x;
			cin>>v>>x;
			a[v-1] = x-totalY;
			break;
		case 2:
			int y;
			cin>>y;
			totalY += y;
			break;
		case 3:
			int q;
			cin>>q;
			cout<<a[q-1]+totalY<<"\n";
		}
	}
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