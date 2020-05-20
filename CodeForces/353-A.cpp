#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int n, upper = 0, lower = 0 ;
	bool possible = false ;
	cin>>n ;
	for( int i = 0; i<n; i++ )
	{
		int a, b ;
		cin>>a ;
		upper += a ;
		cin>>b ;
		lower += b ;
		if( (a%2&&b%2==0)||(a%2==0&&b%2) )	possible = true ;
	}

	if( upper%2&&lower%2&&possible )	cout<<1 ;
	else if( upper%2==0&&lower%2==0 )	cout<<0 ;
	else	cout<<-1 ;

	return 0 ;
}