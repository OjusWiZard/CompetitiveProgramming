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

	sort( a.begin(), a.end() ) ;
	reverse( a.begin(), a.end() ) ;

	if( n>2 )
		reverse( a.begin()+1, a.end()-1 ) ;

	for( int i = 0; i<n; i++ )	cout<<a[i]<<" " ;

	return 0 ;
}