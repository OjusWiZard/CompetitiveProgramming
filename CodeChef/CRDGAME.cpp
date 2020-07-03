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
		int n ;
		long long chef = 0, morty = 0 ;
		cin>>n ;
		while( n-- )
		{
			int a, b, powerA=0, powerB=0 ;
			cin>>a>>b ;
			while( a )
			{
				powerA += a%10 ;
				a /= 10 ;
			}
			while( b )
			{
				powerB += b%10 ;
				b /= 10 ;
			}
			if( powerA>powerB ) chef++ ;
			else if( powerA<powerB ) morty++ ;
			else
			{
				chef++ ;
				morty++ ;
			}
		}
		if( chef>morty ) cout<<0<<" " ;
		else if( chef<morty ) cout<<1<<" " ;
		else cout<<2<<" " ;
		cout<<max( chef, morty )<<"\n" ;
	}

	return 0 ;
}