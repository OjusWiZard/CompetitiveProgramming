#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	bool a[3000] = { false } ;
	int n ;
	cin>>n ;
	while( n-- )
	{
		int i ;
		cin>>i ;
		a[--i] = true ;
	}
	int i ;
	for( i = 0 ; i<3000 ; i++ )	if( !a[i] )
	{
		cout<<i+1;
		break ;
	}
	if( i==3000 )	cout<<i+1 ;
	return 0 ;
}