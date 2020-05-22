#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	bool pos = false ;
	char grid[4][4]  ;
	for( int i = 0; i<4; i++ )
	{
		for( int j = 0; j<4; j++ )
		{
			cin>>grid[i][j] ;
		}
	}

	for( int i = 0; i<3; i++ )
	{
		for( int j = 0; j<3; j++ )
		{
			int w = 0, b = 0 ;
			if( grid[i][j]=='#' )	b++ ;
			else w++ ;
			if( grid[i][j+1]=='#' )	b++ ;
			else w++ ;
			if( grid[i+1][j]=='#' )	b++ ;
			else w++ ;
			if( grid[i+1][j+1]=='#' )	b++ ;
			else w++ ;

			if( w>2 || b>2 )	pos = true ;
		}
	}

	cout<<(pos?"YES":"NO") ;

	return 0 ;
}