#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int n, k ;
	cin>>n>>k ;

	for( int i = 0; i<n; i++ )
	{
		for( int j = 0; j<n; j++ )
		{
			if( i==j )	cout<<k<<" " ;
			else cout<<0<<" " ;
		}
		cout<<"\n" ;
	}

	return 0 ;
}