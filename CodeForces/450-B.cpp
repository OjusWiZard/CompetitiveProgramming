#include <bits/stdc++.h>

using namespace std;

int mod( int a, int b )
{
	int r = a%b;
	return r<0 ? r+b : r;
}

int main()
{
	ios_base::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int n, x, y ;
	cin>>x>>y>>n ;
	
	switch( n%6 )
	{
		case 1 :
			cout<<mod( x, 1e9+7 ) ;	break ;
		case 2 :
			cout<<mod( y, 1e9+7 ) ; break ;
		case 3 :
			cout<<mod( y-x, 1e9+7 ) ; break ;
		case 4 :
			cout<<mod( -x, 1e9+7 ) ; break ;
		case 5 :
			cout<<mod( -y, 1e9+7 ) ; break ;
		case 0 :
			cout<<mod( x-y, 1e9+7 ) ; break ;
	}

	return 0 ;
}