#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int n ;
	cin>>n ;

	for( int i=1, j=n*n; i<j; i++, j-- )
	{
		cout<<i<<" "<<j<<" " ;
		if( i%(n/2)==0 )	cout<<"\n" ;
	}

	return 0 ;
}