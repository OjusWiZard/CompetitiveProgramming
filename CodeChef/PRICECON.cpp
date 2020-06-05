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
		int n, k ;
		long long loss = 0 ;
		cin>>n>>k ;
		while( n-- )
		{
			int p ;
			cin>>p ;
			loss += max( 0, p-k ) ;
		}
		cout<<loss<<"\n" ;
	}

	return 0 ;
}