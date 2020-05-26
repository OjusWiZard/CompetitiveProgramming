#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int t, a1, a2 ;
	cin>>t ;

	while( t-- )
	{
		int n, m ;
		cin>>n>>m ;
		if( n%2==0 )
		{
			a1 = ceil( (float)n/2 )*m ;
		}
		else
		{
			a1 = floor( (float)n/2 )*m+ceil( (float)m/2 ) ;
		}

		if( m%2==0 )
		{
			a2 = ceil( (float)m/2 )*n ;
		}
		else
		{
			a2 = floor( (float)m/2 )*n+ceil( (float)n/2 ) ;
		}
		cout<<min( a1, a2 )<<"\n" ;
	}

	return 0 ;
}