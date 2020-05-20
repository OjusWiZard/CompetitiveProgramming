#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int n, r100=0, r50=0, r25=0 ;
	cin>>n ;
	while( n-- )
	{
		int bill ;
		cin>>bill ;
		switch( bill )
		{
			case 25 :
				r25++ ;
				break ;
			case 50 :
				if( r25 )
				{
					r50++ ;
					r25-- ;
				}
				else
				{
					cout<<"NO" ;
					return 0 ;
				}
				break ;
			case 100 :
				if( r50 && r25 )
				{
					r100++ ;
					r50-- ;
					r25-- ;
				}
				else if( r25>=3 )
				{
					r100++ ;
					r25 -= 3 ;
				}
				else
				{
					cout<<"NO" ;
					return 0 ;
				}
		}
	}
	cout<<"YES" ;

	return 0 ;
}