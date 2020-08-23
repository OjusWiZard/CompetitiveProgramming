#include<bits/stdc++.h>

using namespace std;

void  solve()
{
	int k, n;
	cin>>n>>k;
	string s;
	cin>>s;
	int ones = 0, zero = 0;
	for (int i = 0; i<n; i++)
	{
		if (s[i]=='1')
			ones++;
		else
			zero++;
	}

	if (zero==0||ones==0)
	{
		cout<<s<<"\n";
		return;
	}
	else if (ones%(n/k)==0&&zero%(n/k)==0&&n%(k)==0)
	{
		vector<char> fs(k);
		int i = 0;
		while (i<zero*k/n)
			fs[i++] = '0';
		while (i<k)
			fs[i++] = '1';

		vector<char> oneup(2*k);
		for (int i = 0; i<k; i++)
			oneup[i] = fs[i];
		for (int i = 2*k-1, j = 0; j<k; i--, j++)
			oneup[i] = fs[j];

		for (int i = 0; i<n/(2*k); i++)
		{
			for (int j = 0; j<2*k; j++)
			{
				cout<<oneup[j];
			}
		}
		if (n%(2*k))
			for (int i = 0; i<k; i++)
				cout<<fs[i];
		cout<<"\n";
	}
	else
	{
		cout<<"IMPOSSIBLE\n";
		return;
	}
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