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
		int n, m, k ;
		cin>>n>>m>>k ;
		if( m<=n/k )	cout<<m<<"\n" ;
		else			cout<<n/k-ceil( (float)(m-n/k)/(k-1) )<<"\n" ;
	}
	
	return 0 ;
}