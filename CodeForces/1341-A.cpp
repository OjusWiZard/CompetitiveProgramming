#include<bits/stdc++.h>

using namespace std ;

int main()
{
	ios::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int t ;
	cin>>t ;
	while( t-- )
	{
		int n, a, b, c, d ;
		cin>>n>>a>>b>>c>>d ;
		a *= n ;
		b *= n ;

		if( c-d > a+b || c+d < a-b )	cout<<"NO\n" ;
		else	cout<<"YES\n" ;
	}

	return 0;
}