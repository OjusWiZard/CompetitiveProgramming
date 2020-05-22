#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int n ;
	cin>>n ;

	vector<int> a( n ) ;
	for( int i = 0; i<n; i++ )
	{
		cin>>a[i] ;
	}

	int maxS = 0 ;
	for( int l = 0; l<n; l++ )
	{
		for( int r = l; r<n; r++ )
		{
			int sum = 0 ;
			for( int i = 0; i<l; i++ )		if( a[i]==1 )	sum++ ;
			for( int i = l; i<=r; i++ )		if( a[i]==0 )	sum++ ;
			for( int i = r+1; i<n; i++ )	if( a[i]==1 )	sum++ ;
			maxS = max( maxS, sum ) ;
		}
	}
	cout<<maxS ;

	return 0 ;
}