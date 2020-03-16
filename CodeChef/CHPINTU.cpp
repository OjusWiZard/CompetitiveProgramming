#include <bits/stdc++.h>
using namespace std;

int main()
{
 	ios::sync_with_stdio( false ) ;
 	cin.tie ( NULL ) ;

	int t ;
	cin>>t ;
	while( t-- )
	{
		int m, n, least = 2147483647, p ;
		cin>>n>>m ;
		int cost[51] = { 0 }, serial[51] ;
		bool allzero = true, fruit[51] = { 0 } ;
		for( int i = 1 ; i<=n ; i++ )
		{
			cin>>serial[i] ;
			fruit[serial[i]] = true ;
		}
		for( int i = 1 ; i<=n ; i++ )
		{
			cin>>p ;
			cost[serial[i]] += p ;
		}
		for( int i = 1 ; i<=m ; i++ )
		{
			if( cost[i]<least&&fruit[i] )
			{
				least = cost[i] ;
				allzero = false ;
			}
			//cout<<cost[i]<<" " ;
		}
		if( allzero )   cout<<0<<endl ;
		else            cout<<least<<endl ;
	}

	return 0;
}
