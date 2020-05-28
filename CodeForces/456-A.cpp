#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int n ;
	cin>>n ;
	bool prev ;
	int a, b ;
	cin>>a>>b ;
	prev = a<b ;
	while( --n )
	{
		cin>>a>>b ;
		if( prev!=a<b )
		{
			cout<<"Happy Alex" ;
			break ;
		}
		prev = a<b ;
	}
	if( n==0 )	cout<<"Poor Alex" ;

	return 0 ;
}