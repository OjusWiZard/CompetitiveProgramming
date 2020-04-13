#include <bits/stdc++.h>
using namespace std ;

int main()
{
	ios::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int t ;
	cin>>t ;
	while( t-- )
	{
		int n, a, first=-1, second ;
		cin>>n ;
		bool cool = true ;
		for( int i = 0; i<n; i++ )
		{
			cin>>a ;
			if( a==1 )
			{
				if( first==-1 )	first = i ;
				else
				{
					second = i ;
					if( second-first<6 )	cool = false ;
					first = second ;
				}
			}
		}
		if( cool )	cout<<"YES\n" ;
		else		cout<<"NO\n" ;
	}

	return 0 ;
}