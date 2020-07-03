#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int t ;
	cin>>t ;
	while( t-- )
	{
		int k ;
		cin>>k ;
		char b[8][8] ;
		for( int i = 0; i<8; i++ )
		{
			for( int j = 0; j<8; j++ )
			{
				b[i][j] = '.' ;
			}
		}
		k = 64-k ;
		for( int i = 7; i>=0 && k; i-- )
		{
			for( int j = 7; j>=0&&k; j--, k-- )
			{
				b[i][j] = 'X' ;
			}
		}
		b[0][0] = 'O' ;

		for( int i = 0; i<8; i++ )
		{
			for( int j = 0; j<8; j++ )
			{
				cout<<b[i][j] ;
			}
			cout<<"\n" ;
		}
		cout<<"\n" ;
	}

	return 0 ;
}