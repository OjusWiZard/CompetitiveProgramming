#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int t ;
	cin>>t ;
	while( t-- )
	{
		int n, m, x, y ;
		unsigned long long int cost = 0 ;
		cin>>n>>m>>x>>y ;

		vector< vector<char> > a( n, vector<char>( m ) ) ;

		for( int i = 0; i<n; i++ )
		{
			for( int j = 0; j<m; j++ )
			{
				cin>>a[i][j] ;
			}
		}

		if( y/2<x )
		{
			for( int i = 0; i<n; i++ )
			{
				for( int j = 0; j<m-1; j++ )
				{
					if( a[i][j]=='.'&&a[i][j+1]=='.' )
					{
						a[i][j] = a[i][j+1] = '*' ;
						cost += y ;
					}
				}
			}
		}

		for( int i = 0; i<n; i++ )
		{
			for( int j = 0; j<m; j++ )
			{
				if( a[i][j]=='.' )
				{
					a[i][j] = '*' ;
					cost += x ;
				}
			}
		}

		cout<<cost<<"\n" ;
	}
	
	return 0 ;
}