#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	unsigned long long int n, moves=0 ;
	cin>>n ;

	vector<int> p( n ) ;
	for( int i = 0; i<n; i++ )
	{
		cin>>p[i] ;
	}

	sort( p.begin(), p.end() ) ;

	for( int i = 0; i<n; i++ )
	{
		moves += abs( i+1-p[i] ) ;
	}
	cout<<moves ;

	return 0 ;
}