#include <bits/stdc++.h>

using namespace std;

void dfs( vector<vector<bool> >&, int, int, int, int, int trapped ) ;

int ask( vector< vector<bool> >& z, int r1, int c1, int r2, int c2 )
{
	cout<<"1 "<<r1+1<<" "<<c1+1<<" "<<r2+1<<" "<<c2+1<<endl ;
	int x ;
	cin>>x ;
	if( r1==r2&&c1==c2&&x>0 )
	{
		dfs( z, r1, c1, r2, c2, x ) ;
	}
	return x ;
}

void dfs( vector< vector<bool> >& z, int r1, int c1, int r2, int c2, int trapped )
{
	if( r1==r2 )
	{
		if( c1==c2 )
		{
			if( trapped	) z[r1][c1] = true ;
		}
		else
		{
			int tLeft = ask( z, r1, c1, r2, c1+(c2-c1)/2 ) ;
			if( tLeft )	dfs( z, r1, c1, r2, c1+(c2-c1)/2, tLeft ) ;
			if( tLeft<trapped)	dfs( z, r1, 1+c1+(c2-c1)/2, r2, c2, trapped-tLeft ) ;
		}
	}
	else
	{
		if( c1==c2 )
		{
			int tTop = ask( z, r1, c1, r1+(r2-r1)/2, c2 ) ;
			if( tTop )	dfs( z, r1, c1, r1+(r2-r1)/2, c2, tTop ) ;
			if( tTop<trapped )	dfs( z, 1+r1+(r2-r1)/2, c1, r2, c2, trapped-tTop ) ;
		}
		else
		{
			if( r2-r1<=c2-c1 )
			{
				int tLeft = ask( z, r1, c1, r2, c1+(c2-c1)/2 ) ;
				if( tLeft )	dfs( z, r1, c1, r2, c1+(c2-c1)/2, tLeft ) ;
				if( tLeft<trapped )	dfs( z, r1, 1+c1+(c2-c1)/2, r2, c2, trapped-tLeft ) ;
			}
			else
			{
				int tTop = ask( z, r1, c1, r1+(r2-r1)/2, c2 ) ;
				if( tTop )	dfs( z, r1, c1, r1+(r2-r1)/2, c2, tTop ) ;
				if( tTop<trapped )	dfs( z, 1+r1+(r2-r1)/2, c1, r2, c2, trapped-tTop ) ;
			}
		}
	}
}

int main()
{
	/*ios::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;*/

	int t ;
	cin>>t ;
	while( t-- )
	{
		int n, p ;
		cin>>n>>p ;
		vector< vector<bool> > zombies( n, vector<bool>( n ) ) ;
		if( n==1 )	ask( zombies, 0, 0, 0, 0 ) ;
		else
		{
			int trapped = ask( zombies, 0, 0, n-1, n-1 ) ;
			if( trapped)	dfs( zombies, 0, 0, n-1, n-1, trapped ) ;
		}
		cout<<2<<endl ;
		
		for( int i = 0; i<n; i++ )
		{
			for( int j = 0; j<n; j++ )
			{
				cout<<zombies[i][j]<<" " ;
			}
			cout<<endl ;
		}
		int verdict ;
		cin>>verdict ;
		if( verdict==-1 )	break ;
	}

	return 0 ;
}