#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int n, m, i=1 ;
	cin>>n>>m ;
	while( m>=i )
	{
		m -= i ;
		i++ ;
		if( i>n )	i = 1 ;
	}
	cout<<m ;

	return 0 ;
}