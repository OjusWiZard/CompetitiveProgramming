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
		int s, n ;
		cin>>s>>n ;
		if( s<=n )
		{
			if( s%2==0 || s==1 )	cout<<1<<"\n" ;
			else					cout<<2<<"\n" ;
		}
		else
		{
			int ans = s/n ;
			s = s%n ;
			if( s%2&&s!=1 )	cout<<ans+2<<"\n" ;
			else if( s!=0 )		cout<<ans+1<<"\n" ;
			else				cout<<ans<<"\n" ;
		}
	}

	return 0 ;
}