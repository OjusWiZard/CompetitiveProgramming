#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int t ;
	cin>>t ;
	while( t-- )
	{
		int g ;
		cin>>g ;
		while( g-- )
		{
			int i, n, q ;
			cin>>i>>n>>q ;
			i = i%2 ;
			q = q%2 ;
			if( q )
			{
				if( i )
				{
					cout<<n/2<<"\n" ;
				}
				else
				{
					cout<<(n+1)/2<<"\n" ;
				}
			}
			else
			{
				if( i )
				{
					cout<<(n+1)/2<<"\n" ;
				}
				else
				{
					cout<<n/2<<"\n" ;
				}
			}
		}
	}

	return 0 ;
}