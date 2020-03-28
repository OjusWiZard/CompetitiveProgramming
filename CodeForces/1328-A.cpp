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
		int n, k ;
		cin>>n>>k ;
		string s( n, 'a' ) ;
		int first = n-1-( ( sqrt( 8*k+1 )-1 )/2 ) ;
		s[first] = 'b' ;
		int tn ;
		tn = ( sqrt( 8*k+1 )-1 )/2 ;
		tn = tn*( tn+1 )/2 ;
		s[n-k+tn] = 'b' ;
		if( (n-k+tn)==n ) s[first+1] = 'b' ;
		cout<<s<<"\n" ;
	}

	return 0 ;
}