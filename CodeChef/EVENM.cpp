#include <bits/stdc++.h>

using namespace std;

void printM( vector< vector<int> >& m, int& n )
{
	for( int i = 0; i<n; i++ )
	{
		for( int j = 0; j<n; j++ )
		{
			cout<<m[i][j]<<" " ;
		}
		cout<<"\n" ;
	}
}

int main()
{
	ios::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int t ;
	cin>>t ;
	while( t-- )
	{
		int n ;
		cin>>n ;
		vector< vector<int> >	m( n, vector<int>( n ) ) ;

		if( n%2 )
		{
			int num = 1 ;
			for( int i = 0; i<n; i++ )
			{
				for( int j = 0; j<n; j++, num++ )
				{
					m[i][j] = num ;
				}
			}
		}
		else
		{
			int num = 1 ;
			for( int i = 0; i<n; i+=2 )
			{
				for( int j = 0; j<n; j++, num++ )
				{
					m[i][j] = num ;
				}
			}
			for( int i = 1; i<n; i+=2 )
			{
				for( int j = n-1; j>=0; j--, num++ )
				{
					m[i][j] = num ;
				}
			}
		}

		printM( m, n ) ;
	}

	return 0 ;
}