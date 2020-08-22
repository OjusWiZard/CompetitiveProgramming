#include<bits/stdc++.h>

using namespace std;

void  solve()
{
	int n, m;
	cin>>n;
	vector<long long> stairs(n);
	for (int i = 0; i<n; i++)
		cin>>stairs[i];

	cin>>m;
	long long ans = 0, h1 = 0;
	while (m--)
	{
		int w, h;
		cin>>w>>h;
		ans = max(ans+h1, stairs[w-1]);
		cout<<ans<<"\n";
		h1 = h;
	}
}

int main()
{
	int t;
	t = 1;
	while (t--)
		solve();
}