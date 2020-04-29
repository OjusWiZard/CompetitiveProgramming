#include <bits/stdc++.h>
using namespace std ;

int main()
{
	ios::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int t ;
	cin>>t ;
	while( t-- )
	{
		int n, k ;
		cin>>n>>k ;
		vector<vector<int> > a(k)  ;
		for( int i = 0; i<n; i++ )
		{
			int t ;
			cin>>t ;
			a[i%k].push_back( t ) ;
		}

		for( int i = 0; i<k; i++ )
		{
			sort( a[i].begin(), a[i].end() ) ;
		}

		bool acc=true, dec=true ;
		for( int i = 0; i<n-1; i++ )
		{
			if( a[i%k][i/k]<a[(i+1)%k][(i+1)/k] )	acc = false ;
			if( a[i%k][i/k]>a[(i+1)%k][(i+1)/k] )	dec = false ;
		}
		
		if( acc||dec )	cout<<"yes\n" ;
		else	cout<<"no\n" ;
	}

	return 0 ;
}