#include<bits/stdc++.h>

using namespace std;

void  solve()
{
	string s;
	cin>>s;
	int x1, y1, q;
	cin>>x1>>y1;

	unordered_map<char, int> freq;
	for (int i = 0; i<s.length(); i++)
	{
		freq[s[i]]++;
	}


	cin>>q;
	while (q--)
	{
		int x2, y2;
		cin>>x2>>y2;
		bool pos = true;
		if (x2>x1)
			if (freq['R']<x2-x1)
				pos = false;
		if (x1>x2)
			if (freq['L']<x1-x2)
				pos = false;
		if (y2>y1)
			if (freq['U']<y2-y1)
				pos = false;
		if (y1>y2)
			if (freq['D']<y1-y2)
				pos = false;

		if (pos)
			cout<<"YES"<<" "<<(abs(y2-y1)+abs(x2-x1))<<"\n";
		else
			cout<<"NO\n";
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