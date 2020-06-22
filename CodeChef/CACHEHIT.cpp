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
		int n, m, b, prevB, x, count=1 ;
		cin>>n>>b>>m ;
		cin>>x ;
		prevB = x/b ;
		while( --m )
		{
			cin>>x ;
			if( x/b!=prevB )	count++ ;
			prevB = x/b ;
		}
		cout<<count<<"\n" ;
	}

	return 0 ;
}