#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int r, c ;
	cin>>r>>c ;

	vector< vector<int> >	cake(r, vector<int> (c) ) ;

	for( int i = 0; i<r; i++ )
	{
		for( int j = 0; j<c; j++ )
		{
			char c ;
			cin>>c ;
			if( c=='.' )	cake[i][j]=0 ;
			else			cake[i][j]=-1 ;
		}
	}

	int eaten = 0 ;
	for( int i = 0; i<r; i++ )
	{
		bool foundStrawberry = false ;
		int count = 0 ;
		for( int j = 0; j<c; j++ )
		{
			if( cake[i][j]==0 )
			{
				count++ ;
				cake[i][j]++ ;
			}
			else if( cake[i][j]==-1 ) foundStrawberry = true ;
		}
		if ( !foundStrawberry )	eaten += count ;
		else
		{
			for( int j = 0; j<c; j++ )
			{
				if( cake[i][j]!=-1 )	cake[i][j]=0 ;
			}
		}
	}

	for( int j = 0; j<c; j++ )
	{
		bool foundStrawberry = false ;
		int count = 0 ;
		for( int i = 0; i<r; i++ )
		{
			if( cake[i][j]==0 )
			{
				count++ ;
				cake[i][j]++ ;
			}
			else if( cake[i][j]==-1 ) foundStrawberry = true ;
		}
		if( !foundStrawberry )	eaten += count ;
		else
		{
			for( int i = 0; i<r; i++ )
			{
				if( cake[i][j]!=-1 )	cake[i][j]=0 ;
			}
		}
	}

	cout<<eaten ;

	return 0 ;
}