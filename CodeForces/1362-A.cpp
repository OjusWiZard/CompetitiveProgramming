#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int t ;
	cin>>t ;
	while( t-- )
	{
		long long int a, b, cnt = -1 ;
		bool madeChange=true ;
		cin>>a>>b ;

		while( madeChange )
		{
			madeChange = false ;
			if( a<b )
			{
				if( abs( a*2-b )<abs( a-b ) )
				{
					a *= 2 ;
					madeChange = true ;
				}
				if( abs( a*2-b )<abs( a-b ) )
				{
					a *= 2 ;
					madeChange = true ;
				}
				if( abs( a*2-b )<abs( a-b ) )
				{
					a *= 2 ;
					madeChange = true ;
				}
			}
			else
			{
				if( abs( a/2-b )<abs( a-b ) && a%2==0 )
				{
					a /= 2 ;
					madeChange = true ;
				}
				if( abs( a/2-b )<abs( a-b ) && a%2==0 )
				{
					a /= 2 ;
					madeChange = true ;
				}
				if( abs( a/2-b )<abs( a-b ) && a%2==0 )
				{
					a /= 2 ;
					madeChange = true ;
				}
			}
			cnt++ ;
		}
		if( a==b )	cout<<cnt<<"\n" ;
		else cout<<-1<<"\n" ;
	}

	return 0 ;
}