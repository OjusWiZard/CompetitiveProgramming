#include<bits/stdc++.h>

using namespace std;

void  solve()
{
	string s;
	int ans = 0;
	cin>>s;
	int i = 0;
	if (s[i]=='0')
	{
		cout<<"0\n";
		return;
	}
	while (s[i]=='1')
		i++;
	while (s[i]=='0')
	{
		i++;
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