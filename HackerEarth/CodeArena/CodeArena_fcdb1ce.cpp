#include<bits/stdc++.h>

using namespace std;

void  solve()
{
	int n;
	cin>>n;
	unordered_map<string, int> pass;
	char mid = 'a';
	int len = 0;
	while (n--)
	{
		string s;
		cin>>s;
		pass[s]++;
		string rev;
		rev.assign(s);
		reverse(rev.begin(), rev.end());
		if (pass[rev]>0&&len==0)
		{
			mid = rev[rev.length()/2];
			len = rev.length();
		}
	}
	cout<<len<<" "<<mid;
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