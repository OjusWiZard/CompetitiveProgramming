#include <bits/stdc++.h>

using namespace std;

bool isLucky( int i )
{
	string I = to_string( i ) ;
	bool good = true ;
	for( char i = '0'; i<='9'; i++ )
	{
		if( I.find( i )!=string::npos&&i!='4'&&i!='7' ) good = false ;
	}
	return good ;
}

int main()
{
	ios_base::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int n ;
	cin>>n ;

	for( int i = 1; i<=n; i++ )
	{
		if( n%i==0&&isLucky( i ) )
		{
			cout<<"YES" ;
			return 0 ;
		}
	}
	cout<<"NO" ;

	return 0 ;
}