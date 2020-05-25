#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int n, k ;
	cin>>n>>k ;

	for( int i = n ; i>n-k ; i-- )
	{
		cout<<i<<" " ;
	}
	for( int i = 1; i<=n-k; i++ )
	{
		cout<<i<<" " ;
	}

	return 0 ;
}