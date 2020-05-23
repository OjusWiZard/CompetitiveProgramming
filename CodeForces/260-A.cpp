#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int a, b, n ;
	cin>>a>>b>>n ;

	bool found = false ;
	for( int i = 0, na=a*10; i<10; i++, na=a*10 )
	{
		na += i ;
		if( na%b==0 )
		{
			found = true ;
			a = na ;
			n-- ;
			break ;
		}
	}
	if( !found )	cout<<-1 ;
	else
	{
		cout<<a ;
		while( n-- )	cout<<0 ;
	}

	return 0 ;
}