#include <bits/stdc++.h>

using namespace std;

bool isPrime( int num )
{
	int rt = sqrt( num ) ;
	for( int i = 2 ; i<=rt ; i++ )
	{
		if( num%i==0 )	return false ;
	}
	return true ;
}

int main()
{
	ios_base::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int n ;
	cin>>n ;

	while( n-- )
	{
		unsigned long long int num ;
		cin>>num ;
		if( floor(sqrt(num))==ceil(sqrt(num)) && num!=1 && isPrime( sqrt(num) ) )	cout<<"YES\n" ;
		else cout<<"NO\n" ;
	}

	return 0 ;
}