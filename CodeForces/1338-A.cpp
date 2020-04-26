#include<bits/stdc++.h>

using namespace std ;

int main()
{
	ios::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int t ;
	cin>>t ;
	while( t-- )
	{
		int n, a, b, maxD = 0 ;
		cin>>n>>a ;
		for( int i = 1; i<n; i++ )
		{
			cin>>b;
			if( b<a )	maxD = max( maxD, a-b );
			a = max( a, b );
		}
		cout<<ceil( log2( maxD+1 ) )<<endl;
	}
	return 0;
}