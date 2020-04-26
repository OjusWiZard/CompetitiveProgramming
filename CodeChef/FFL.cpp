#include <bits/stdc++.h>
using namespace std ;

int main()
{
	ios::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int t ;
	cin>>t ;
	while( t-- )
	{
		struct player
		{
			int cost ;
			bool forw ;
		};
		int n, s ;
		cin>>n>>s ;
		vector<player> p( n ) ;
		for( int i = 0; i<n; i++ )
		{
			cin>>p[i].cost ;
		}
		for( int i = 0; i<n; i++ )
		{
			cin>>p[i].forw ;
		}

		int minD = 101, minF = 101 ;
		for( int i = 0; i<n; i++ )
		{
			switch( p[i].forw )
			{
				case 1: minF = min( minF, p[i].cost ) ; break ;
				case 0: minD = min( minD, p[i].cost ) ; break ;
			}
		}

		if( minD+minF<=100-s )	cout<<"yes\n" ;
		else	cout<<"no\n" ;

	}

	return 0 ;
}