#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int n ;
	cin>>n ;
	vector<int> a(n) ;
	for( int i = 0; i<n; i++ )
	{
		cin>>a[i] ;
	}

	unsigned long long int maxLength = min(n,2), l=0, r=2 ;
	while( r<n )
	{
		if( a[r]==a[r-1]+a[r-2] )
		{
			maxLength = max( maxLength, r-l+1 ) ;
			r++ ;
		}
		else
		{
			l = r-1 ;
			r++ ;
		}
	}

	cout<<maxLength ;

	return 0 ;
}