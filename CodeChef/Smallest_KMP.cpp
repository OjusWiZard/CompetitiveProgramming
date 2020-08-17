#include<bits/stdc++.h>

using namespace std ;

void  solve()
{
	string s, p;
	cin>>s>>p;
	
	vector<int> freq(26);
	string str;
	str.resize(s.size()-p.size());
	for (int i = 0; i < s.size(); i++)
	{
		freq[s[i]-'a']++;
	}
	for (int i = 0; i < p.size(); i++)
	{
		freq[p[i]-'a']--;
	}
	
	for (int i = 0, k = 0; i < 26; i++)
	{
		while (freq[i]--)
		{
			str[k] = i+'a';
			k++;
		}
	}

	int l=0, r=str.size()-1;
	string left, right, mid;
	while (l<=r)
	{ 
		left.assign(str);
		mid.assign(str);
		right.assign(str);

		left.insert(max(0,l+(r-l)/2-1), p);
		mid.insert(max(0,l+(r-l)/2), p);
		right.insert(max(0,l+(r-l)/2+1), p);
		
		if( left<mid )
		{ 
			r = l+(r-l)/2-1;
		}
		else	
		{
			l = l+(r-l)/2+1;
		}
	}
	cout<<min({ left, mid, right })<<"\n";
}

int main()
{
	ios_base::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int t ;
	cin >> t ;
	while( t-- )
		solve();
}