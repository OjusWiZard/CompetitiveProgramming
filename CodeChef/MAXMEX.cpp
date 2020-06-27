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
		int n, m, less=0, great=0 ;
		cin>>n>>m ;
		vector<int> a( n ) ;
		for( int i = 0; i<n; i++ )
		{
			cin>>a[i] ;
		}
		sort( a.begin(), a.end() ) ;
		
		int i = 1 ;
		while( a[i]-a[i-1]<2 )
		{
			i++ ;
		}

		if( m>a[i-1]+1 )	cout<<-1<<"\n" ;
		else if( m==a[i-1]+1 ) cout<<n<<"\n" ;
		else cout<<n-1<<"\n" ;
	}

	return 0 ;
}