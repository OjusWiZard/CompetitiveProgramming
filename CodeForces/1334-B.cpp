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
		int n, x ;
		cin>>n>>x ;
		vector<int> a( n ) ;
		for( int i = 0; i<n; i++ )
		{
			cin>>a[i] ;
			a[i] = a[i]-x ;
		}
		sort( a.begin(), a.end() ) ;
		reverse( a.begin(), a.end() ) ;
		long long int total = 0 ;
		for( int i = 0; i<n; i++ )
		{
			total += a[i] ;
			if( total<0 )
			{
				cout<<i<<"\n" ;
				break ;
			}
		}
		if( total>=0 )
			cout<<n<<"\n" ;
	}

	return 0;
}