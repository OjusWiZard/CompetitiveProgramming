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
		int n ;
		cin>>n ;
		vector<int> a( n ) ;
		for( int i = 0; i<n; i++ ) cin>>a[i] ;

		sort( a.begin(), a.end() ) ;

		int ans = 1 ;
		bool limit = false ;
		for( int i = 0; i<n; i++ )
		{
			int found = 1 ;
			while( ans+found-1<a[i] )
			{
				i++ ;
				found++ ;
				if( i==n )
				{
					limit = true ;
					break ;
				}
			}
			if( !limit )	ans += found ;
			else break ;
		}

		cout<<ans<<"\n" ;
	}

	return 0 ;
}