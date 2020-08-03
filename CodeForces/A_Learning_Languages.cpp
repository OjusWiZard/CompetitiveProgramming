#include<bits/stdc++.h>

using namespace std ;

void  solve()
{
	bool none = true;
	int n, m;
	cin >> n >> m;
	vector<set<int>> lang;
	for (int i = 0; i < n; i++)
	{
		int ms;
		cin >> ms;
		if(ms>0)
			none = false;
		set<int> lp;
		for (int j = 0; j < ms; j++)
		{
			int l;
			cin >> l;
			lp.insert(l);
		}
		
		for (int k = 0; k < lang.size(); k++)
		{
			set<int> intersection;
			set_intersection(lang[k].begin(), lang[k].end(), lp.begin(), lp.end(), inserter(intersection, intersection.begin()));
			if(intersection.size())
			{
				set_union(lang[k].begin(), lang[k].end(), lp.begin(), lp.end(), inserter(lp, lp.begin()));
				lang.erase(lang.begin() + k);
				k--;
			}
		}

		lang.push_back(lp);
	}

	cout << lang.size() - 1 + none;
}

int main()
{
	ios_base::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int t ;
	t = 1 ;
	while( t-- )
		solve();
}