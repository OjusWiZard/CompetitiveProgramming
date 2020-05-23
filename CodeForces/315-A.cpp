#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int n, a[1000], b[1000] ;
	cin>>n ;
	for( int i = 0; i<n; i++ ) cin>>a[i]>>b[i] ;

	int tot = 0 ;
	for( int i = 0; i<n; i++ )
	{
		bool found = false ;
		for( int j = 0; j<n; j++ )
		{
			if( i!=j )
			{
				if( a[i]==b[j] ) found = true ;
			}
		}
		if( !found )	tot++ ;
	}
	cout<<tot ;

	return 0 ;
}