#include<bits/stdc++.h>

using namespace std;

void  solve()
{
	int n, k;
	cin>>n>>k;
	int w[n];
	for (int i = 0; i<n; i++)
		cin>>w[i];

	int i = 0, rounds = 0;
	while (i<n)
	{
		int tk = k;
		if (w[i]>k)
		{
			cout<<"-1\n";
			return;
		}
		while (tk>=w[i]&&i<n)
		{
			tk -= w[i];
			w[i] = 0;
			i++;
		}
		rounds++;
	}
	cout<<rounds<<"\n";
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