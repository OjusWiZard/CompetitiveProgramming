#include <bits/stdc++.h>

using namespace std;

int main()
{
	freopen( "input.txt", "r", stdin ) ;
	freopen( "output.txt", "w", stdout ) ;

	ios_base::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	vector< pair<int,int> > ans ;

	int single[5001] = { 0 } ;
	int n, num ;
	bool possible = 1 ;
	cin>>n ;
	n *= 2 ;
	
	for( int i = 1; i<=n; i++ )
	{
		int num ;
		cin>>num ;
		if( single[num]==0 )	single[num] = i ;
		else
		{
			ans.push_back( pair<int, int>( single[num], i ) ) ;
			single[num] = 0 ;
		}
	}

	if( ans.size()*2 == n )
	{
		for( int i = 0; i<ans.size(); i++ )
		{
			cout<<ans[i].first<<" "<<ans[i].second<<"\n" ;
		}
	}
	else cout<<-1 ;

	return 0 ;
}