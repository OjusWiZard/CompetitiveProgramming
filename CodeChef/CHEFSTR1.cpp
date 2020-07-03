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
		int n, s ;
		long long ans = 0 ;
		cin>>n ;
		n-- ;
		cin>>s ;
		while( n-- )
		{
			int s2 ;
			cin>>s2 ;
			ans += abs( s-s2 )-1 ;
			s = s2 ;
		}
		cout<<ans<<"\n" ;
	}

	return 0 ;
}