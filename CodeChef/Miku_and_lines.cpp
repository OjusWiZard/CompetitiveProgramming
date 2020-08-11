#include<bits/stdc++.h>

using namespace std;

void  solve()
{
	long long n, m, c, l = 0, r = 0;
	cin>>n>>m>>c;
	while (n--)
	{
		long long x, y;
		cin>>x>>y;
		if (m*x+c>y)
			l++;
		else if (m*x+c<y)
			r++;
	}
	cout<<l*r<<"\n";
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