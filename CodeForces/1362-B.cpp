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
		int n, maxS=0 ;
		cin>>n ;
		vector<bool> isPresent( 1024 ) ;
		vector<int> s( n ) ;
		for( int i = 0; i<n; i++ )
		{
			cin>>s[i] ;
			maxS = max( maxS, s[i] ) ;
			isPresent[s[i]] = true ;
		}

		bool allGood = false ;
		for( int i = 1; i<=1023; i++ )
		{
			allGood = true ;
			for( int j = 0; j<n; j++ )
			{
				if( !isPresent[s[j]^i] ) allGood = false ;
			}
			if( allGood )
			{
				cout<<i<<"\n" ;
				break ;
			}
		}
		if( !allGood )	cout<<-1<<"\n" ;
	}

	return 0 ;
}