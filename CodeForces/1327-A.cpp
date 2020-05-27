#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int t ;
	cin>>t ;
	while( t-- )
	{
		unsigned long long int n, k ;
		cin>>n>>k ;

		if( k*k>n )	cout<<"NO\n" ;
		else if( n%2!=k%2 )	cout<<"NO\n" ;
		else cout<<"YES\n" ;
	}

	return 0 ;
}