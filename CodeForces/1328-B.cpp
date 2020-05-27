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
		unsigned long long int n, k, b1, b2 ;
		cin>>n>>k ;

		string str( n, 'a' ) ;
		
		b1 = ceil( (sqrt( 1+8*k )-1)/2 ) ;
		b2 = k - b1*(b1-1)/2 - 1 ;

		str[n-1-b1] = str[n-1-b2] = 'b' ;
		cout<<str<<"\n" ;
	}

	return 0 ;
}