#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	struct animal
	{
		int val, row, col ;
		bool operator<( const animal& b )
		{
			return this->val<b.val ;
		}
		animal( int r, int c, int v )
		{
			row = r ;
			col = c ;
			val = v ;
		}
	};

	int n, m, hunts=0 ;
	cin>>n>>m ;
	vector<animal>  wolf ;
	vector< vector<char> > grid( n+2, vector<char>( m+2, '.' ) ) ;

	for( int i = 1; i<=n; i++ )
	{
		for( int j = 1; j<=m; j++ )
		{
			cin>>grid[i][j] ;
		}
	}
	
	for( int i = 1; i<=n; i++ )
	{
		for( int j = 1; j<=m; j++ )
		{
			if( grid[i][j]=='W' )
			{
				int count = 0 ;
				if( grid[i-1][j]=='P' )	count++ ;
				if( grid[i+1][j]=='P' )	count++ ;
				if( grid[i][j-1]=='P' )	count++ ;
				if( grid[i][j-1]=='P' )	count++ ;
				wolf.push_back( *(new animal( i, j, count ) ) ) ;
			}
		}
	}

	sort( wolf.begin(), wolf.end() ) ;

	for( int i = 0; i<wolf.size(); i++ )
	{
		if( grid[wolf[i].row-1][wolf[i].col]=='P' )
		{
			grid[wolf[i].row-1][wolf[i].col] = '.' ;
			hunts++ ;
			continue ;
		}
		if( grid[wolf[i].row+1][wolf[i].col]=='P' )
		{
			grid[wolf[i].row+1][wolf[i].col] = '.' ;
			hunts++ ;
			continue ;
		}
		if( grid[wolf[i].row][wolf[i].col-1]=='P' )
		{
			grid[wolf[i].row][wolf[i].col-1] = '.' ;
			hunts++ ;
			continue ;
		}
		if( grid[wolf[i].row][wolf[i].col+1]=='P' )
		{
			grid[wolf[i].row][wolf[i].col+1] = '.' ;
			hunts++ ;
			continue ;
		}
	}

	cout<<hunts ;

	return 0 ;
}